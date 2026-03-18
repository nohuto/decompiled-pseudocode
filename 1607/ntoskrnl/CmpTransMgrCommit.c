/*
 * XREFs of CmpTransMgrCommit @ 0x1404DA7A0
 * Callers:
 *     CmKtmNotification @ 0x1404D9B64 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x140603320 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x14060597C (CmpRmUnDoPhase.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     CmpCommitLightWeightTransaction @ 0x14053A870 (CmpCommitLightWeightTransaction.c)
 *     CmpInitializeLightWeightTransaction @ 0x140603750 (CmpInitializeLightWeightTransaction.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // edi
  char v5; // si
  __int64 QuadPart; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v9[4]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h]
  char v11; // [rsp+50h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-28h] BYREF

  Interval.HighPart = -1;
  *a3 = 0;
  Interval.LowPart = -1000000;
  if ( stru_1402F34E0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F34E0, 1uLL) )
    TlgWrite(&stru_1402F34E0, &unk_14027B083, 0LL, 0LL, 2u, &pData);
  v4 = CmpInitializeLightWeightTransaction(v9);
  if ( v4 >= 0 )
  {
    v10 = a2;
    v5 = 1;
    QuadPart = Interval.QuadPart;
    v11 = 1;
    do
    {
      if ( v5 )
      {
        v5 = 0;
      }
      else
      {
        KeDelayExecutionThread(0, 0, &Interval);
        QuadPart *= 2LL;
        Interval.QuadPart = QuadPart;
        if ( QuadPart > -300000000 )
        {
          QuadPart = -300000000LL;
          Interval.QuadPart = -300000000LL;
        }
      }
      v9[0] = 0;
      v4 = CmpCommitLightWeightTransaction(v9);
    }
    while ( v4 < 0 );
  }
  if ( stru_1402F34E0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F34E0, 1uLL) )
    TlgWrite(&stru_1402F34E0, &unk_14027B061, 0LL, 0LL, 2u, &pData);
  return (unsigned int)v4;
}
