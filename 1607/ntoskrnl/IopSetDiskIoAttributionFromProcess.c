/*
 * XREFs of IopSetDiskIoAttributionFromProcess @ 0x14006ECD4
 * Callers:
 *     IoSetDiskIoAttributionFromThread @ 0x1400EBF60 (IoSetDiskIoAttributionFromThread.c)
 *     IoSetIoAttributionIrp @ 0x1401C923C (IoSetIoAttributionIrp.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x14006ED78 (IopReferenceIoAttributionFromProcess.c)
 *     IopSetDiskIoAttributionExtension @ 0x14008E608 (IopSetDiskIoAttributionExtension.c)
 */

__int64 __fastcall IopSetDiskIoAttributionFromProcess(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v5 = 0LL;
  LOBYTE(a2) = 1;
  result = IopReferenceIoAttributionFromProcess(v3, a2, &v5);
  if ( (int)result >= 0 )
  {
    result = IopSetDiskIoAttributionExtension(a1, v5);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
