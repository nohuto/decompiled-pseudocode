/*
 * XREFs of ReadString @ 0x18009FCA4
 * Callers:
 *     ReadStringDelimited @ 0x18009FE64 (ReadStringDelimited.c)
 *     _input_l @ 0x18009FFF0 (_input_l.c)
 * Callees:
 *     isleadbyte @ 0x18009A148 (isleadbyte.c)
 *     _inc @ 0x18009FFB8 (_inc.c)
 *     mbtowc @ 0x1800A0A48 (mbtowc.c)
 *     _ungetc_nolock @ 0x1800A0AD0 (_ungetc_nolock.c)
 */

__int64 __fastcall ReadString(
        char a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        _QWORD *SrcCh,
        int a6,
        FILE *Stream,
        _DWORD *a8)
{
  _WORD **v8; // rdi
  _WORD *v11; // r15
  bool v13; // zf
  int v14; // r13d
  FILE *v16; // rcx
  int v17; // eax
  int v18; // ecx
  _WORD *v19; // rax
  wchar_t DstCh; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h]
  int v23; // [rsp+70h] [rbp+18h]

  v22 = a2;
  v8 = (_WORD **)SrcCh;
  DstCh = 0;
  v11 = (_WORD *)*SrcCh;
  --*a4;
  v13 = *a3 == -1;
  v23 = -((a1 & 8) != 0);
  if ( !v13 )
    ungetc_nolock(*a3, Stream);
  v14 = a6;
  while ( (a1 & 1) == 0 || v14-- )
  {
    v16 = Stream;
    ++*a4;
    v17 = inc(v16);
    *a3 = v17;
    if ( v17 == -1
      || (a1 & 0x10) == 0
      && ((a1 & 0x20) == 0 || (unsigned int)(v17 - 9) <= 4 || v17 == 32)
      && ((a1 & 0x40) == 0
       || v17 < 0
       || v17 < v17 >> 3
       || (v18 = v23 ^ *(char *)((v17 >> 3) + v22), !_bittest(&v18, v17 & 7))) )
    {
      --*a4;
      if ( *a3 != -1 )
        ungetc_nolock(*a3, Stream);
      break;
    }
    if ( (a1 & 4) != 0 )
    {
      v11 = (_WORD *)((char *)v11 + 1);
    }
    else if ( (a1 & 2) != 0 )
    {
      LOBYTE(SrcCh) = *(_BYTE *)a3;
      if ( isleadbyte((unsigned __int8)SrcCh) )
      {
        ++*a4;
        BYTE1(SrcCh) = inc(Stream);
      }
      DstCh = 63;
      mbtowc(&DstCh, (const char *)&SrcCh, _mb_cur_max);
      *(*v8)++ = DstCh;
    }
    else
    {
      *(_BYTE *)*v8 = *(_BYTE *)a3;
      *v8 = (_WORD *)((char *)*v8 + 1);
    }
  }
  if ( v11 == *v8 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a8;
    if ( (a1 & 0x10) == 0 )
    {
      v19 = *v8;
      if ( (a1 & 2) != 0 )
        *v19 = 0;
      else
        *(_BYTE *)v19 = 0;
    }
  }
  return 0LL;
}
