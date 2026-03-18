/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x14043EA34
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x14043EC3C (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x140437764 (PnpGetObjectProperty.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14043EAE8 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceInterfaceFilters(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  int ObjectProperty; // edi
  int v9; // [rsp+28h] [rbp-50h]
  int v10; // [rsp+60h] [rbp-18h] BYREF
  int v11; // [rsp+64h] [rbp-14h] BYREF
  PVOID P; // [rsp+68h] [rbp-10h] BYREF

  P = 0LL;
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     0xC8uLL,
                     a2,
                     3,
                     a3,
                     v9,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v11,
                     &P,
                     &v10,
                     0);
  if ( ObjectProperty >= 0 )
    ObjectProperty = PiPnpRtlApplyMandatoryDeviceFilters(a1, (_DWORD)P, 0, a4, a5);
  if ( P )
    ExFreePoolWithTag(P, 0x47706E50u);
  return (unsigned int)ObjectProperty;
}
