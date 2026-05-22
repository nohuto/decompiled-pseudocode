/*
 * XREFs of ??1?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@EEAA@XZ @ 0x18008CB94
 * Callers:
 *     ??_G?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@EEAAPEAXI@Z @ 0x18008CD90 (--_G-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Micro.c)
 * Callees:
 *     ?TryLockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18008F2B4 (-TryLockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::~Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>(
        Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  Microsoft::WRL::Wrappers::SRWLock::TryLockExclusive(this, &SRWLock);
  if ( SRWLock )
  {
    v2 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton;
    v3 = 0LL;
    v4 = 0LL;
    if ( Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton )
    {
      (*(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton
                                                         + 24LL))(
        Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton,
        &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
        &v4);
      v3 = v4;
      if ( v4 )
      {
LABEL_8:
        v4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
LABEL_9:
        ReleaseSRWLockExclusive(SRWLock);
        goto LABEL_10;
      }
      v2 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton;
    }
    Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton = 0LL;
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      v3 = v4;
    }
    if ( !v3 )
      goto LABEL_9;
    goto LABEL_8;
  }
LABEL_10:
  Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::~SpatialGraphNodeReferenceFactory(this);
}
