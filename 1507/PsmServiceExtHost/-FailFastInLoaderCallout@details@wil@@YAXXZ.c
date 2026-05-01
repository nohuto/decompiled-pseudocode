/*
 * XREFs of ?FailFastInLoaderCallout@details@wil@@YAXXZ @ 0x180046B10
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
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
