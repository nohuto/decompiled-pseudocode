/*
 * XREFs of ?xxxbEnumerateRegistryFonts@@YAHH@Z @ 0x1C013B5AC
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C013B4F0 (xxxLW_LoadFonts.c)
 * Callees:
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z @ 0x1C013B638 (-xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z.c)
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
      xxxbEnumerateRegistryFontsInternal(0x80000000, 0x36u, &qword_1C015E270, 0LL);
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
