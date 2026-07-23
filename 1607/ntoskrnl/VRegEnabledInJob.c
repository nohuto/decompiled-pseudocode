/*
 * XREFs of VRegEnabledInJob @ 0x1404CB334
 * Callers:
 *     VrpShouldOperateOnCall @ 0x140463650 (VrpShouldOperateOnCall.c)
 *     IoctlDeviceDispatch @ 0x140612B08 (IoctlDeviceDispatch.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx

  result = PsGetCurrentSilo();
  v3 = 0;
  if ( result )
  {
    LOBYTE(v3) = (int)PsGetPermanentSiloContext(result, gVregSiloContextSlot, a1) >= 0;
    return v3;
  }
  return result;
}
