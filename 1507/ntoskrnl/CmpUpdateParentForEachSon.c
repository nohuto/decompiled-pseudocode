/*
 * XREFs of CmpUpdateParentForEachSon @ 0x14065B4C4
 * Callers:
 *     CmMoveKey @ 0x140654448 (CmMoveKey.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmpCommitRenameKeyUoW @ 0x140664408 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNumber @ 0x1404C7350 (CmpFindSubKeyByNumber.c)
 */

char __fastcall CmpUpdateParentForEachSon(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v2; // r15d
  __int64 v4; // rax
  char v5; // bl
  _DWORD *v6; // r14
  unsigned int v7; // ebp
  unsigned int v8; // esi
  unsigned int v9; // ebp
  __int64 v10; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = -1;
  v13 = -1;
  v2 = a2;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v14);
  v5 = 0;
  v6 = (_DWORD *)v4;
  if ( v4 )
  {
    v7 = 0;
    v8 = *(_DWORD *)(v4 + 20) + *(_DWORD *)(v4 + 24);
    if ( v8 )
    {
      while ( (int)CmpFindSubKeyByNumber(BugCheckParameter2, v6, v7, &BugCheckParameter3) >= 0
           && (_DWORD)BugCheckParameter3 != -1
           && HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0, 0LL) )
      {
        if ( ++v7 >= v8 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v9 = 0;
      if ( v8 )
      {
        while ( 1 )
        {
          CmpFindSubKeyByNumber(BugCheckParameter2, v6, v9, &BugCheckParameter3);
          if ( (_DWORD)BugCheckParameter3 == -1 )
            break;
          v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  (unsigned int)BugCheckParameter3,
                  &v13);
          if ( !v10 )
            break;
          *(_DWORD *)(v10 + 16) = v2;
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v13);
          if ( ++v9 >= v8 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        v5 = 1;
      }
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
  }
  return v5;
}
