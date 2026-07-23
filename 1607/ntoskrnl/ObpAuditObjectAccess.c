/*
 * XREFs of ObpAuditObjectAccess @ 0x140665E04
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x140445D20 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x1400CF5D0 (ExLockHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     SeOperationAuditAlarm @ 0x14068E9CC (SeOperationAuditAlarm.c)
 *     ExpGetHandleExtraInfo @ 0x1406AD68C (ExpGetHandleExtraInfo.c)
 */

char __fastcall ObpAuditObjectAccess(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 a4, int a5)
{
  char v5; // bl
  int v8; // r12d
  int *HandleExtraInfo; // rsi
  struct _KTHREAD *CurrentThread; // r15
  int v12; // ecx
  int v13; // r8d
  int v14; // ecx

  v5 = 0;
  v8 = a2;
  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  HandleExtraInfo = (int *)ExpGetHandleExtraInfo(a1, a2, a3);
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
          v14 = 0;
        SeOperationAuditAlarm(
          v14,
          a4 + 48,
          v8,
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
