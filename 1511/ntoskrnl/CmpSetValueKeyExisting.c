/*
 * XREFs of CmpSetValueKeyExisting @ 0x1403DA0F4
 * Callers:
 *     CmpCommitSetValueKeyUoW @ 0x1403D7548 (CmpCommitSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpPreserveSystemHiveData @ 0x1405E8C58 (CmpPreserveSystemHiveData.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     HvReallocateCell @ 0x1403D87A8 (HvReallocateCell.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1403D96C0 (CmpFreeValueData.c)
 *     CmpMarkValueDataDirty @ 0x1403DA5C0 (CmpMarkValueDataDirty.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpSetValueDataNew @ 0x1404AFE2C (CmpSetValueDataNew.c)
 *     CmpSetValueDataExisting @ 0x1404B8C18 (CmpSetValueDataExisting.c)
 */

__int64 __fastcall CmpSetValueKeyExisting(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        _DWORD *a3,
        int a4,
        void *Src,
        size_t Size,
        unsigned int a7)
{
  int v8; // r15d
  int v9; // ebx
  unsigned int v11; // r12d
  __int16 v12; // r13
  unsigned int v13; // r15d
  __int64 v14; // rax
  void *v15; // rcx
  unsigned int v16; // ebx
  unsigned int v18; // eax
  int v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF

  v19 = -1;
  v8 = 0;
  v9 = 0;
  if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, a2) )
    return 3221225853LL;
  v11 = a3[1];
  if ( v11 >= 0x80000000 )
  {
    v11 += 0x80000000;
    v12 = 0;
  }
  else if ( *(_DWORD *)(BugCheckParameter2 + 196) >= 4u && v11 - 16345 <= 0x7FFFC026 )
  {
    v12 = 2;
  }
  else
  {
    v12 = 1;
  }
  if ( (unsigned int)Size <= 4 )
    goto LABEL_10;
  if ( *(_DWORD *)(BugCheckParameter2 + 196) < 4u || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    v8 = 1;
LABEL_10:
    LODWORD(v20) = v8;
    goto LABEL_11;
  }
  LOWORD(v8) = 2;
  LODWORD(v20) = 2;
LABEL_11:
  if ( !(unsigned __int8)CmpMarkValueDataDirty(BugCheckParameter2) )
    return 3221225853LL;
  if ( (_WORD)v8 )
  {
    v13 = a3[2];
    if ( (_WORD)v20 != 1 )
    {
      if ( (_WORD)v20 != 2 )
        return (unsigned int)v9;
      if ( v12 == 2 )
      {
        v9 = CmpSetValueDataExisting(BugCheckParameter2, a3[2]);
        if ( v9 < 0 )
          return (unsigned int)v9;
      }
      else
      {
        v9 = CmpSetValueDataNew(BugCheckParameter2, Src, (unsigned int)Size, (__int64)&v20);
        if ( v9 < 0 )
          return (unsigned int)v9;
        if ( v12 && v11 )
          HvFreeCell(BugCheckParameter2, (unsigned int)a3[2]);
        v13 = v20;
      }
      a3[3] = a4;
      a3[1] = Size;
      a3[2] = v13;
      return 0;
    }
    if ( v12 == 1 && v11 )
    {
      v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v13,
              &v19);
      v15 = (void *)v14;
      if ( v14 )
      {
        if ( (unsigned int)Size <= -4 - *(_DWORD *)(v14 - 4) )
        {
          v16 = v13;
          goto LABEL_19;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
        v20 = 0LL;
        v18 = HvReallocateCell(BugCheckParameter2, v13, Size, 1, &v20, &v19);
        v16 = v18;
        if ( v18 != -1 )
        {
          a3[2] = v18;
          goto LABEL_34;
        }
      }
    }
    else
    {
      v16 = HvAllocateCell(BugCheckParameter2, (unsigned int)Size, a7, &v20, &v19);
      if ( v16 != -1 )
      {
LABEL_34:
        v15 = (void *)v20;
LABEL_19:
        memmove(v15, Src, (unsigned int)Size);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v19);
        a3[2] = v16;
        a3[1] = Size;
        a3[3] = a4;
        if ( v12 == 2 )
          CmpFreeValueData(BugCheckParameter2, v13, v11);
        return 0;
      }
    }
    return (unsigned int)-1073741670;
  }
  if ( v12 == 1 && v11 || v12 == 2 )
    CmpFreeValueData(BugCheckParameter2, (unsigned int)a3[2], v11);
  a3[2] = 0;
  a3[1] = Size + 0x80000000;
  memmove(a3 + 2, Src, (unsigned int)Size);
  a3[3] = a4;
  return 0LL;
}
