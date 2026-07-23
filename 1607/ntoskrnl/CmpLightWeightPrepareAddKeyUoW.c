/*
 * XREFs of CmpLightWeightPrepareAddKeyUoW @ 0x14060ED60
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 *     CmpAddSubKeyToList @ 0x14049B06C (CmpAddSubKeyToList.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14060E390 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x14060EBD4 (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareAddKeyUoW(__int64 a1)
{
  unsigned int v2; // r15d
  __int16 *v3; // r13
  __int64 v4; // rax
  ULONG_PTR v5; // rdi
  _DWORD *v6; // rsi
  int ModificationData; // eax
  unsigned int v8; // ebx
  unsigned int *v9; // rbx
  __int64 v10; // r12
  _DWORD *v11; // r12
  __int16 v12; // r13
  int Cell; // ecx
  __int16 *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int16 *v19; // [rsp+40h] [rbp-18h] BYREF
  signed int v20; // [rsp+A0h] [rbp+48h]
  int v21; // [rsp+A8h] [rbp+50h] BYREF
  int v22; // [rsp+ACh] [rbp+54h]
  int v23; // [rsp+B0h] [rbp+58h] BYREF
  int v24; // [rsp+B4h] [rbp+5Ch]
  PVOID P; // [rsp+B8h] [rbp+60h] BYREF

  v23 = -1;
  v24 = 0;
  v2 = -1;
  v21 = -1;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 48);
  v22 = 0;
  v19 = 0LL;
  v5 = *(_QWORD *)(v4 + 24);
  v20 = *(_DWORD *)(a1 + 72);
  v6 = *(_DWORD **)(*(_QWORD *)(a1 + 80) + 104LL);
  P = v6;
  if ( v6 )
  {
    ++*v6;
  }
  else
  {
    ModificationData = CmpLightWeightCreateModificationData(a1, (unsigned int **)&P);
    v6 = P;
    v8 = ModificationData;
    if ( ModificationData < 0 )
      goto LABEL_25;
  }
  v9 = *(unsigned int **)(*(_QWORD *)(a1 + 48) + 64LL);
  P = v9;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, v9[8], &v23);
  if ( !v10 )
  {
    v8 = -1073741670;
    goto LABEL_25;
  }
  if ( !HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 1)
    || !HvpMarkCellDirty(v5, v9[8], 1)
    || !HvpMarkCellDirty(v5, *(unsigned int *)(v10 + 4LL * v20 + 28), 1) )
  {
    v8 = -1073741443;
    goto LABEL_21;
  }
  v11 = &v6[v20];
  if ( v11[3] != -1 )
  {
LABEL_16:
    v15 = CmpCopyKeyPartial(v5, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), v5, *((_DWORD *)P + 8), 38, v18, v20);
    v2 = v15;
    if ( v15 == -1 || !CmpAddSubKeyToList(v5, v11 + 3, v15) )
    {
      v8 = -1073741670;
    }
    else
    {
      ++v6[v20 + 1];
      v8 = 0;
      v16 = *(_QWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(v16 + 32);
      *(_DWORD *)(v16 + 32) = v2;
      v2 = -1;
      *(_QWORD *)(a1 + 104) = v6;
      v6 = 0LL;
    }
    goto LABEL_21;
  }
  v12 = 26732;
  if ( *(_DWORD *)(v5 + 196) < 5u )
    v12 = 26220;
  Cell = HvAllocateCell(v5, 12, (unsigned int)v20, (__int64)&v19, (__int64)&v21);
  if ( Cell != -1 )
  {
    v14 = v19;
    *v19 = v12;
    v14[1] = 0;
    v11[3] = Cell;
    v6[v20 + 1] = 0;
    (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v21);
    v3 = 0LL;
    goto LABEL_16;
  }
  v3 = v19;
  v8 = -1073741670;
LABEL_21:
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v23);
  if ( v3 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v21);
  if ( v2 != -1 )
    CmpFreeKeyByCell(v5, v2, 0);
LABEL_25:
  if ( v6 )
  {
    CmpLightWeightCleanupModifyKeyDataUoW(v5, v6);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return v8;
}
