/*
 * XREFs of ReadString_1 @ 0x1800A4BA8
 * Callers:
 *     ReadStringDelimited_1 @ 0x1800A4DE4 (ReadStringDelimited_1.c)
 *     _winput_s @ 0x1800A5094 (_winput_s.c)
 * Callees:
 *     _fgetwc_nolock @ 0x1800A5A78 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x1800A5AD0 (_ungetwc_nolock.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall ReadString_1(
        char a1,
        __int64 a2,
        wint_t *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        FILE *Stream,
        unsigned __int64 Src,
        _DWORD *a9)
{
  __int64 v13; // rbp
  _WORD *v14; // r14
  unsigned __int64 v15; // rsi
  int v16; // eax
  wint_t v18; // ax
  int v19; // ecx
  int v20; // ebp
  _WORD *v22; // rax
  int v24; // [rsp+80h] [rbp+28h]

  v13 = a2;
  v14 = *a5;
  --*a4;
  v24 = -((a1 & 8) != 0);
  if ( *a3 != 0xFFFF )
    ungetwc_nolock(*a3, Stream);
  v15 = Src;
  if ( (a1 & 0x10) == 0 )
    v15 = Src - 1;
  v16 = a1 & 1;
  while ( 1 )
  {
    if ( v16 )
    {
      if ( !a6-- )
        goto LABEL_37;
    }
    ++*a4;
    v18 = fgetwc_nolock(Stream);
    *a3 = v18;
    if ( v18 == 0xFFFF )
      break;
    if ( (a1 & 0x10) == 0 && ((a1 & 0x20) == 0 || (unsigned __int16)(v18 - 9) <= 4u || v18 == 32) )
    {
      if ( (a1 & 0x40) == 0 )
        break;
      if ( v18 < (unsigned __int16)(v18 >> 3) )
        break;
      v19 = v24 ^ *(char *)((v18 >> 3) + v13);
      if ( !_bittest(&v19, v18 & 7) )
        break;
    }
    if ( (a1 & 4) != 0 )
    {
      ++v14;
LABEL_30:
      v16 = a1 & 1;
    }
    else
    {
      if ( !v15 )
        goto LABEL_31;
      if ( (a1 & 2) != 0 )
      {
        *(_WORD *)*a5 = v18;
        *a5 = (char *)*a5 + 2;
        --v15;
        goto LABEL_30;
      }
      if ( v15 < _mb_cur_max )
      {
        LOBYTE(Src) = *(_BYTE *)a3;
        v20 = (char)Src;
        if ( (char)Src > 0 && (char)Src > v15 || (unsigned int)(char)Src > 5 )
        {
LABEL_31:
          if ( (a1 & 2) != 0 )
            *v14 = 0;
          else
            *(_BYTE *)v14 = 0;
          return 0xFFFFFFFFLL;
        }
        memmove(*a5, &Src, (char)Src);
      }
      else
      {
        *(_BYTE *)*a5 = *(_BYTE *)a3;
        v20 = *(char *)*a5;
      }
      v16 = a1 & 1;
      if ( v20 > 0 )
      {
        *a5 = (char *)*a5 + v20;
        v15 -= v20;
        v16 = a1 & 1;
      }
      v13 = a2;
    }
  }
  --*a4;
  if ( *a3 != 0xFFFF )
    ungetwc_nolock(*a3, Stream);
LABEL_37:
  if ( v14 == *a5 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( (a1 & 0x10) == 0 )
    {
      v22 = *a5;
      if ( (a1 & 2) != 0 )
        *v22 = 0;
      else
        *(_BYTE *)v22 = 0;
    }
  }
  return 0LL;
}
