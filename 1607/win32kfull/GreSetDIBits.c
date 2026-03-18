/*
 * XREFs of GreSetDIBits @ 0x1C02BB484
 * Callers:
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01E5E1C (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     GreSetDIBitsInternal @ 0x1C0151E6C (GreSetDIBitsInternal.c)
 *     pbmiConvertInfo @ 0x1C02A99A4 (pbmiConvertInfo.c)
 */

__int64 __fastcall GreSetDIBits(HDC a1, HSURF a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  char *v9; // rdi
  __int64 v11; // rdx
  unsigned int v12; // esi

  v9 = (char *)a6;
  if ( !a6 )
    goto LABEL_7;
  if ( *(_DWORD *)a6 == 12 )
    v9 = pbmiConvertInfo((unsigned __int16 *)a6);
  if ( *(_DWORD *)a6 >= 0x28u && (unsigned int)(*(_DWORD *)(a6 + 16) - 4) <= 1 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
LABEL_7:
    v12 = GreSetDIBitsInternal(a1, a2, a3, a4, a5, (__int64)v9, 0, 0xFFFFFFFF, 0xFFFFFFFF, 0LL);
    if ( v9 )
    {
      if ( v9 != (char *)a6 )
        Win32FreePool(v9, v11);
    }
    return v12;
  }
}
