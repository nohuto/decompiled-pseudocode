/*
 * XREFs of RegistryUnload @ 0x140612D80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     IoDeleteDevice @ 0x14007F30C (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     EtwUnregister @ 0x1405488B0 (EtwUnregister.c)
 *     CmUnRegisterCallback @ 0x1405FB13C (CmUnRegisterCallback.c)
 *     PsFreeSiloContextSlot @ 0x14067DE7C (PsFreeSiloContextSlot.c)
 */

NTSTATUS RegistryUnload()
{
  NTSTATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  CmUnRegisterCallback(gCallbackCookie);
  IoDeleteDevice(gDeviceObject);
  gDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)gVregSiloContextSlot);
  if ( stru_1402F3520.LevelPlus1 > 5 )
    TlgWrite(&stru_1402F3520, &unk_14027B471, 0LL, 0LL, 2u, &pData);
  result = EtwUnregister(stru_1402F3520.RegHandle);
  stru_1402F3520.RegHandle = 0LL;
  stru_1402F3520.LevelPlus1 = 0;
  return result;
}
