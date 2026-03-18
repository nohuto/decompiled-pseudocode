/*
 * XREFs of CmpSetValueDataNew @ 0x1404AFE2C
 * Callers:
 *     CmpSetValueKeyExisting @ 0x1403DA0F4 (CmpSetValueKeyExisting.c)
 *     CmpAddValueKeyNew @ 0x1403F448C (CmpAddValueKeyNew.c)
 *     CmpCopyValue @ 0x14050F7B0 (CmpCopyValue.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     HvAllocateCell @ 0x1403F45FC (HvAllocateCell.c)
 */

__int64 __fastcall CmpSetValueDataNew(
        ULONG_PTR BugCheckParameter2,
        char *Src,
        size_t Size,
        unsigned int a4,
        _DWORD *a5)
{
  size_t v5; // rsi
  bool v6; // cf
  int Cell; // eax
  int v12; // eax
  _DWORD *v13; // rdi
  unsigned int v14; // r12d
  int v15; // eax
  _DWORD *v16; // r13
  size_t v17; // r8
  _DWORD *v18; // rdi
  ULONG_PTR v19; // rdx
  ULONG_PTR v21; // rdx
  int v22; // [rsp+30h] [rbp-20h] BYREF
  int v23; // [rsp+34h] [rbp-1Ch] BYREF
  void *v24; // [rsp+38h] [rbp-18h] BYREF
  _DWORD *v25; // [rsp+40h] [rbp-10h] BYREF
  int v26; // [rsp+80h] [rbp+30h] BYREF

  v5 = (unsigned int)Size;
  v6 = *(_DWORD *)(BugCheckParameter2 + 196) < 4u;
  v26 = -1;
  if ( v6 || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    Cell = HvAllocateCell(BugCheckParameter2, Size, a4, (__int64)&v24, (__int64)&v26);
    *a5 = Cell;
    if ( Cell != -1 )
    {
      memmove(v24, Src, v5);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
      return 0LL;
    }
  }
  else
  {
    v23 = -1;
    v24 = 0LL;
    v22 = -1;
    v12 = HvAllocateCell(BugCheckParameter2, 8, a4, (__int64)&v25, (__int64)&v23);
    *a5 = v12;
    if ( v12 != -1 )
    {
      v13 = v25;
      *v25 = 25188;
      v13[1] = -1;
      v14 = ((int)v5 + 16343) / 0x3FD8u;
      v15 = HvAllocateCell(
              BugCheckParameter2,
              4 * (unsigned int)(unsigned __int16)v14,
              a4,
              (__int64)&v24,
              (__int64)&v22);
      v16 = v24;
      v13[1] = v15;
      if ( v15 == -1 )
      {
LABEL_16:
        if ( v16 )
        {
          if ( *((_WORD *)v13 + 1) )
          {
            do
            {
              v19 = (unsigned int)v16[*((unsigned __int16 *)v13 + 1)];
              if ( (_DWORD)v19 != -1 )
                HvFreeCell(BugCheckParameter2, v19);
            }
            while ( (*((_WORD *)v13 + 1))-- != 1 );
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
        }
        v21 = (unsigned int)v13[1];
        if ( (_DWORD)v21 != -1 )
          HvFreeCell(BugCheckParameter2, v21);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
        v18 = a5;
        HvFreeCell(BugCheckParameter2, (unsigned int)*a5);
        *v18 = -1;
        return 3221225626LL;
      }
      for ( ; *((_WORD *)v13 + 1) < (unsigned __int16)v14; LODWORD(v5) = v5 - 16344 )
      {
        v16[*((unsigned __int16 *)v13 + 1)] = HvAllocateCell(
                                                BugCheckParameter2,
                                                16344,
                                                a4,
                                                (__int64)&v24,
                                                (__int64)&v26);
        if ( v16[*((unsigned __int16 *)v13 + 1)] == -1 )
          goto LABEL_16;
        v17 = (unsigned int)v5;
        if ( (unsigned int)v5 > 0x3FD8 )
          v17 = 16344LL;
        memmove(v24, Src, v17);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
        v24 = 0LL;
        ++*((_WORD *)v13 + 1);
        Src += 16344;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
      return 0LL;
    }
  }
  return 3221225626LL;
}
