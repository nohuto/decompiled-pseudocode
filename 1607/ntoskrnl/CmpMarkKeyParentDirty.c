/*
 * XREFs of CmpMarkKeyParentDirty @ 0x140608E04
 * Callers:
 *     CmpCopySyncTree2 @ 0x1406082F4 (CmpCopySyncTree2.c)
 * Callees:
 *     CmpMarkIndexDirty @ 0x1404B9C38 (CmpMarkIndexDirty.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

bool __fastcall CmpMarkKeyParentDirty(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  bool v2; // bl
  unsigned int v3; // ebp
  __int64 v5; // rax
  unsigned int v6; // esi
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v2 = 0;
  v3 = a2;
  v9 = 0;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v8);
  if ( v5 )
  {
    if ( (*(_BYTE *)(v5 + 2) & 4) != 0 )
    {
      v2 = 1;
    }
    else
    {
      v6 = *(_DWORD *)(v5 + 16);
      if ( CmpMarkIndexDirty(BugCheckParameter2, v6, v3) )
        v2 = HvpMarkCellDirty(BugCheckParameter2, v6, 0) != 0;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
  }
  return v2;
}
