/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x14017FF50
 * Callers:
 *     VfZwAlpcCreateSecurityContext @ 0x1407551C8 (VfZwAlpcCreateSecurityContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSecurityContext(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
