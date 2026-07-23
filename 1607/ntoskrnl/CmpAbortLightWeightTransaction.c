/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x1404CB8DC
 * Callers:
 *     CmpRollbackLightWeightTransaction @ 0x1404CB88C (CmpRollbackLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x14053ADB0 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpCleanupLightWeightTransaction @ 0x1404CB980 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1404CBA14 (CmpTransMgrRollback.c)
 */

void __fastcall CmpAbortLightWeightTransaction(__int64 a1)
{
  ULONG_PTR v2; // rbx
  int v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-60h] BYREF
  int *v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+64h] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-30h] BYREF

  v3 = 0;
  if ( stru_1402F34E0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F34E0, 1uLL) )
    TlgWrite(&stru_1402F34E0, &unk_14027AEBE, 0LL, 0LL, 2u, &pData);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    CmpTransMgrRollback(v2, &v3);
    CmpCleanupLightWeightTransaction(v2);
  }
  if ( stru_1402F34E0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1402F34E0, 1uLL) )
    {
      v8 = 0;
      v4 = v3;
      v6 = &v4;
      v7 = 4;
      TlgWrite(&stru_1402F34E0, &unk_14027AE88, 0LL, 0LL, 3u, &v5);
    }
  }
}
