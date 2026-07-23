/*
 * XREFs of CmpUpdateParentForEachSon @ 0x14060B310
 * Callers:
 *     CmMoveKey @ 0x1405FD05C (CmMoveKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14060E88C (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     CmpMarkAllChildrenDirty @ 0x14060A914 (CmpMarkAllChildrenDirty.c)
 */

char __fastcall CmpUpdateParentForEachSon(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  unsigned int v5; // r12d
  _DWORD *v6; // r15
  char v7; // bl
  unsigned int v8; // esi
  unsigned int v9; // r14d
  __int64 v10; // rax
  _DWORD v12[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+40h] BYREF
  int v14; // [rsp+88h] [rbp+58h] BYREF
  int v15; // [rsp+8Ch] [rbp+5Ch]

  v12[0] = -1;
  v14 = -1;
  v5 = a2;
  v12[1] = 0;
  v15 = 0;
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   a2,
                   v12);
  if ( !v6 )
    return 0;
  if ( !a3 || (v7 = CmpMarkAllChildrenDirty(BugCheckParameter2, v5)) != 0 )
  {
    v7 = 1;
    v8 = 0;
    v9 = v6[5] + v6[6];
    if ( v9 )
    {
      while ( 1 )
      {
        CmpFindSubKeyByNumber(BugCheckParameter2, v6, v8, &v13);
        if ( v13 == -1 )
          break;
        v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v13,
                &v14);
        if ( !v10 )
          break;
        *(_DWORD *)(v10 + 16) = v5;
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
        if ( ++v8 >= v9 )
          goto LABEL_11;
      }
      v7 = 0;
    }
  }
LABEL_11:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v12);
  return v7;
}
