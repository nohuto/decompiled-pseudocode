/*
 * XREFs of CmpCheckAndFixSecurityCellsRefcount @ 0x1404B88F0
 * Callers:
 *     CmpCheckRegistry2 @ 0x140405850 (CmpCheckRegistry2.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 */

char __fastcall CmpCheckAndFixSecurityCellsRefcount(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edi
  __int64 v3; // rbp
  __int64 v4; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = -1;
  v1 = 0;
  if ( *(_DWORD *)(BugCheckParameter2 + 3040) == 1 )
    return 1;
  while ( 1 )
  {
    v3 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v1),
           &v6);
    if ( !v3 )
      break;
    v4 = *(_QWORD *)(BugCheckParameter2 + 3056);
    if ( *(_DWORD *)(v3 + 12) < *(_DWORD *)(*(_QWORD *)(v4 + 16LL * v1 + 8) + 28LL) )
    {
      if ( !HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v4 + 16LL * v1), 0) )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
        return 0;
      }
      *(_DWORD *)(v3 + 12) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v1 + 8) + 28LL);
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
    if ( ++v1 >= *(_DWORD *)(BugCheckParameter2 + 3040) - 1 )
      return 1;
  }
  return 0;
}
