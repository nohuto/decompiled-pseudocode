/*
 * XREFs of ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18000C0B4
 * Callers:
 *     ?add_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListRemovedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18000B3C0 (-add_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameLi.c)
 *     ?Add@?$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18000BF00 (-Add@-$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18000C5C0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800128E8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18001296C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        Microsoft::WRL::Details::EventTargetArray **a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  Microsoft::WRL::Details::EventTargetArray *v8; // rcx
  int v9; // r14d
  Microsoft::WRL::Details::EventTargetArray *v10; // rax
  Microsoft::WRL::Details::EventTargetArray *v11; // rdi
  void **v12; // r14
  struct IUnknown **i; // rbx
  Microsoft::WRL::Details::EventTargetArray *v14; // rbx
  Microsoft::WRL::Details::EventTargetArray *v15; // rax
  Microsoft::WRL::Details::EventTargetArray *v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-20h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+38h] [rbp-18h]
  PSRWLOCK v21[2]; // [rsp+40h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v22; // [rsp+A8h] [rbp+58h] BYREF

  *a4 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 2, &SRWLock);
  v8 = *a1;
  v17 = 0LL;
  if ( v8 )
    v18 = ((__int64)(*((_QWORD *)v8 + 3) - *((_QWORD *)v8 + 2)) >> 3) + 1;
  else
    v18 = 1LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         &v17,
         &v18);
  if ( v9 >= 0 )
  {
    v10 = *a1;
    v11 = v17;
    if ( *a1 )
    {
      v12 = (void **)*((_QWORD *)v10 + 4);
      for ( i = (struct IUnknown **)*((_QWORD *)v10 + 2); i != *((struct IUnknown ***)v10 + 3); ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v11, *i, *v12);
        v10 = *a1;
        ++v12;
      }
    }
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v11, a2, a3);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 1, v21);
    v14 = 0LL;
    v22 = 0LL;
    if ( &v22 != a1 )
    {
      v14 = *a1;
      *a1 = 0LL;
      v22 = v14;
    }
    v15 = *a1;
    *a1 = v11;
    v20 = v15;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v20 + 24LL))(v20, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
      }
      v14 = v22;
    }
    if ( v21[0] )
      ReleaseSRWLockExclusive(v21[0]);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v9 = 0;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v22 + 24LL))(v22, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
      }
    }
  }
  else
  {
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v17 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v17 + 24LL))(v17, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
      }
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  return (unsigned int)v9;
}
