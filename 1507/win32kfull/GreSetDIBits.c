/*
 * XREFs of GreSetDIBits @ 0x1C010102C
 * Callers:
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F0178 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     GreSetDIBitsInternal @ 0x1C0121D20 (GreSetDIBitsInternal.c)
 *     pbmiConvertInfo @ 0x1C02A8714 (pbmiConvertInfo.c)
 */

__int64 __fastcall GreSetDIBits(HDC a1, HSURF a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v8; // rdi
  unsigned int v9; // esi

  v8 = (__int64)a6;
  if ( !a6 )
    goto LABEL_6;
  if ( *a6 == 12 )
    v8 = pbmiConvertInfo(a6);
  if ( *a6 >= 0x28u && (unsigned int)(a6[4] - 4) <= 1 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
LABEL_6:
    v9 = GreSetDIBitsInternal(a1, a2, a5, v8, 0, -1, -1, 0LL);
    if ( v8 )
    {
      if ( (_DWORD *)v8 != a6 )
        Win32FreePool(v8);
    }
    return v9;
  }
}
