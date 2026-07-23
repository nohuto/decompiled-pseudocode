/*
 * XREFs of CmpAddValueKeyNew @ 0x140400A88
 * Callers:
 *     CmpSetValueKeyNew @ 0x1404009D0 (CmpSetValueKeyNew.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     CmpSetValueDataNew @ 0x1403FE7F4 (CmpSetValueDataNew.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpCopyName @ 0x140400BB4 (CmpCopyName.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1404010E0 (CmpNameSize.c)
 */

__int64 __fastcall CmpAddValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        unsigned __int16 *a2,
        int a3,
        char *a4,
        size_t Size,
        unsigned int a6)
{
  unsigned __int16 v10; // ax
  unsigned int v11; // ebp
  _WORD *v12; // rbx
  _WORD *v13; // rcx
  unsigned __int16 v14; // ax
  _DWORD v16[2]; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v17; // [rsp+38h] [rbp-20h] BYREF

  v16[0] = -1;
  v16[1] = 0;
  v10 = CmpNameSize(a2);
  v11 = HvAllocateCell(BugCheckParameter2, (unsigned int)v10 + 20, a6, &v17, v16);
  if ( v11 != -1 )
  {
    v12 = v17;
    v13 = v17 + 10;
    *v17 = 27510;
    v14 = CmpCopyName(v13, a2);
    v12[1] = v14;
    v12[8] = v14 < *a2;
    if ( (unsigned int)Size > 4 )
    {
      if ( (int)CmpSetValueDataNew(BugCheckParameter2, a4, (unsigned int)Size, a6, (_DWORD *)v12 + 2) < 0 )
      {
        HvFreeCell(BugCheckParameter2, v11);
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
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v16);
    return v11;
  }
  return 0xFFFFFFFFLL;
}
