/*
 * XREFs of CmpAddValueKeyNew @ 0x1404A0F2C
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x1404A10D0 (CmpSetValueKeyNew.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpCopyName @ 0x1404A1054 (CmpCopyName.c)
 *     CmpNameSize @ 0x1404A109C (CmpNameSize.c)
 *     CmpSetValueDataNew @ 0x14054384C (CmpSetValueDataNew.c)
 */

__int64 __fastcall CmpAddValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        unsigned __int16 *a2,
        int a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  unsigned __int16 v10; // ax
  unsigned int v11; // ebp
  _WORD *v12; // rbx
  _WORD *v13; // rcx
  unsigned __int16 v14; // ax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v19; // [rsp+38h] [rbp-20h] BYREF

  v18 = -1;
  v10 = CmpNameSize(a2);
  v11 = HvAllocateCell(BugCheckParameter2, (unsigned int)v10 + 20, a6, (__int64)&v19, &v18);
  if ( v11 != -1 )
  {
    v12 = v19;
    v13 = v19 + 10;
    *v19 = 27510;
    v14 = CmpCopyName(v13, a2);
    v12[1] = v14;
    v12[8] = v14 < *a2;
    if ( (unsigned int)Size > 4 )
    {
      if ( (int)CmpSetValueDataNew(BugCheckParameter2, a4, (unsigned int)Size, (__int64)(v12 + 4)) < 0 )
      {
        HvFreeCell(BugCheckParameter2, v11, v16, v17);
        v11 = -1;
        goto LABEL_7;
      }
      *((_DWORD *)v12 + 1) = Size;
    }
    else
    {
      *((_DWORD *)v12 + 1) = Size + 0x80000000;
      *((_DWORD *)v12 + 2) = 0;
      memmove(v12 + 4, a4, (unsigned int)Size);
    }
    *((_DWORD *)v12 + 3) = a3;
LABEL_7:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
    return v11;
  }
  return 0xFFFFFFFFLL;
}
