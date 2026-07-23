/*
 * XREFs of CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpAddSubKeyToList @ 0x14049B06C (CmpAddSubKeyToList.c)
 *     CmpRemoveSubKeyFromList @ 0x1404B82D8 (CmpRemoveSubKeyFromList.c)
 *     CmpCopyCell @ 0x1404CE184 (CmpCopyCell.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404D35A0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 *     CmpMarkAllChildrenDirty @ 0x14060A914 (CmpMarkAllChildrenDirty.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14060E390 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x14060EBD4 (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareRenameKeyUoW(__int64 a1)
{
  __int64 v2; // rax
  signed int v3; // ebx
  ULONG_PTR v4; // r14
  _DWORD *v5; // rdi
  int ModificationData; // eax
  unsigned int v7; // ebx
  ULONG_PTR v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rax
  PVOID v11; // r12
  unsigned int v12; // r15d
  _DWORD *v13; // r12
  __int16 v14; // r13
  int Cell; // eax
  __int16 *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  ULONG_PTR v20; // [rsp+30h] [rbp-38h]
  __int16 *v21; // [rsp+38h] [rbp-30h] BYREF
  __int64 v22; // [rsp+40h] [rbp-28h] BYREF
  __int64 v23; // [rsp+48h] [rbp-20h]
  int v24; // [rsp+50h] [rbp-18h]
  unsigned int v25; // [rsp+B0h] [rbp+48h]
  PVOID P; // [rsp+B8h] [rbp+50h] BYREF
  int v27; // [rsp+C0h] [rbp+58h] BYREF
  int v28; // [rsp+C4h] [rbp+5Ch]
  int v29; // [rsp+C8h] [rbp+60h] BYREF
  int v30; // [rsp+CCh] [rbp+64h]

  v30 = 0;
  v29 = -1;
  v27 = -1;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 72);
  v28 = 0;
  v25 = v3;
  v4 = *(_QWORD *)(v2 + 24);
  v5 = *(_DWORD **)(*(_QWORD *)(a1 + 80) + 104LL);
  P = v5;
  if ( v5 )
  {
    ++*v5;
  }
  else
  {
    ModificationData = CmpLightWeightCreateModificationData(a1, (unsigned int **)&P);
    v5 = P;
    v7 = ModificationData;
    if ( ModificationData < 0 )
      goto LABEL_30;
    v3 = v25;
  }
  if ( !CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 48)) )
  {
    v7 = -1073741670;
    goto LABEL_30;
  }
  v8 = *(_QWORD *)(a1 + 48);
  v20 = v8;
  if ( CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 88)) )
  {
    v10 = *(_QWORD *)(a1 + 48);
    v11 = *(PVOID *)(a1 + 88);
    P = v11;
    if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v4 + 8))(
            v4,
            *(unsigned int *)(*(_QWORD *)(v10 + 64) + 32LL),
            &v29) )
    {
      v7 = -1073741670;
      goto LABEL_26;
    }
    if ( !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL), 1)
      || !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 1)
      || !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL), 1) )
    {
      v7 = -1073741443;
LABEL_25:
      (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v29);
LABEL_26:
      if ( v11 )
      {
        LOBYTE(v9) = 1;
        CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v11, v9);
      }
      goto LABEL_28;
    }
    v12 = CmpCopyCell(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), v4, v3);
    if ( v12 == -1 )
    {
      v7 = -1073741670;
      goto LABEL_25;
    }
    v13 = &v5[v3];
    if ( v13[3] == -1 )
    {
      v14 = 26732;
      if ( *(_DWORD *)(v4 + 196) < 5u )
        v14 = 26220;
      Cell = HvAllocateCell(v4, 12, v25, (__int64)&v21, (__int64)&v27);
      v13[3] = Cell;
      if ( Cell == -1 )
      {
        v8 = v20;
        v7 = -1073741670;
        goto LABEL_22;
      }
      v17 = v21;
      *v21 = v14;
      v17[1] = 0;
      v5[v3 + 1] = 0;
      (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v27);
      v8 = v20;
    }
    if ( CmpAddSubKeyToList(v4, v13 + 3, v12)
      && (++v5[v3 + 1],
          v18 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 32LL) >> 31,
          CmpRemoveSubKeyFromList(v4, &v5[v18 + 3], *(_DWORD *)(*(_QWORD *)(a1 + 88) + 32LL)))
      && (--v5[v18 + 1], CmpMarkAllChildrenDirty(v4, v12)) )
    {
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0;
      CmpEnumerateAllHigherLayerKcbs(
        v8,
        (__int64)CmpForceInvalidatePreCallback,
        (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
        (__int64)&v22,
        1,
        1);
      v7 = v22;
      if ( (int)v22 >= 0 )
      {
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0;
        v11 = P;
        CmpEnumerateAllHigherLayerKcbs(
          (__int64)P,
          (__int64)CmpForceInvalidatePreCallback,
          (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
          (__int64)&v22,
          1,
          1);
        v7 = v22;
        if ( (int)v22 >= 0 )
        {
          v19 = *(_QWORD *)(a1 + 48);
          v7 = 0;
          *(_QWORD *)(a1 + 104) = v5;
          v11 = 0LL;
          v5 = 0LL;
          v8 = 0LL;
          *(_DWORD *)(a1 + 96) = *(_DWORD *)(v19 + 32);
          *(_DWORD *)(v19 + 32) = v12;
          v12 = -1;
        }
        goto LABEL_23;
      }
    }
    else
    {
      v7 = -1073741670;
    }
LABEL_22:
    v11 = P;
LABEL_23:
    if ( v12 != -1 )
      CmpFreeKeyByCell(v4, v12, 0);
    goto LABEL_25;
  }
  v7 = -1073741670;
LABEL_28:
  if ( v8 )
  {
    LOBYTE(v9) = 1;
    CmpDereferenceKeyControlBlockWithLock(v8, v9);
  }
LABEL_30:
  if ( v5 )
    CmpLightWeightCleanupModifyKeyDataUoW(v4, v5);
  return v7;
}
