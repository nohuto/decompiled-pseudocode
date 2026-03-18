/*
 * XREFs of HUBMISC_DetachDevice @ 0x1C0025E6C
 * Callers:
 *     HUBPSM30_DetachingDeviceFromPortOnOverCurrent @ 0x1C000DA90 (HUBPSM30_DetachingDeviceFromPortOnOverCurrent.c)
 *     HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer @ 0x1C000DAB0 (HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer.c)
 *     HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer @ 0x1C000DAE0 (HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer.c)
 *     HUBPSM20_DetachingDeviceOnCleanup @ 0x1C000DB10 (HUBPSM20_DetachingDeviceOnCleanup.c)
 *     HUBPSM30_DisablingSuperSpeedOnPortOnDeviceRequest @ 0x1C000E8A0 (HUBPSM30_DisablingSuperSpeedOnPortOnDeviceRequest.c)
 *     HUBPSM30_ReleasingResetReferenceOnDeviceRemoval @ 0x1C000EE30 (HUBPSM30_ReleasingResetReferenceOnDeviceRemoval.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_DetachDevice(unsigned __int16 *a1)
{
  __int64 result; // rax

  HUBSM_AddEvent(*((_QWORD *)a1 + 166) + 488LL, 0xFC6u);
  result = *((unsigned int *)a1 + 334);
  if ( (result & 2) == 0 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1 + 392LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 224LL),
             a1[100]);
  return result;
}
