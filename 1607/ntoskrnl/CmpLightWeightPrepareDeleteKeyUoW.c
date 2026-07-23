/*
 * XREFs of CmpLightWeightPrepareDeleteKeyUoW @ 0x14060EF98
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocatePoolWithTag @ 0x1400A5D00 (CmpAllocatePoolWithTag.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1403FAEDC (CmpCleanupDiscardReplaceContext.c)
 *     CmpMarkKeyDirty @ 0x1403FF10C (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1404B82D8 (CmpRemoveSubKeyFromList.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14060BE64 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14060E390 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x14060EBD4 (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteKeyUoW(ULONG_PTR *a1)
{
  ULONG_PTR v1; // rax
  __int64 v3; // rsi
  ULONG_PTR v4; // r14
  _DWORD *v5; // rdi
  int ModificationData; // eax
  int v7; // ebx
  unsigned int v8; // r15d
  __int64 v9; // rax
  PVOID PoolWithTag; // rax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  v12 = -1;
  v1 = a1[6];
  v13 = 0;
  v3 = 0LL;
  v4 = *(_QWORD *)(v1 + 24);
  v5 = *(_DWORD **)(a1[10] + 104);
  P = v5;
  if ( v5 )
  {
    ++*v5;
LABEL_5:
    v8 = *(_DWORD *)(a1[6] + 32);
    if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v4 + 8))(v4, v8, &v12) )
    {
LABEL_6:
      v7 = -1073741670;
      goto LABEL_18;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v12);
    if ( !CmpMarkKeyDirty(v4, v8, 0) || !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1[6] + 64) + 32LL), 0) )
    {
      v7 = -1073741443;
      goto LABEL_18;
    }
    v9 = *(_QWORD *)(a1[6] + 184);
    if ( !v9 || *(_QWORD *)(v9 + 32) == v9 + 32 )
      goto LABEL_24;
    PoolWithTag = CmpAllocatePoolWithTag(PagedPool, 0x20uLL, 0x31374D43u);
    v3 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_6;
    memset(PoolWithTag, 0, 0x20uLL);
    *(_DWORD *)(v3 + 8) = -1073741823;
    *(_QWORD *)(v3 + 24) = v3 + 16;
    *(_QWORD *)(v3 + 16) = v3 + 16;
    v7 = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(a1[6], v3);
    if ( v7 >= 0 )
    {
LABEL_24:
      if ( CmpRemoveSubKeyFromList(v4, &v5[(v8 >> 31) + 3], v8) )
      {
        --v5[(v8 >> 31) + 1];
        v7 = 0;
        a1[13] = (ULONG_PTR)v5;
        a1[14] = v3;
        return (unsigned int)v7;
      }
      v7 = -1073741670;
    }
    if ( v3 )
    {
      CmpCleanupDiscardReplaceContext((_QWORD *)v3);
      MiDeleteSubsection((PPRIVILEGE_SET)v3);
    }
    goto LABEL_18;
  }
  ModificationData = CmpLightWeightCreateModificationData((__int64)a1, (unsigned int **)&P);
  v5 = P;
  v7 = ModificationData;
  if ( ModificationData >= 0 )
    goto LABEL_5;
LABEL_18:
  if ( v5 )
    CmpLightWeightCleanupModifyKeyDataUoW(v4, v5);
  return (unsigned int)v7;
}
