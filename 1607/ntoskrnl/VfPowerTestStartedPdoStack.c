/*
 * XREFs of VfPowerTestStartedPdoStack @ 0x140718FF4
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     VfIrpSendSynchronousIrp @ 0x14070BF30 (VfIrpSendSynchronousIrp.c)
 */

__int64 __fastcall VfPowerTestStartedPdoStack(struct _DEVICE_OBJECT *a1)
{
  __int64 result; // rax
  _WORD v3[44]; // [rsp+40h] [rbp-58h] BYREF

  memset(v3, 0, 0x48uLL);
  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    v3[0] = -234;
    return VfIrpSendSynchronousIrp(a1, (__int64)v3, 1, -1073741637, 0LL, 0LL, 0LL);
  }
  return result;
}
