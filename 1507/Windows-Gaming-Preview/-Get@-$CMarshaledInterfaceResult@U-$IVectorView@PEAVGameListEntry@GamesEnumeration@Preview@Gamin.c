/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18000CCA0
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18000B680 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnumera.c)
 * Callees:
 *     ?CopyLocal@?$GitPtrSupportsAgile@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000D724 (-CopyLocal@-$GitPtrSupportsAgile@U-$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E96C (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  _DWORD *Ptr; // rbx
  __int64 v5; // rsi
  RTL_SRWLOCK *v6; // r12
  __int64 v7; // rdx
  _DWORD *v8; // r14
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // r15d
  _DWORD *v12; // rdi
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v14; // rcx
  _DWORD *v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+78h] [rbp+48h] BYREF
  __int64 v18; // [rsp+80h] [rbp+50h] BYREF
  _DWORD *v19; // [rsp+88h] [rbp+58h]

  Ptr = 0LL;
  v19 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v6 = a1 + 4;
  AcquireSRWLockShared(a1 + 4);
  if ( a1[3].Ptr )
  {
    Ptr = a1[3].Ptr;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v19 = Ptr;
  }
  if ( a1[2].Ptr )
  {
    v16 = 0LL;
    Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::CopyLocal(
      &a1[2],
      v7,
      &v16);
    v8 = v16;
    if ( v16 )
    {
      v17 = 0LL;
      if ( (int)RoGetAgileReference(0LL, &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a, v16, &v17, -2LL) < 0 )
      {
        v9 = v17;
      }
      else
      {
        v5 = v17;
        v18 = v17;
        v9 = 0LL;
      }
      if ( v9 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v8 = v16;
    }
    if ( v8 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  ReleaseSRWLockShared(v6);
  *a2 = 0LL;
  if ( v5 )
  {
    v11 = Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::CopyLocal(
            &v18,
            v10,
            a2);
  }
  else if ( Ptr )
  {
    *a2 = 0LL;
    v16 = 0LL;
    if ( Ptr[6] == 2 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)Ptr + 8LL))(Ptr);
      v12 = Ptr;
      v16 = Ptr;
    }
    else
    {
      v12 = Ptr;
      Ptr = 0LL;
      v19 = 0LL;
      v16 = v12;
    }
    *a2 = 0LL;
    if ( v12[6] == 2 )
    {
      InterfaceAndReleaseStream = AgileGitPtr::CopyLocal(
                                    (AgileGitPtr *)(v12 + 8),
                                    &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a,
                                    a2);
    }
    else
    {
      v14 = (IStream *)*((_QWORD *)v12 + 2);
      *((_QWORD *)v12 + 2) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v14, &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a, a2);
    }
    v11 = InterfaceAndReleaseStream;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    v11 = 0;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( Ptr )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v11;
}
