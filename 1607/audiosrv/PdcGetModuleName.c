/*
 * XREFs of PdcGetModuleName @ 0x1800319E4
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x1800315E0 (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PdcGetModuleName(__int64 a1, WCHAR *a2)
{
  unsigned int v2; // ebx
  HMODULE hModule; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  hModule = 0LL;
  if ( !GetModuleHandleExW(6u, &ModuleName, &hModule) || !GetModuleFileNameW(hModule, a2, 0x40u) )
  {
    if ( GetLastError() )
      return (unsigned int)-1073741823;
  }
  return v2;
}
