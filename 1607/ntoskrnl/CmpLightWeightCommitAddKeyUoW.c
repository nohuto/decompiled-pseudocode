/*
 * XREFs of CmpLightWeightCommitAddKeyUoW @ 0x14060E3DC
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAssignSecurityToKcb @ 0x1403FCCF8 (CmpAssignSecurityToKcb.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14060E390 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x14060F8D4 (CmpLightWeightSwapParentSubKeyList.c)
 */

__int64 __fastcall CmpLightWeightCommitAddKeyUoW(__int64 a1, _QWORD *a2)
{
  unsigned int *v4; // r14
  __int64 v5; // rax
  ULONG_PTR v6; // rdi
  __int64 v7; // rbp
  ULONG_PTR v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int16 v11; // dx
  unsigned int v12; // eax
  __int64 result; // rax
  int v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+64h] [rbp+Ch]
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+6Ch] [rbp+14h]

  v16 = -1;
  v14 = -1;
  v4 = *(unsigned int **)(a1 + 104);
  v17 = 0;
  v15 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v5 + 24);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(v5 + 32), &v16);
  v8 = *(unsigned int *)(v7 + 44);
  *(_DWORD *)(v7 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL);
  CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), v8, 0LL, 0, 0);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(
         v6,
         *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL),
         &v14);
  v10 = v9;
  *(_QWORD *)(v9 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 160LL) = *a2;
  v11 = *(_WORD *)(v7 + 72);
  if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
    v11 *= 2;
  if ( (unsigned __int16)*(_DWORD *)(v9 + 52) < (unsigned int)v11 )
  {
    *(_WORD *)(v9 + 52) = v11;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 168LL) = v11;
  }
  v12 = *(unsigned __int16 *)(v7 + 74);
  if ( *(_DWORD *)(v10 + 56) < v12 )
    *(_DWORD *)(v10 + 56) = v12;
  if ( *v4 == 1 )
    CmpLightWeightSwapParentSubKeyList(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL), v4);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v14);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v16);
  CmpLightWeightCleanupModifyKeyDataUoW(v6, v4);
  result = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(result + 232) = 0LL;
  return result;
}
