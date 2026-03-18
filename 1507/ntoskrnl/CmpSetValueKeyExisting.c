/*
 * XREFs of CmpSetValueKeyExisting @ 0x14042B410
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404F19C4 (CmpCommitSetValueKeyUoW.c)
 *     CmpPreserveSystemHiveData @ 0x140660170 (CmpPreserveSystemHiveData.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     CmpMarkValueDataDirty @ 0x14042B6CC (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1404A0954 (CmpFreeValueData.c)
 *     HvReallocateCell @ 0x1404A1290 (HvReallocateCell.c)
 *     CmpSetValueDataNew @ 0x14054384C (CmpSetValueDataNew.c)
 *     CmpSetValueDataExisting @ 0x1405583F0 (CmpSetValueDataExisting.c)
 */

__int64 __fastcall CmpSetValueKeyExisting(
        ULONG_PTR a1,
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
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF

  LODWORD(v19) = -1;
  v8 = 0;
  v9 = 0;
  if ( !(unsigned __int8)HvpMarkCellDirty(a1, a2) )
    return 3221225853LL;
  v11 = a3[1];
  if ( v11 >= 0x80000000 )
  {
    v11 += 0x80000000;
    v12 = 0;
  }
  else if ( *(_DWORD *)(a1 + 196) >= 4u && v11 - 16345 <= 0x7FFFC026 )
  {
    v12 = 2;
  }
  else
  {
    v12 = 1;
  }
  if ( (unsigned int)Size <= 4 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 196) < 4u || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    v8 = 1;
LABEL_10:
    LODWORD(v20) = v8;
    goto LABEL_11;
  }
  LOWORD(v8) = 2;
  LODWORD(v20) = 2;
LABEL_11:
  if ( !(unsigned __int8)CmpMarkValueDataDirty(a1) )
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
        v9 = CmpSetValueDataExisting(a1, a3[2]);
        if ( v9 < 0 )
          return (unsigned int)v9;
      }
      else
      {
        v9 = CmpSetValueDataNew(a1, Src, (unsigned int)Size, (__int64)&v20);
        if ( v9 < 0 )
          return (unsigned int)v9;
        if ( v12 && v11 )
          HvFreeCell(a1, (unsigned int)a3[2]);
        v13 = v20;
      }
      a3[3] = a4;
      a3[1] = Size;
      a3[2] = v13;
      return 0;
    }
    if ( v12 == 1 && v11 )
    {
      v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(a1 + 8))(a1, v13, &v19);
      v15 = (void *)v14;
      if ( v14 )
      {
        if ( (unsigned int)Size <= -4 - *(_DWORD *)(v14 - 4) )
        {
          v16 = v13;
          goto LABEL_19;
        }
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v19);
        v20 = 0LL;
        v18 = HvReallocateCell(a1, v13, (__int64)&v20, (__int64)&v19);
        v16 = v18;
        if ( v18 != -1 )
        {
          a3[2] = v18;
LABEL_29:
          v15 = (void *)v20;
LABEL_19:
          memmove(v15, Src, (unsigned int)Size);
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v19);
          a3[2] = v16;
          a3[1] = Size;
          a3[3] = a4;
          if ( v12 == 2 )
            CmpFreeValueData(a1, v13);
          return 0;
        }
      }
    }
    else
    {
      v16 = HvAllocateCell(a1, (unsigned int)Size, a7, &v20, &v19);
      if ( v16 != -1 )
        goto LABEL_29;
    }
    return (unsigned int)-1073741670;
  }
  if ( v12 == 1 && v11 || v12 == 2 )
    CmpFreeValueData(a1, (unsigned int)a3[2]);
  a3[2] = 0;
  a3[1] = Size + 0x80000000;
  memmove(a3 + 2, Src, (unsigned int)Size);
  a3[3] = a4;
  return 0LL;
}
