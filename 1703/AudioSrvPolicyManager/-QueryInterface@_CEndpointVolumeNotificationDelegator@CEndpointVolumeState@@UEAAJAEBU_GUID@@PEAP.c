/*
 * XREFs of ?QueryInterface@_CEndpointVolumeNotificationDelegator@CEndpointVolumeState@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::QueryInterface(
        CEndpointVolumeState::_CEndpointVolumeNotificationDelegator *this,
        const struct _GUID *a2,
        void **a3)
{
  *a3 = 0LL;
  if ( *(_OWORD *)a2 != *(_OWORD *)&GUID_657804fa_d6ad_4496_8a60_352752af4f89
    && (*(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
     || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4) )
  {
    return 2147500034LL;
  }
  *a3 = this;
  return 0LL;
}
