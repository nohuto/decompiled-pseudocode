/*
 * XREFs of ?xxxbEnumerateRegistryFonts@@YAHH@Z @ 0x1C00EAE4C
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00EADD0 (xxxLW_LoadFonts.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z @ 0x1C00EAED8 (-xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxbEnumerateRegistryFonts(int a1)
{
  unsigned int v2; // ecx
  __int64 result; // rax

  if ( a1 )
  {
    if ( gbPermanentFontsLoaded )
      return 1LL;
    if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
      xxxbEnumerateRegistryFontsInternal(0x80000000, 0x36u, &qword_1C015B240, 0LL);
    v2 = 1;
  }
  else
  {
    v2 = 2;
  }
  result = xxxbEnumerateRegistryFontsInternal(v2, 6u, L"vgasys.fnt", L"vgasys.fon");
  gbPermanentFontsLoaded = 1;
  if ( !a1 )
    gdwPUDFlags |= 0x400000u;
  return result;
}
