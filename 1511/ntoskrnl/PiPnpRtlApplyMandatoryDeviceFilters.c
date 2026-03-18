/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceFilters @ 0x1404405DC
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x140440730 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x140440CD4 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x1404EAE40 (PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback.c)
 * Callees:
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x1404404DC (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x140440644 (PiPnpRtlIsDeviceValidForSession.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceFilters(
        int a1,
        __int64 a2,
        __int64 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        _BYTE *a5)
{
  __int64 result; // rax
  __int64 v9; // rcx

  *a5 = 0;
  result = PiPnpRtlIsDeviceValidForSession(a1, a2, a3, (int)a4, (BOOLEAN)a5);
  if ( (int)result < 0 )
    goto LABEL_5;
  if ( *a5 )
    result = PiPnpRtlIsDeviceEnumerableForUser(v9, a2, a3, a4, (__int64)a5);
  if ( (int)result < 0 )
LABEL_5:
    *a5 = 0;
  return result;
}
