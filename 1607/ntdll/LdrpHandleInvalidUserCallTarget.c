/*
 * XREFs of LdrpHandleInvalidUserCallTarget @ 0x180096750
 * Callers:
 *     LdrpValidateUserCallTarget @ 0x1800967F0 (LdrpValidateUserCallTarget.c)
 *     LdrpDispatchUserCallTarget @ 0x180096840 (LdrpDispatchUserCallTarget.c)
 * Callees:
 *     RtlpHandleInvalidUserCallTarget @ 0x1800EFC70 (RtlpHandleInvalidUserCallTarget.c)
 */

void __fastcall LdrpHandleInvalidUserCallTarget()
{
  __int64 v0; // rax
  void (__fastcall *v1)(__int64, __int64, __int64, __int64); // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10

  v1 = (void (__fastcall *)(__int64, __int64, __int64, __int64))RtlpHandleInvalidUserCallTarget(v0);
  if ( v6 )
    v1(v3, v2, v4, v5);
}
