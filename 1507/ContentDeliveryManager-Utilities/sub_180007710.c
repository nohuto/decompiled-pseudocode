/*
 * XREFs of sub_180007710 @ 0x180007710
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007B50 @ 0x180007B50 (sub_180007B50.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_180007710(_BYTE *a1, __int64 a2, _DWORD *a3, signed __int32 **a4)
{
  signed __int32 *v4; // rdi
  signed __int32 *v9; // rax
  __int64 v10; // rdx
  signed __int32 *v11; // rbx
  bool v12; // zf
  signed __int32 v13; // edx
  __int64 v14; // rdx
  signed __int32 v15; // eax
  unsigned int v16; // ebx

  v4 = 0LL;
  v9 = (signed __int32 *)operator new(0x28uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  v11 = v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 3) = 0LL;
    v12 = qword_18003AC80 == 0;
    v9[3] = 1;
    *(_QWORD *)v9 = off_18002CC30;
    v9[8] = 4;
    if ( !v12 )
      _InterlockedIncrement(&dword_18003AC88);
    *(_QWORD *)v9 = off_18002C7A0;
    v13 = v9[3];
    if ( v13 == 0x7FFFFFFF )
      goto LABEL_9;
    do
    {
      if ( v13 == _InterlockedCompareExchange(v9 + 3, v13 + 1, v13) )
        break;
      v13 = v9[3];
    }
    while ( v13 != 0x7FFFFFFF );
    if ( v13 == 0x7FFFFFFF )
LABEL_9:
      v14 = 0x7FFFFFFFLL;
    else
      v14 = (unsigned int)(v13 + 1);
    if ( (v9[8] & 4) == 0 && (_DWORD)v14 == 2 )
      _InterlockedIncrement(&dword_18003AC88);
    v4 = v9;
    sub_180007B50(v9, v14);
    if ( *a3 == 53 && !a3[1] && a3[2] == 192 && a3[3] == 1174405120 )
    {
      *a4 = v11;
      if ( (*a1 & 4) == 0 )
      {
        do
          v15 = v11[3];
        while ( v15 != 0x7FFFFFFF && v15 != _InterlockedCompareExchange(v11 + 3, v15 + 1, v15) );
      }
      v4 = 0LL;
      v11[8] = *(_DWORD *)a1;
      *((_QWORD *)v11 + 3) = a2;
      v16 = 0;
    }
    else
    {
      v16 = -2147467262;
    }
  }
  else
  {
    v16 = -2147024882;
  }
  if ( v4 )
    sub_180007B50(v4, v10);
  return v16;
}
