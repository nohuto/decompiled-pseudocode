/*
 * XREFs of ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x18001C338
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180020D00 (-Run@-$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180029488 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 */

__int64 __fastcall CSingleViewShellExperience::LaunchCore(
        CSingleViewShellExperience *this,
        HSTRING *a2,
        const unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  const WCHAR *v5; // rsi
  PCWSTR StringRawBuffer; // rax
  int v7; // eax

  v3 = 0;
  v5 = 0LL;
  if ( (*((_BYTE *)this + 156) & 2) != 0 )
    v5 = L"ShellExperience";
  StringRawBuffer = WindowsGetStringRawBuffer(*a2, 0LL);
  v7 = ActivateApplicationForExperienceWithPropertySet(StringRawBuffer, a3, v5);
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v3;
}
