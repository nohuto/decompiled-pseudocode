/*
 * XREFs of ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ @ 0x180092ED8
 * Callers:
 *     ??_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAPEAXI@Z @ 0x18008E880 (--_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAPEAXI@Z.c)
 *     ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x18008F028 (--1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     _std::make_shared_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__::_1_::dtor$4 @ 0x1800A394C (_std--make_shared_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper__--_1_--dtor$4.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x18009332C (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  char *v4; // rcx
  signed int LastError; // eax
  unsigned __int64 v6; // rcx
  signed int v7; // eax
  unsigned __int64 v8; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vftable';
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 9, &SRWLock);
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    if ( (unsigned int)CM_Unregister_Notification(v2) )
    {
      LastError = GetLastError();
      v6 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v6 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v6);
      __debugbreak();
    }
    *((_QWORD *)this + 11) = 0LL;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(this, 6u);
  v3 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::CMNotificationTraits>::`vftable';
  if ( v3 )
  {
    if ( (unsigned int)CM_Unregister_Notification(v3) )
    {
      v7 = GetLastError();
      v8 = (unsigned __int16)v7 | 0x80070000;
      if ( v7 <= 0 )
        v8 = (unsigned int)v7;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v8);
      JUMPOUT(0x180092FADLL);
    }
    *((_QWORD *)this + 11) = 0LL;
  }
  v4 = (char *)*((_QWORD *)this + 8);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
}
