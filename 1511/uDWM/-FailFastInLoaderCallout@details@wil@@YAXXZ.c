/*
 * XREFs of ?FailFastInLoaderCallout@details@wil@@YAXXZ @ 0x180070E00
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
