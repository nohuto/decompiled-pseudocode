/*
 * XREFs of KeEnumerateKernelStackSegments @ 0x1400EE9A8
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1400A5934 (KiOutSwapKernelStacks.c)
 *     PspReaper @ 0x1400C910C (PspReaper.c)
 *     DbgkpLkmdSnapKernelStack @ 0x1401B75D8 (DbgkpLkmdSnapKernelStack.c)
 *     PsDereferenceKernelStack @ 0x1404D1808 (PsDereferenceKernelStack.c)
 *     PspThreadDelete @ 0x14051BBB8 (PspThreadDelete.c)
 * Callees:
 *     KeGetNextKernelStackSegment @ 0x1400EEA2C (KeGetNextKernelStackSegment.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall KeEnumerateKernelStackSegments(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _OWORD *, __int64),
        __int64 a3)
{
  __int64 v3; // rbp
  char NextKernelStackSegment; // bl
  __int64 v7; // rcx
  __int64 result; // rax
  _OWORD v9[2]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v10[2]; // [rsp+40h] [rbp-48h] BYREF

  v3 = a3;
  LOBYTE(a3) = 1;
  KeGetNextKernelStackSegment(a1, v9, a3);
  do
  {
    v10[0] = v9[0];
    v10[1] = v9[1];
    NextKernelStackSegment = KeGetNextKernelStackSegment(a1, v9, 0LL);
    result = a2(v7, v10, v3);
  }
  while ( NextKernelStackSegment );
  return result;
}
