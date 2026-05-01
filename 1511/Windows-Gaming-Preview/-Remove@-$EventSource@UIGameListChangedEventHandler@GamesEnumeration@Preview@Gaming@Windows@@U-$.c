/*
 * XREFs of ?Remove@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000A07C
 * Callers:
 *     ?remove_GameAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180009570 (-remove_GameAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegi.c)
 *     ?remove_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180009610 (-remove_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRe.c)
 *     ?remove_GameUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800096B0 (-remove_GameUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRe.c)
 *     ??$InvokeDelegates@V_lambda_7eb293456242c3bc5897049bf7e8a99d_@@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_7eb293456242c3bc5897049bf7e8a99d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000ACC0 (--$InvokeDelegates@V_lambda_7eb293456242c3bc5897049bf7e8a99d_@@UIGameListRemovedEventHandler@Gam.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18000A330 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18000AA2C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180011118 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800111B8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v3; // rcx
  int v4; // r14d
  char v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rdi
  struct IUnknown **v8; // r14
  void **v9; // r12
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-20h] BYREF
  PSRWLOCK v13[3]; // [rsp+30h] [rbp-18h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v15; // [rsp+90h] [rbp+48h] BYREF
  volatile signed __int32 *v16; // [rsp+98h] [rbp+50h] BYREF

  v16 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 2, &SRWLock);
  v3 = *a1;
  if ( !*a1 )
  {
    v4 = 0;
LABEL_11:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v4;
  }
  v5 = 0;
  v6 = *(_QWORD *)(v3 + 24) - *(_QWORD *)(v3 + 16);
  v15 = 0LL;
  v7 = (v6 >> 3) - 1;
  v11 = v7;
  if ( v7 )
  {
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
           &v15,
           &v11);
    if ( v4 < 0 )
    {
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v15 + 24LL))(
            v15,
            1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        }
      }
      goto LABEL_11;
    }
    v8 = *(struct IUnknown ***)(*a1 + 16);
    v9 = *(void ***)(*a1 + 32);
    if ( v8 == *(struct IUnknown ***)(*a1 + 24) )
      goto LABEL_23;
    do
    {
      if ( v5 || a2 != *v8 )
      {
        if ( !v7 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v15, *v8, *v9++);
        v11 = --v7;
      }
      else
      {
        v5 = 1;
      }
      ++v8;
    }
    while ( v8 != *(struct IUnknown ***)(*a1 + 24) );
    if ( !v5 )
      goto LABEL_23;
    goto LABEL_21;
  }
  if ( **(struct IUnknown ***)(v3 + 16) == a2 )
  {
LABEL_21:
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 1, v13);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v16, a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v15);
    if ( v13[0] )
      ReleaseSRWLockExclusive(v13[0]);
LABEL_23:
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v15 + 24LL))(v15, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      }
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v4 = 0;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return (unsigned int)v4;
}
