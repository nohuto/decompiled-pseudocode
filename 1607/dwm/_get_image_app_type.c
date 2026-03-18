/*
 * XREFs of _get_image_app_type @ 0x140003468
 * Callers:
 *     pre_c_init @ 0x140002D20 (pre_c_init.c)
 * Callees:
 *     RtlpImageNtHeader @ 0x14000340C (RtlpImageNtHeader.c)
 */

__int64 __fastcall get_image_app_type(unsigned int a1)
{
  HMODULE ModuleHandleW; // rax
  _DWORD *v3; // rax
  __int64 result; // rax
  bool v5; // zf

  ModuleHandleW = GetModuleHandleW(0LL);
  if ( !ModuleHandleW )
    return a1;
  v3 = RtlpImageNtHeader((__int64)ModuleHandleW);
  if ( !v3 )
    return a1;
  if ( *((_WORD *)v3 + 46) == 2 )
    return 2LL;
  v5 = *((_WORD *)v3 + 46) == 3;
  result = 1LL;
  if ( !v5 )
    return a1;
  return result;
}
