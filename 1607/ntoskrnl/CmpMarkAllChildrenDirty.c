/*
 * XREFs of CmpMarkAllChildrenDirty @ 0x14060A914
 * Callers:
 *     CmpUpdateParentForEachSon @ 0x14060B310 (CmpUpdateParentForEachSon.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkAllChildrenDirty(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rax
  _DWORD *v5; // r14
  unsigned int v6; // esi
  unsigned int v7; // ebp
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF
  int v11; // [rsp+54h] [rbp+1Ch]

  v10 = -1;
  v2 = 0;
  v11 = 0;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v10);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = 0;
    v7 = *(_DWORD *)(v4 + 20) + *(_DWORD *)(v4 + 24);
    if ( v7 )
    {
      while ( (int)CmpFindSubKeyByNumber(BugCheckParameter2, v5, v6, &BugCheckParameter3) >= 0
           && (_DWORD)BugCheckParameter3 != -1
           && HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
      {
        if ( ++v6 >= v7 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v2 = 1;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v10);
  }
  return v2;
}
