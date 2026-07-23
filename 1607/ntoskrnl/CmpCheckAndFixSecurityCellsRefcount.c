/*
 * XREFs of CmpCheckAndFixSecurityCellsRefcount @ 0x1404C4624
 * Callers:
 *     CmpCheckRegistry2 @ 0x14043DE40 (CmpCheckRegistry2.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     CmpRemoveSecurityCellList @ 0x1400A9B6C (CmpRemoveSecurityCellList.c)
 *     HvMarkCellDirty @ 0x1403FC340 (HvMarkCellDirty.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 */

char __fastcall CmpCheckAndFixSecurityCellsRefcount(ULONG_PTR BugCheckParameter2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // r14d
  char v4; // bp
  unsigned int *v5; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  HvpGetCellContextReinitialize((__int64)&v9);
  v3 = 0;
  v4 = 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 3040) )
  {
    while ( 1 )
    {
      v5 = (unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v3);
      v6 = *v5;
      v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(BugCheckParameter2, *v5, &v9);
      v2 = (unsigned int *)v7;
      if ( !v7 )
        return 0;
      if ( *(_DWORD *)(v7 + 12) != *(_DWORD *)(*((_QWORD *)v5 + 1) + 28LL) )
      {
        if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, *v5) )
        {
          v4 = 0;
          goto LABEL_11;
        }
        v2[3] = *(_DWORD *)(*((_QWORD *)v5 + 1) + 28LL);
      }
      if ( !*(_DWORD *)(*((_QWORD *)v5 + 1) + 28LL) )
      {
        HvMarkCellDirty(BugCheckParameter2, v6);
        HvMarkCellDirty(BugCheckParameter2, v2[1]);
        HvMarkCellDirty(BugCheckParameter2, v2[2]);
        (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
        v2 = 0LL;
        CmpRemoveSecurityCellList(BugCheckParameter2, v6);
        HvFreeCell(BugCheckParameter2, v6);
        --v3;
      }
      if ( v2 )
      {
        (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
        v2 = 0LL;
      }
      if ( ++v3 >= *(_DWORD *)(BugCheckParameter2 + 3040) )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    if ( v2 )
      (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
  }
  return v4;
}
