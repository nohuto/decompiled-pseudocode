/*
 * XREFs of CmpLightWeightCommitDeleteKeyUoW @ 0x14060E518
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1403FAEDC (CmpCleanupDiscardReplaceContext.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FCAE8 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404D35A0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpMarkKeyUnbacked @ 0x140518288 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14060B9BC (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14060E390 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x14060F8D4 (CmpLightWeightSwapParentSubKeyList.c)
 */

void __fastcall CmpLightWeightCommitDeleteKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int *v5; // rsi
  ULONG_PTR v6; // rdi
  int v7; // r9d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  ULONG_PTR v12; // rcx
  int v13; // [rsp+30h] [rbp-50h] BYREF
  __int16 v14; // [rsp+34h] [rbp-4Ch]
  _DWORD v15[2]; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 48);
  v15[0] = -1;
  v5 = *(unsigned int **)(a1 + 104);
  v15[1] = 0;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (int)CmpFreeKeyByCell(v6, *(unsigned int *)(v2 + 32), 0) < 0
    && stru_1402F34E0.LevelPlus1 > 5
    && TlgKeywordOn(&stru_1402F34E0, 0x200000000000uLL) )
  {
    v13 = v7;
    v17 = &v13;
    v18 = 4LL;
    TlgWrite(&stru_1402F34E0, &unk_14027B2F1, 0LL, 0LL, 3u, &pData);
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL);
  if ( *v5 == 1 )
    CmpLightWeightSwapParentSubKeyList(v6, *(unsigned int *)(v8 + 32), v5);
  CmpCleanUpSubKeyInfo(v8);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, *(unsigned int *)(v8 + 32), v15);
  *(_WORD *)(v8 + 168) = *(_WORD *)(v9 + 52);
  *(_QWORD *)(v9 + 4) = *a2;
  *(_QWORD *)(v8 + 160) = *a2;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v15);
  v10 = *(_QWORD *)(a1 + 48);
  v13 = 8;
  v14 = 257;
  CmpEnumerateAllHigherLayerKcbs(
    v10,
    (__int64)CmpFlushNotifiesPreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpFlushNotifiesPostCallback,
    (__int64)&v13,
    1,
    1);
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8LL, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 48));
  v11 = *(_QWORD *)(a1 + 112);
  v12 = *(_QWORD *)(a1 + 48);
  if ( v11 )
  {
    CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v12, v11);
    CmpCleanupDiscardReplaceContext(*(_QWORD **)(a1 + 112));
    MiDeleteSubsection(*(PPRIVILEGE_SET *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else
  {
    CmpDiscardKcb(v12);
  }
  CmpLightWeightCleanupModifyKeyDataUoW(v6, v5);
  *(_QWORD *)(a1 + 104) = 0LL;
}
