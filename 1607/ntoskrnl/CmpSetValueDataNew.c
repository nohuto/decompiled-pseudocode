/*
 * XREFs of CmpSetValueDataNew @ 0x1403FE7F4
 * Callers:
 *     CmpSetValueKeyExisting @ 0x1403FEE24 (CmpSetValueKeyExisting.c)
 *     CmpAddValueKeyNew @ 0x140400A88 (CmpAddValueKeyNew.c)
 *     CmpCopyValue @ 0x140608A14 (CmpCopyValue.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
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
  int v10; // eax
  int v12; // eax
  _DWORD *v13; // rdi
  unsigned int v14; // r14d
  int v15; // eax
  _DWORD *v16; // r15
  size_t v17; // r8
  _DWORD *v18; // rdi
  ULONG_PTR v19; // rdx
  ULONG_PTR v21; // rdx
  _DWORD v22[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v23[2]; // [rsp+38h] [rbp-18h] BYREF
  void *v24; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v25; // [rsp+48h] [rbp-8h] BYREF
  int v26; // [rsp+80h] [rbp+30h] BYREF
  int v27; // [rsp+84h] [rbp+34h]

  v5 = (unsigned int)Size;
  v26 = -1;
  v6 = *(_DWORD *)(BugCheckParameter2 + 196) < 4u;
  v27 = 0;
  if ( v6 || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    v10 = HvAllocateCell(BugCheckParameter2, (unsigned int)Size, a4, &v24, &v26);
    *a5 = v10;
    if ( v10 != -1 )
    {
      memmove(v24, Src, v5);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
      return 0LL;
    }
  }
  else
  {
    v23[0] = -1;
    v23[1] = 0;
    v24 = 0LL;
    v22[0] = -1;
    v22[1] = 0;
    v12 = HvAllocateCell(BugCheckParameter2, 8LL, a4, &v25, v23);
    *a5 = v12;
    if ( v12 != -1 )
    {
      v13 = v25;
      *v25 = 25188;
      v13[1] = -1;
      v14 = ((int)v5 + 16343) / 0x3FD8u;
      v15 = HvAllocateCell(BugCheckParameter2, 4 * (unsigned int)(unsigned __int16)v14, a4, &v24, v22);
      v16 = v24;
      v13[1] = v15;
      if ( v15 != -1 )
      {
        if ( *((_WORD *)v13 + 1) >= (unsigned __int16)v14 )
        {
LABEL_13:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v22);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
          return 0LL;
        }
        while ( 1 )
        {
          v16[*((unsigned __int16 *)v13 + 1)] = HvAllocateCell(BugCheckParameter2, 16344LL, a4, &v24, &v26);
          if ( v16[*((unsigned __int16 *)v13 + 1)] == -1 )
            break;
          v17 = (unsigned int)v5;
          if ( (unsigned int)v5 > 0x3FD8 )
            v17 = 16344LL;
          memmove(v24, Src, v17);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
          v24 = 0LL;
          ++*((_WORD *)v13 + 1);
          Src += 16344;
          LODWORD(v5) = v5 - 16344;
          if ( *((_WORD *)v13 + 1) >= (unsigned __int16)v14 )
            goto LABEL_13;
        }
      }
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
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v22);
      }
      v21 = (unsigned int)v13[1];
      if ( (_DWORD)v21 != -1 )
        HvFreeCell(BugCheckParameter2, v21);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
      v18 = a5;
      HvFreeCell(BugCheckParameter2, (unsigned int)*a5);
      *v18 = -1;
    }
  }
  return 3221225626LL;
}
