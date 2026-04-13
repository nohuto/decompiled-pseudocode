/*
 * XREFs of sub_1800018E0 @ 0x1800018E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

HMODULE sub_1800018E0()
{
  HMODULE result; // rax

  result = GetModuleHandleW(L"ntdll.dll");
  if ( result )
  {
    result = (HMODULE)GetProcAddress(result, "LdrFastFailInLoaderCallout");
    if ( result )
      return (HMODULE)((__int64 (__fastcall *)(HMODULE))result)(result);
  }
  return result;
}
