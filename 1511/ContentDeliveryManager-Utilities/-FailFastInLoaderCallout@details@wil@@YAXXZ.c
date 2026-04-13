/*
 * XREFs of ?FailFastInLoaderCallout@details@wil@@YAXXZ @ 0x1800018E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

void __fastcall wil::details::FailFastInLoaderCallout(wil::details *this)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax

  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  if ( ModuleHandleW )
  {
    ProcAddress = GetProcAddress(ModuleHandleW, "LdrFastFailInLoaderCallout");
    if ( ProcAddress )
      ((void (__fastcall *)(FARPROC))ProcAddress)(ProcAddress);
  }
}
