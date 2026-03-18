/*
 * XREFs of ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B556C
 * Callers:
 *     NtGdiColorCorrectPalette @ 0x1C02B0C50 (NtGdiColorCorrectPalette.c)
 *     GreSetPaletteEntries @ 0x1C02B21D0 (GreSetPaletteEntries.c)
 * Callees:
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C0013D20 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall XEPALOBJ::ulSetEntries(
        struct PALETTE **this,
        unsigned int a2,
        unsigned int a3,
        const struct tagPALETTEENTRY *a4)
{
  struct PALETTE *v5; // r10
  unsigned int v6; // ecx
  _BYTE *v7; // r11
  __int64 v8; // rdi
  _BYTE *v9; // rdx
  __int64 v10; // rsi
  _DWORD *v11; // rax
  _DWORD *v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // r10d

  v5 = *this;
  if ( *this == ppalDefault )
    return 0LL;
  if ( (*((_DWORD *)v5 + 6) & 0x100000) != 0 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  v6 = *((_DWORD *)v5 + 7);
  if ( a2 >= v6 )
    return 0LL;
  if ( a2 + a3 > v6 )
    a3 = v6 - a2;
  if ( !a3 )
    return 0LL;
  v7 = 0LL;
  v8 = a2;
  v9 = 0LL;
  v10 = *((_QWORD *)v5 + 16) + 4 * v8;
  v11 = (_DWORD *)*((_QWORD *)v5 + 9);
  if ( v11 )
  {
    *v11 = 0;
    v7 = (_BYTE *)(*((_QWORD *)*this + 9) + v8 + 4);
  }
  v12 = (_DWORD *)*((_QWORD *)*this + 10);
  if ( v12 )
  {
    *v12 = 0;
    v9 = (_BYTE *)(*((_QWORD *)*this + 10) + v8 + 4);
  }
  v13 = v10 - (_QWORD)a4;
  do
  {
    --a3;
    *(const struct tagPALETTEENTRY *)((char *)a4 + v13) = *a4;
    if ( v7 )
      *v7++ = 0;
    if ( v9 )
      *v9++ = 0;
    ++a4;
  }
  while ( a3 );
  XEPALOBJ::vUpdateTime((XEPALOBJ *)this);
  return v14;
}
