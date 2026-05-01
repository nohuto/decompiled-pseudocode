/*
 * XREFs of ?FailFastInLoaderCallout@details@wil@@YAXXZ @ 0x180010E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
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
