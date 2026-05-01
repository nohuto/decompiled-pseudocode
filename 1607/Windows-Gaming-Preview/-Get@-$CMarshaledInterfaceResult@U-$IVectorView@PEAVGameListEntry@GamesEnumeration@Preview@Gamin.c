/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18000F6F4
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18000E930 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnumera.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180010A9C (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  _DWORD *Ptr; // rbx
  _DWORD *v5; // rsi
  RTL_SRWLOCK *v6; // r15
  _DWORD *v7; // rdi
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rax
  _DWORD *v12; // rcx
  _DWORD *v13; // rdi
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v15; // rcx
  _DWORD *v17; // [rsp+70h] [rbp+40h] BYREF
  _DWORD *v18; // [rsp+78h] [rbp+48h] BYREF
  _DWORD *v19; // [rsp+80h] [rbp+50h]
  _DWORD *v20; // [rsp+88h] [rbp+58h]

  Ptr = 0LL;
  v19 = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  v6 = a1 + 4;
  AcquireSRWLockShared(a1 + 4);
  if ( a1[3].Ptr )
  {
    Ptr = a1[3].Ptr;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v19 = Ptr;
  }
  v7 = a1[2].Ptr;
  if ( v7 )
  {
    v17 = 0LL;
    v18 = v7;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    (*(void (__fastcall **)(_DWORD *, GUID *, _DWORD **))(*(_QWORD *)v7 + 24LL))(
      v7,
      &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a,
      &v17);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v17;
    if ( v17 )
    {
      v18 = 0LL;
      if ( (int)RoGetAgileReference(0LL, &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a, v17, &v18) < 0 )
      {
        v9 = v18;
      }
      else
      {
        v5 = v18;
        v20 = v18;
        v9 = 0LL;
      }
      if ( v9 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v8 = v17;
    }
    if ( v8 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  ReleaseSRWLockShared(v6);
  *a2 = 0LL;
  if ( v5 )
  {
    v17 = v5;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    v10 = (*(__int64 (__fastcall **)(_DWORD *, GUID *, void **))(*(_QWORD *)v5 + 24LL))(
            v5,
            &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a,
            a2);
    v11 = *(_QWORD *)v5;
    v12 = v5;
LABEL_23:
    (*(void (__fastcall **)(_DWORD *))(v11 + 16))(v12);
    goto LABEL_25;
  }
  if ( Ptr )
  {
    *a2 = 0LL;
    v17 = 0LL;
    if ( Ptr[6] == 2 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)Ptr + 8LL))(Ptr);
      v13 = Ptr;
      v17 = Ptr;
    }
    else
    {
      v13 = Ptr;
      Ptr = 0LL;
      v19 = 0LL;
      v17 = v13;
    }
    *a2 = 0LL;
    if ( v13[6] == 2 )
    {
      InterfaceAndReleaseStream = AgileGitPtr::CopyLocal(
                                    (AgileGitPtr *)(v13 + 8),
                                    &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a,
                                    a2);
    }
    else
    {
      v15 = (IStream *)*((_QWORD *)v13 + 2);
      *((_QWORD *)v13 + 2) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v15, &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a, a2);
    }
    v10 = InterfaceAndReleaseStream;
    v11 = *(_QWORD *)v13;
    v12 = v13;
    goto LABEL_23;
  }
  v10 = 0;
LABEL_25:
  if ( v5 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( Ptr )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v10;
}
