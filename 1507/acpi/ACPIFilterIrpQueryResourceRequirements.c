/*
 * XREFs of ACPIFilterIrpQueryResourceRequirements @ 0x1C0067600
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0067894 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetSpare @ 0x1C0067A18 (ACPIInternalSetSpare.c)
 *     ACPIInternalSetProximityDomain @ 0x1C0067AA0 (ACPIInternalSetProximityDomain.c)
 */

__int64 __fastcall ACPIFilterIrpQueryResourceRequirements(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  __int64 DeviceExtension; // rbx
  __int64 v5; // rdx
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  P = 0LL;
  LOBYTE(v5) = 1;
  PnpBiosGetDeviceResourceList(BugCheckParameter3, v5, &P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
}
