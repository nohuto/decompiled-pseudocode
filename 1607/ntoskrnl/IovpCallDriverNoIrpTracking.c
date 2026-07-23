/*
 * XREFs of IovpCallDriverNoIrpTracking @ 0x1407011F8
 * Callers:
 *     IovCallDriver @ 0x140700AD4 (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1400E9AD0 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x1401CA5A8 (IopPerfCallDriver.c)
 *     VfAfterCallDriver @ 0x14070B910 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14070BAD8 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverNoIrpTracking(PVOID Object, ULONG_PTR a2)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  v4 = VfBeforeCallDriver(Object, a2, 0LL);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v5 = IopPerfCallDriver(Object, a2);
  else
    v5 = IopfCallDriver((__int64)Object, a2);
  v7 = v5;
  VfAfterCallDriver(0LL, &v7, v4);
  return v7;
}
