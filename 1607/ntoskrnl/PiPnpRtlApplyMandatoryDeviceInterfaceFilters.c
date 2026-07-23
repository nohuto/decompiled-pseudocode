/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1404DCCE0
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x1404DCF14 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1404DCDC0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PnpGetObjectProperty @ 0x1404DEBF4 (PnpGetObjectProperty.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceInterfaceFilters(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int ObjectProperty; // edi
  __int64 v9; // [rsp+60h] [rbp-18h] BYREF
  PVOID P; // [rsp+68h] [rbp-10h] BYREF

  P = 0LL;
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     0xC8uLL,
                     a3,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v9 + 4,
                     (__int64)&P,
                     (__int64)&v9,
                     0);
  if ( ObjectProperty >= 0 )
    ObjectProperty = PiPnpRtlApplyMandatoryDeviceFilters(a1, (_DWORD)P, 0, a4, a5);
  if ( P )
    ExFreePoolWithTag(P, 0x47706E50u);
  return (unsigned int)ObjectProperty;
}
