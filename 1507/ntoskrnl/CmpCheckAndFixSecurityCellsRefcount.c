/*
 * XREFs of CmpCheckAndFixSecurityCellsRefcount @ 0x1404AE5EC
 * Callers:
 *     CmpCheckRegistry2 @ 0x1404AE1C0 (CmpCheckRegistry2.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14012AF2C (CmpRemoveSecurityCellList.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     HvMarkCellDirty @ 0x140660960 (HvMarkCellDirty.c)
 */

char __fastcall CmpCheckAndFixSecurityCellsRefcount(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // esi
  __int64 v3; // r15
  unsigned int v4; // r12d
  unsigned int *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = -1;
  v1 = 0;
  if ( !*(_DWORD *)(BugCheckParameter2 + 3040) )
    return 1;
  while ( 1 )
  {
    v3 = *(_QWORD *)(BugCheckParameter2 + 3056);
    v4 = *(_DWORD *)(v3 + 16LL * v1);
    v5 = (unsigned int *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                           BugCheckParameter2,
                           v4,
                           &v10);
    if ( !v5 )
      break;
    v6 = *(_QWORD *)(BugCheckParameter2 + 3056);
    if ( v5[3] != *(_DWORD *)(*(_QWORD *)(v6 + 16LL * v1 + 8) + 28LL) )
    {
      if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v6 + 16LL * v1), 0LL) )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v10);
        return 0;
      }
      v5[3] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v1 + 8) + 28LL);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(v3 + 16LL * v1 + 8) + 28LL) )
    {
      HvMarkCellDirty(BugCheckParameter2, v4, 0LL);
      HvMarkCellDirty(BugCheckParameter2, v5[1], 0LL);
      HvMarkCellDirty(BugCheckParameter2, v5[2], 0LL);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v10);
      v5 = 0LL;
      CmpRemoveSecurityCellList(BugCheckParameter2, v4);
      HvFreeCell(BugCheckParameter2, v4, v7, v8);
      --v1;
    }
    if ( v5 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v10);
    if ( ++v1 >= *(_DWORD *)(BugCheckParameter2 + 3040) )
      return 1;
  }
  return 0;
}
