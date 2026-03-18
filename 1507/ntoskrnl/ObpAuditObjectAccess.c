/*
 * XREFs of ObpAuditObjectAccess @ 0x1406AB7EC
 * Callers:
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceFileObjectForWrite @ 0x1404BD320 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 *     SeOperationAuditAlarm @ 0x1406D2494 (SeOperationAuditAlarm.c)
 *     ExpGetHandleExtraInfo @ 0x1406F01F4 (ExpGetHandleExtraInfo.c)
 */

char __fastcall ObpAuditObjectAccess(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, int a5)
{
  int *HandleExtraInfo; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // r8
  int v12; // ecx
  char v13; // bp
  int v14; // r8d
  __int64 v15; // r10
  __int64 *v16; // rcx
  __int16 v17; // ax
  signed __int32 v19[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+30h] [rbp-38h]

  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  HandleExtraInfo = (int *)ExpGetHandleExtraInfo(a1, a2);
  if ( !HandleExtraInfo )
    return 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(a3);
      v11 = *a3;
      if ( (*a3 & 1) != 0 )
        break;
      if ( !v11 )
      {
        v13 = 0;
        goto LABEL_21;
      }
      ExpBlockOnLockedHandleEntry(a1, a3, v11);
    }
  }
  while ( v11 != _InterlockedCompareExchange64(a3, v11 - 1, v11) );
  _m_prefetchw(HandleExtraInfo);
  v12 = *HandleExtraInfo;
  if ( a4 == ((*a3 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) )
  {
    v14 = a5 & v12;
    if ( (a5 & v12) != 0 )
    {
      v15 = 0LL;
      *HandleExtraInfo = v12 & ~a5;
      if ( (*(_BYTE *)(a4 + 26) & 0x20) != 0 )
        v16 = (__int64 *)(a4 - ObpInfoMaskToOffset[*(_BYTE *)(a4 + 26) & 0x3F]);
      else
        v16 = 0LL;
      if ( v16 )
        v15 = *v16;
      v20 = v15;
      SeOperationAuditAlarm(
        v16,
        a4 + 48,
        a2,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a4 + 24) ^ (unsigned __int64)BYTE1(a4)]
      + 16,
        v14);
    }
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  _InterlockedExchangeAdd64(a3, 1uLL);
  _InterlockedOr(v19, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
LABEL_21:
  v17 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v13;
}
