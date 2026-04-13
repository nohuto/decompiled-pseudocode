/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180021D80
 * Callers:
 *     ?GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180021AAC (-GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     memset_0 @ 0x1800280CC (memset_0.c)
 */

__int64 __fastcall _AllocStringWorker<CTCoAllocPolicy>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  _WORD *v9; // rax
  _WORD *v10; // rcx
  unsigned __int64 v11; // r8
  char *v12; // r11
  _WORD *v13; // rdx
  int v14; // esi
  __int64 v15; // r9
  __int16 v16; // ax
  unsigned __int64 v17; // rdi

  v6 = a4 + 1;
  v7 = 0;
  *a6 = 0LL;
  if ( a4 + 1 >= a4 && (*a6 = 0LL, is_mul_ok(v6, 2uLL)) )
  {
    v9 = CoTaskMemAlloc(2 * v6);
    *a6 = v9;
    v10 = v9;
    if ( v9 )
    {
      if ( v6 > 0x7FFFFFFF || a4 >= 0x7FFFFFFF )
      {
        if ( v6 )
          *v9 = 0;
      }
      else if ( v6 )
      {
        v11 = v6;
        v12 = (char *)(&unk_18002D640 - (_UNKNOWN *)v9);
        v13 = v9;
        v14 = 0;
        v15 = 0LL;
        do
        {
          if ( v11 == v6 )
            break;
          v16 = *(_WORD *)((char *)v13 + (_QWORD)v12);
          if ( !v16 )
            break;
          *v13 = v16;
          ++v15;
          ++v13;
          --v11;
        }
        while ( v11 );
        if ( !v11 )
        {
          --v13;
          v14 = -2147024774;
          --v15;
        }
        v17 = v6 - v15;
        *v13 = 0;
        if ( v14 >= 0 && v17 > 1 && 2 * v17 > 2 )
          memset_0(&v10[v15 + 1], 0, 2 * v17 - 2);
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v7;
}
