/*
 * XREFs of sub_1800045AC @ 0x1800045AC
 * Callers:
 *     sub_180004564 @ 0x180004564 (sub_180004564.c)
 *     sub_1800049A0 @ 0x1800049A0 (sub_1800049A0.c)
 *     sub_180004C1C @ 0x180004C1C (sub_180004C1C.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003360 (_guard_check_icall_nop.c)
 */

__int64 sub_1800045AC()
{
  __int64 (__fastcall ***v0)(_QWORD, __int64); // rdi
  __int64 result; // rax

  v0 = (__int64 (__fastcall ***)(_QWORD, __int64))*(&hObject + 1);
  if ( *(&hObject + 1) )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)*(&hObject + 1) + 22, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v0 )
        result = (**v0)(v0, 1LL);
    }
    *(&hObject + 1) = 0LL;
  }
  return result;
}
