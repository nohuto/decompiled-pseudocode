/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x140440CD4
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x140440730 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x14043ED84 (PnpGetObjectProperty.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1404405DC (PiPnpRtlApplyMandatoryDeviceFilters.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceInterfaceFilters(
        int a1,
        __int64 a2,
        __int64 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        _BYTE *a5)
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
                     3u,
                     a3,
                     v9,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v11,
                     &P,
                     &v10,
                     0);
  if ( ObjectProperty >= 0 )
    ObjectProperty = PiPnpRtlApplyMandatoryDeviceFilters(a1, (__int64)P, 0LL, a4, a5);
  if ( P )
    ExFreePoolWithTag(P, 0x47706E50u);
  return (unsigned int)ObjectProperty;
}
