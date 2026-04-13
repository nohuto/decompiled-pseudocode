/*
 * XREFs of ?AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x18001FC40
 * Callers:
 *     ?AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x180022560 (-AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@W7EAAKXZ.c)
 *     ?AddRef@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCA@EAAKXZ @ 0x180022600 (-AddRef@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::AddRef(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics *this)
{
  signed __int32 v1; // r9d
  unsigned int v2; // r8d

  v1 = *((_DWORD *)this + 11);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)this + 11, v1 + 1, v1) )
        break;
      v1 = *((_DWORD *)this + 11);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      v2 = v1 + 1;
  }
  if ( (*((_BYTE *)this + 64) & 4) == 0 && v2 == 2 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  return v2;
}
