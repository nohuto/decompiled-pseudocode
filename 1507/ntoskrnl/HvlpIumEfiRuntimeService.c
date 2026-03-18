/*
 * XREFs of HvlpIumEfiRuntimeService @ 0x1401EE194
 * Callers:
 *     <none>
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvlpLockPagesForTransfer @ 0x1401EE400 (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401EE618 (HvlpUnlockPagesForTransfer.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall HvlpIumEfiRuntimeService(unsigned int a1, __int64 a2, unsigned int a3, __int128 *a4)
{
  __int64 v4; // rsi
  unsigned __int64 result; // rax
  __int128 v7; // xmm1
  unsigned __int8 CurrentIrql; // si
  NTSTATUS v9; // edi
  unsigned int v10; // edi
  __int128 v11; // xmm1
  unsigned __int64 v12; // rbx
  _QWORD v13[8]; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int8 v14[8]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v15; // [rsp+78h] [rbp-41h]
  __int64 v16; // [rsp+80h] [rbp-39h]
  __int64 v17; // [rsp+88h] [rbp-31h]
  unsigned __int64 v18; // [rsp+90h] [rbp-29h]
  __int128 v19; // [rsp+98h] [rbp-21h]
  __int128 v20; // [rsp+A8h] [rbp-11h]
  void *retaddr; // [rsp+118h] [rbp+5Fh]

  memset(v13, 0, sizeof(v13));
  v4 = a1;
  if ( a2 )
  {
    LODWORD(result) = HvlpLockPagesForTransfer(v13, a2, a3, 2LL, 1);
    if ( (result & 0x80000000) != 0LL )
      return (int)result;
  }
  v16 = v13[0];
  v17 = v13[7];
  v15 = v4;
  if ( a4 )
  {
    v7 = a4[1];
    v19 = *a4;
    v20 = v7;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&HvlpIumEfiLock);
  }
  else
  {
    v10 = 0;
    if ( _interlockedbittestandset(&HvlpIumEfiLock, 0x1Fu) )
      v10 = ExpWaitForSpinLockExclusiveAndAcquire(&HvlpIumEfiLock);
    while ( (HvlpIumEfiLock & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (HvlpIumEfiLock & 0x40000000) == 0 )
        _InterlockedCompareExchange(&HvlpIumEfiLock, HvlpIumEfiLock | 0x40000000, HvlpIumEfiLock);
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
  }
  v9 = HvlpEnterIumSecureMode(1u, 232, 0, v14);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&HvlpIumEfiLock, retaddr);
  else
    HvlpIumEfiLock = 0;
  __writecr8(CurrentIrql);
  if ( a4 )
  {
    v11 = v20;
    *a4 = v19;
    a4[1] = v11;
  }
  if ( v9 == -1073741811 )
  {
    v12 = 0x8000000000000002uLL;
  }
  else if ( v9 == -1073741801 )
  {
    v12 = 0x8000000000000009uLL;
  }
  else
  {
    v12 = v18;
    if ( v9 )
      v12 = 0x8000000000000003uLL;
  }
  if ( v13[0] )
    HvlpUnlockPagesForTransfer(v13);
  return v12;
}
