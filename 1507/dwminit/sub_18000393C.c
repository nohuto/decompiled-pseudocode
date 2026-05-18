/*
 * XREFs of sub_18000393C @ 0x18000393C
 * Callers:
 *     sub_1800039B8 @ 0x1800039B8 (sub_1800039B8.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 */

HMODULE sub_18000393C()
{
  HMODULE result; // rax
  __int64 (__fastcall *v1)(int *, __int64); // rbx

  result = (HMODULE)(unsigned int)_InterlockedCompareExchange(&dword_18000C770, 1, 0);
  if ( !(_DWORD)result )
  {
    result = GetModuleHandleW(L"kernel32.dll");
    if ( result )
    {
      result = (HMODULE)GetProcAddress(result, "WerRegisterMemoryBlock");
      v1 = (__int64 (__fastcall *)(int *, __int64))result;
      if ( result )
      {
        ((void (__fastcall *)(void *, __int64))result)(&unk_18000C780, 10240LL);
        return (HMODULE)v1(&dword_18000C060, 4LL);
      }
    }
  }
  return result;
}
