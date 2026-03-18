/*
 * XREFs of CmpMarkKeyParentDirty @ 0x14050FC18
 * Callers:
 *     CmpCopySyncTree2 @ 0x14050F068 (CmpCopySyncTree2.c)
 * Callees:
 *     CmpMarkIndexDirty @ 0x1403D7904 (CmpMarkIndexDirty.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 */

bool __fastcall CmpMarkKeyParentDirty(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  bool v5; // bl
  unsigned int v6; // esi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = -1;
  v2 = a2;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v8);
  v5 = 0;
  if ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 2) & 4) != 0 )
    {
      v5 = 1;
    }
    else
    {
      v6 = *(_DWORD *)(v4 + 16);
      if ( CmpMarkIndexDirty(BugCheckParameter2, v6, v2) )
        v5 = HvpMarkCellDirty(BugCheckParameter2, v6, 0) != 0;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
  }
  return v5;
}
