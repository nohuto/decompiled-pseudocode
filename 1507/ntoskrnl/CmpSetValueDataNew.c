/*
 * XREFs of CmpSetValueDataNew @ 0x14054384C
 * Callers:
 *     CmpSetValueKeyExisting @ 0x14042B410 (CmpSetValueKeyExisting.c)
 *     CmpAddValueKeyNew @ 0x1404A0F2C (CmpAddValueKeyNew.c)
 *     CmpCopyValue @ 0x140585A20 (CmpCopyValue.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
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
  _DWORD *v13; // r14
  _DWORD *v14; // rdi
  unsigned int v15; // r15d
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // r14
  size_t v20; // r8
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG_PTR v23; // rdx
  ULONG_PTR v25; // rdx
  int v26; // [rsp+30h] [rbp-10h] BYREF
  int v27; // [rsp+34h] [rbp-Ch] BYREF
  void *v28; // [rsp+38h] [rbp-8h] BYREF
  int v29; // [rsp+70h] [rbp+30h] BYREF

  v5 = (unsigned int)Size;
  v6 = *(_DWORD *)(BugCheckParameter2 + 196) < 4u;
  v29 = -1;
  if ( v6 || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    v10 = HvAllocateCell(BugCheckParameter2, Size, a4, (__int64)&v28, &v29);
    *a5 = v10;
    if ( v10 != -1 )
    {
      memmove(v28, Src, v5);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
      return 0LL;
    }
  }
  else
  {
    v27 = -1;
    v26 = -1;
    v12 = HvAllocateCell(BugCheckParameter2, 8, a4, (__int64)&v28, &v27);
    v13 = a5;
    *a5 = v12;
    if ( v12 != -1 )
    {
      v14 = v28;
      *(_DWORD *)v28 = 25188;
      v14[1] = -1;
      v15 = ((int)v5 + 16343) / 0x3FD8u;
      v16 = HvAllocateCell(BugCheckParameter2, 4 * (unsigned int)(unsigned __int16)v15, a4, (__int64)&v28, &v26);
      v14[1] = v16;
      if ( v16 != -1 )
      {
        if ( *((_WORD *)v14 + 1) >= (unsigned __int16)v15 )
        {
LABEL_14:
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
          return 0LL;
        }
        v19 = v28;
        while ( 1 )
        {
          v19[*((unsigned __int16 *)v14 + 1)] = HvAllocateCell(BugCheckParameter2, 16344, a4, (__int64)&v28, &v29);
          if ( v19[*((unsigned __int16 *)v14 + 1)] == -1 )
            break;
          v20 = (unsigned int)v5;
          if ( (unsigned int)v5 > 0x3FD8 )
            v20 = 16344LL;
          memmove(v28, Src, v20);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
          v28 = 0LL;
          ++*((_WORD *)v14 + 1);
          Src += 16344;
          LODWORD(v5) = v5 - 16344;
          if ( *((_WORD *)v14 + 1) >= (unsigned __int16)v15 )
            goto LABEL_14;
        }
        if ( v19 )
        {
          if ( *((_WORD *)v14 + 1) )
          {
            do
            {
              v23 = (unsigned int)v19[*((unsigned __int16 *)v14 + 1)];
              if ( (_DWORD)v23 != -1 )
                HvFreeCell(BugCheckParameter2, v23, v17, v18);
            }
            while ( (*((_WORD *)v14 + 1))-- != 1 );
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
        }
        v13 = a5;
      }
      v25 = (unsigned int)v14[1];
      if ( (_DWORD)v25 != -1 )
        HvFreeCell(BugCheckParameter2, v25, v17, v18);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
      HvFreeCell(BugCheckParameter2, (unsigned int)*v13, v21, v22);
      *v13 = -1;
    }
  }
  return 3221225626LL;
}
