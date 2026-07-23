/*
 * XREFs of CmpLightWeightCommitRenameKeyUoW @ 0x14060E88C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpDiscardKcb @ 0x14000A96C (CmpDiscardKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4AC0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpMarkKeyUnbacked @ 0x140518288 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140518304 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpUpdateParentForEachSon @ 0x14060B310 (CmpUpdateParentForEachSon.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14060E390 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x14060F8D4 (CmpLightWeightSwapParentSubKeyList.c)
 */

void __fastcall CmpLightWeightCommitRenameKeyUoW(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int16 v8; // dx
  char v9; // r8
  unsigned int *v10; // rbx
  ULONG_PTR v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  _QWORD v14[2]; // [rsp+20h] [rbp-10h] BYREF
  int v15; // [rsp+60h] [rbp+30h] BYREF
  int v16; // [rsp+64h] [rbp+34h]
  int v17; // [rsp+68h] [rbp+38h] BYREF
  int v18; // [rsp+6Ch] [rbp+3Ch]

  v16 = 0;
  v15 = -1;
  v17 = -1;
  v4 = a1[6];
  v18 = 0;
  v5 = *(_QWORD *)(v4 + 24);
  CmpUpdateParentForEachSon(v5, *(unsigned int *)(v4 + 32), 0);
  HvFreeCell(v5, *(unsigned int *)(a1[11] + 32));
  CmpFlushNotifiesOnKeyBodyList(a1[11], 8LL, 1);
  CmpMarkKeyUnbacked(a1[11]);
  CmpDiscardKcb(a1[11]);
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)(a1[6] + 32), &v15);
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(*(_QWORD *)(a1[6] + 64) + 32LL);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(
         v5,
         *(unsigned int *)(*(_QWORD *)(a1[6] + 64) + 32LL),
         &v17);
  *(_QWORD *)(v7 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1[6] + 64) + 160LL) = *a2;
  v8 = *(_WORD *)(v6 + 72);
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
    v8 *= 2;
  if ( (unsigned __int16)*(_DWORD *)(v7 + 52) < (unsigned int)v8 )
  {
    *(_WORD *)(v7 + 52) = v8;
    *(_WORD *)(*(_QWORD *)(a1[6] + 64) + 168LL) = v8;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *, __int64))(v5 + 16))(v5, &v15, v7);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v17);
  v14[1] = a1[6];
  v14[0] = a1[11];
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(_QWORD *, ULONG_PTR, __int64))CmpRefreshParent,
    v5,
    (__int64)v14,
    0);
  CmpSearchForOpenSubKeys(a1[6], 3, v9, 0LL);
  v10 = (unsigned int *)a1[13];
  if ( *v10 == 1 )
    CmpLightWeightSwapParentSubKeyList(v5, *(unsigned int *)(*(_QWORD *)(a1[6] + 64) + 32LL), a1[13]);
  CmpLightWeightCleanupModifyKeyDataUoW(v5, v10);
  v11 = a1[6];
  LOBYTE(v12) = 1;
  a1[13] = 0LL;
  CmpDereferenceKeyControlBlockWithLock(v11, v12);
  LOBYTE(v13) = 1;
  CmpDereferenceKeyControlBlockWithLock(a1[11], v13);
}
