/*
 * XREFs of ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x18008CF28
 * Callers:
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x1800798C4 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?lock@?$weak_ptr@VEvent@Wrappers@WRL@Microsoft@@@std@@QEBA?AV?$shared_ptr@VEvent@Wrappers@WRL@Microsoft@@@2@XZ @ 0x18008D2CC (-lock@-$weak_ptr@VEvent@Wrappers@WRL@Microsoft@@@std@@QEBA-AV-$shared_ptr@VEvent@Wrappers@WRL@Mi.c)
 *     ??$MakeAndInitialize@V?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@UIInspectable@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@012@@Z @ 0x18008D670 (--$MakeAndInitialize@V-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows.c)
 *     ??$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z @ 0x18008D73C (--$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z.c)
 *     ?GetDestructorFinishedEvent@SingletonLifetimeEnforcement@WRL@Microsoft@@QEAA?AV?$shared_ptr@VEvent@Wrappers@WRL@Microsoft@@@std@@XZ @ 0x18008E7A0 (-GetDestructorFinishedEvent@SingletonLifetimeEnforcement@WRL@Microsoft@@QEAA-AV-$shared_ptr@VEve.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18008E864 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::_Create<Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory>(
        _QWORD *a1)
{
  int (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // r9
  int v4; // edi
  int (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  RTL_SRWLOCK *v8; // rcx
  __int64 *DestructorFinishedEvent; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  PSRWLOCK v16[4]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int32 *v18; // [rsp+48h] [rbp-18h]
  char v19[8]; // [rsp+50h] [rbp-10h] BYREF
  volatile signed __int32 *v20; // [rsp+58h] [rbp-8h]
  int (__fastcall ***v21)(_QWORD, GUID *, RTL_SRWLOCK **); // [rsp+A0h] [rbp+40h] BYREF
  RTL_SRWLOCK *v22; // [rsp+B0h] [rbp+50h] BYREF
  PSRWLOCK SRWLock; // [rsp+B8h] [rbp+58h] BYREF

  v16[1] = (PSRWLOCK)-2LL;
  *a1 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1, &SRWLock);
  v2 = (int (__fastcall ***)(_QWORD, GUID *, _QWORD *))v21;
  if ( v21 )
  {
    v21 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v2)[2])(v2);
  }
  v3 = 0LL;
  v21 = 0LL;
  if ( Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, GUID *, int (__fastcall ****)(_QWORD, GUID *, RTL_SRWLOCK **), _QWORD))(*(_QWORD *)Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton + 24LL))(
           Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v21,
           0LL);
    v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v21;
  }
  else
  {
    v4 = 0;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockShared(SRWLock);
    v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v21;
  }
  if ( v4 >= 0 )
  {
    if ( v3 )
    {
LABEL_44:
      if ( v4 >= 0 && v3 )
      {
        v4 = (**v3)(v3, &GUID_18d5c8ef_7d1c_4a23_a02d_97fcbd4f6c7a, a1);
        v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v21;
      }
      goto LABEL_47;
    }
    wil::srwlock::lock_exclusive(
      &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton,
      v16);
    v5 = (int (__fastcall ***)(_QWORD, GUID *, _QWORD *))v21;
    if ( v21 )
    {
      v21 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v5)[2])(v5);
    }
    v21 = 0LL;
    v6 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton;
    if ( Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton
                                                              + 24LL))(
             Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v21);
      if ( v4 < 0 )
      {
LABEL_41:
        v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v21;
LABEL_42:
        if ( v16[0] )
        {
          ReleaseSRWLockExclusive(v16[0]);
          v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v21;
        }
        goto LABEL_44;
      }
      v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v21;
      if ( v21 )
        goto LABEL_42;
    }
    std::weak_ptr<Microsoft::WRL::Wrappers::Event>::lock(v6, &v17);
    if ( v17 )
    {
      WaitForSingleObject(*(HANDLE *)(v17 + 8), 0xFFFFFFFF);
      v7 = qword_1800D2FA0;
      if ( qword_1800D2FA0 && !_InterlockedDecrement((volatile signed __int32 *)(qword_1800D2FA0 + 12)) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      qword_1800D2FA0 = 0LL;
      Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent = 0LL;
    }
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>,IInspectable>(&v21);
    v8 = (RTL_SRWLOCK *)Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton;
    Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton = 0LL;
    if ( v4 < 0 )
    {
      v16[3] = v8;
      if ( !v8 )
      {
LABEL_37:
        if ( v18 )
        {
          if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
          {
            v14 = v18;
            (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          }
        }
        goto LABEL_41;
      }
    }
    else
    {
      v16[2] = v8;
      if ( v8 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v8->Ptr + 2))(v8);
      v4 = Microsoft::WRL::AsWeak<IInspectable>(
             v21,
             &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton);
      v22 = 0LL;
      if ( (**v21)(v21, &GUID_9082dcb1_33fd_45f0_93e1_9152c2118ee8, &v22) >= 0 )
      {
        DestructorFinishedEvent = (__int64 *)Microsoft::WRL::SingletonLifetimeEnforcement::GetDestructorFinishedEvent(
                                               v22,
                                               v19);
        v10 = DestructorFinishedEvent[1];
        v11 = *DestructorFinishedEvent;
        if ( v10 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
        v12 = qword_1800D2FA0;
        if ( qword_1800D2FA0
          && _InterlockedExchangeAdd((volatile signed __int32 *)(qword_1800D2FA0 + 12), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        }
        qword_1800D2FA0 = v10;
        Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent = v11;
        v13 = v20;
        if ( v20 )
        {
          if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
            if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          }
        }
      }
      v8 = v22;
      if ( !v22 )
        goto LABEL_37;
      v22 = 0LL;
    }
    (*((void (__fastcall **)(RTL_SRWLOCK *))v8->Ptr + 2))(v8);
    goto LABEL_37;
  }
LABEL_47:
  if ( v3 )
  {
    v21 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v3)[2])(v3);
  }
  return (unsigned int)v4;
}
