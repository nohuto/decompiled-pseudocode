/*
 * XREFs of ??1TrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ @ 0x18009075C
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking_::_1_::dtor$2 @ 0x1800A381E (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StartTracking_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry::~TrackingStateEntry(
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry *this)
{
  volatile signed __int32 *v1; // rbx

  v1 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v1 && _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
  }
}
