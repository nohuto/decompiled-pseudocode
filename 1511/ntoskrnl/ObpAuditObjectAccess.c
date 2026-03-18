/*
 * XREFs of ObpAuditObjectAccess @ 0x14062DC14
 * Callers:
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceFileObjectForWrite @ 0x1404369A0 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x140079FA4 (ExLockHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 *     SeOperationAuditAlarm @ 0x14064F278 (SeOperationAuditAlarm.c)
 *     ExpGetHandleExtraInfo @ 0x14066C9D8 (ExpGetHandleExtraInfo.c)
 */

char __fastcall ObpAuditObjectAccess(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 a4, int a5)
{
  char v5; // bl
  int *HandleExtraInfo; // rsi
  struct _KTHREAD *CurrentThread; // r15
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rcx

  v5 = 0;
  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  HandleExtraInfo = (int *)ExpGetHandleExtraInfo(a1, a2);
  if ( !HandleExtraInfo )
    return 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExLockHandleTableEntry(a1, a3) )
  {
    _m_prefetchw(HandleExtraInfo);
    v12 = *HandleExtraInfo;
    if ( a4 == ((*(__int64 *)a3 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v13 = a5 & v12;
      if ( (a5 & v12) != 0 )
      {
        *HandleExtraInfo = v12 & ~a5;
        if ( (*(_BYTE *)(a4 + 26) & 0x20) != 0 )
          v14 = a4 - ObpInfoMaskToOffset[*(_BYTE *)(a4 + 26) & 0x3F];
        else
          v14 = 0LL;
        SeOperationAuditAlarm(
          v14,
          a4 + 48,
          a2,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a4 + 24) ^ (unsigned __int64)BYTE1(a4)]
        + 16,
          v13);
      }
      v5 = 1;
    }
    ExUnlockHandleTableEntry(a1, a3);
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}
