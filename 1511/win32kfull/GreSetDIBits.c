/*
 * XREFs of GreSetDIBits @ 0x1C0113E5C
 * Callers:
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F00DC (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     GreSetDIBitsInternal @ 0x1C014BAE4 (GreSetDIBitsInternal.c)
 *     pbmiConvertInfo @ 0x1C02A7F10 (pbmiConvertInfo.c)
 */

__int64 __fastcall GreSetDIBits(HDC a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v7; // rdi
  unsigned int v8; // esi

  v7 = (__int64)a6;
  if ( !a6 )
    goto LABEL_6;
  if ( *a6 == 12 )
    v7 = pbmiConvertInfo(a6);
  if ( *a6 >= 0x28u && (unsigned int)(a6[4] - 4) <= 1 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
LABEL_6:
    v8 = GreSetDIBitsInternal(a1, a5, v7, 0, -1, -1, 0LL);
    if ( v7 )
    {
      if ( (_DWORD *)v7 != a6 )
        Win32FreePool(v7);
    }
    return v8;
  }
}
