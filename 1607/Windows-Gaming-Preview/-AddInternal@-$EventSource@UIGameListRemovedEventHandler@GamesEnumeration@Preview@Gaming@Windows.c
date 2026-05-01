/*
 * XREFs of ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18000C628
 * Callers:
 *     ?add_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListRemovedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18000B9D0 (-add_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameLi.c)
 *     ?Add@?$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18000C4AC (-Add@-$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18000C964 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800133F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800135EC (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x180013674 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        __int64 *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  _QWORD *v8; // rcx
  int v9; // edi
  _QWORD *v10; // rax
  Microsoft::WRL::Details::EventTargetArray *v11; // rdi
  void **v12; // r14
  struct IUnknown **i; // rbx
  __int64 v14; // rbx
  __int64 v15; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+20h] [rbp-10h] BYREF
  PSRWLOCK v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+58h] BYREF

  *a4 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 2, SRWLock);
  v8 = (_QWORD *)*a1;
  v18 = 0LL;
  if ( v8 )
    v19 = ((__int64)(v8[3] - v8[2]) >> 3) + 1;
  else
    v19 = 1LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         &v18,
         &v19);
  if ( v9 >= 0 )
  {
    v10 = (_QWORD *)*a1;
    v11 = (Microsoft::WRL::Details::EventTargetArray *)v18;
    if ( *a1 )
    {
      v12 = (void **)v10[4];
      for ( i = (struct IUnknown **)v10[2]; i != (struct IUnknown **)v10[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v11, *i, *v12);
        v10 = (_QWORD *)*a1;
        ++v12;
      }
    }
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v11, a2, a3);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 1, &v18);
    v14 = 0LL;
    if ( &v19 != a1 )
    {
      v14 = *a1;
      *a1 = 0LL;
    }
    v15 = *a1;
    *a1 = (__int64)v11;
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v15);
    if ( v18 )
      ReleaseSRWLockExclusive(v18);
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    v9 = 0;
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v14);
  }
  else
  {
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v18);
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
  }
  return (unsigned int)v9;
}
