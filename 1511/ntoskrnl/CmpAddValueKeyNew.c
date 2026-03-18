/*
 * XREFs of CmpAddValueKeyNew @ 0x1403F448C
 * Callers:
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x1403F43A0 (CmpSetValueKeyNew.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpNameSize @ 0x1403F4458 (CmpNameSize.c)
 *     CmpCopyName @ 0x1403F45B4 (CmpCopyName.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 *     CmpSetValueDataNew @ 0x1404AFE2C (CmpSetValueDataNew.c)
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
  int v16; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v17; // [rsp+38h] [rbp-20h] BYREF

  v16 = -1;
  v10 = CmpNameSize(a2);
  v11 = HvAllocateCell(BugCheckParameter2, (unsigned int)v10 + 20, a6, &v17, &v16);
  if ( v11 != -1 )
  {
    v12 = v17;
    v13 = v17 + 10;
    *v17 = 27510;
    v14 = CmpCopyName(v13, a2);
    v12[1] = v14;
    v12[8] = v14 < *a2;
    if ( (unsigned int)Size <= 4 )
    {
      *((_DWORD *)v12 + 1) = Size + 0x80000000;
      *((_DWORD *)v12 + 2) = 0;
      memmove(v12 + 4, a4, (unsigned int)Size);
    }
    else
    {
      if ( (int)CmpSetValueDataNew(BugCheckParameter2, a4, (unsigned int)Size, (__int64)(v12 + 4)) < 0 )
      {
        HvFreeCell(BugCheckParameter2, v11);
        v11 = -1;
        goto LABEL_8;
      }
      *((_DWORD *)v12 + 1) = Size;
    }
    *((_DWORD *)v12 + 3) = a3;
LABEL_8:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
    return v11;
  }
  return 0xFFFFFFFFLL;
}
