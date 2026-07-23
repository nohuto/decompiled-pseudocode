/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x14051B7DC
 * Callers:
 *     PspExitProcess @ 0x14045F434 (PspExitProcess.c)
 *     PsSetProcessFaultInformation @ 0x1404D2AC8 (PsSetProcessFaultInformation.c)
 *     PsThawProcess @ 0x140501050 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140501490 (PsFreezeProcess.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406A7ECC (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14010D1A8 (PspLockProcessExclusive.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PsGetProcessDeepFreezeStats @ 0x1404EC57C (PsGetProcessDeepFreezeStats.c)
 *     EtwTraceAppStateChange @ 0x14051B448 (EtwTraceAppStateChange.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(struct _EX_RUNDOWN_REF *BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // r13
  unsigned int v6; // esi
  unsigned __int64 v7; // r14
  unsigned __int64 Count; // rcx
  unsigned __int64 v9; // r15
  unsigned __int64 v11; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+28h] [rbp-58h]
  __int64 v13; // [rsp+30h] [rbp-50h]
  _QWORD v14[8]; // [rsp+40h] [rbp-40h] BYREF

  memset(v14, 0, 0x38uLL);
  CurrentThread = KeGetCurrentThread();
  do
  {
    PsGetProcessDeepFreezeStats((__int64)BugCheckParameter1, &v11);
    v5 = v12;
    v6 = 0;
    v7 = v12 - v13 - BugCheckParameter1[234].Count;
    PspLockProcessExclusive((__int64)BugCheckParameter1, (__int64)CurrentThread);
    Count = BugCheckParameter1[237].Count;
    v9 = v11;
    if ( Count >> 61 != 3 && BugCheckParameter1[236].Count <= v11 )
    {
      v14[2] = BugCheckParameter1[236].Count;
      LODWORD(v14[6]) = (Count >> 61) & 7;
      v14[3] = Count & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && BugCheckParameter1[237].Count >> 61 == 1 )
        a2 = 6;
      BugCheckParameter1[236].Count = v11;
      BugCheckParameter1[237].Count = v7 & 0x1FFFFFFFFFFFFFFFLL ^ ((__int64)a2 << 61);
      v6 = 1;
    }
    PspUnlockProcessExclusive((__int64)BugCheckParameter1, (__int64)CurrentThread);
  }
  while ( BugCheckParameter1[237].Count >> 61 != 3 && !v6 );
  if ( v6 )
  {
    v14[5] = v13;
    v14[0] = v9;
    v14[1] = v5;
    v14[4] = v7;
    HIDWORD(v14[6]) = a2;
    EtwTraceAppStateChange(BugCheckParameter1, (__int64)v14);
  }
  return v6;
}
