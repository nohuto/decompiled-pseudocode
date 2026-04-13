/*
 * XREFs of ?GetStreamRefFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIRandomAccessStreamReference@Streams@Storage@Windows@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAUHSTRING__@@PEAI@Z @ 0x18004AE1C
 * Callers:
 *     ?FileContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B100 (-FileContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@Tar.c)
 *     ?ImageContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B248 (-ImageContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@Ta.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180051DB4 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVStorageFile@Storage@Windows@@@Founda.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
HSTRING __fastcall ContentManagement::TargetedContent::GetStreamRefFromJson(
        HSTRING a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  int v6; // eax
  int ActivationFactory; // eax
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-39h] BYREF
  __int64 v19; // [rsp+28h] [rbp-31h] BYREF
  __int64 v20; // [rsp+30h] [rbp-29h] BYREF
  __int64 v21; // [rsp+38h] [rbp-21h] BYREF
  int v22; // [rsp+40h] [rbp-19h]
  HSTRING v23[3]; // [rsp+48h] [rbp-11h] BYREF
  HSTRING string; // [rsp+60h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v23[1] = (HSTRING)-2LL;
  v23[2] = a1;
  v22 = 0;
  v23[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING *))(*(_QWORD *)a2 + 80LL))(a2, a3, v23);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1BF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v19 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.ApplicationModel.DataTransfer.SharedStorageAccessManager",
         0x40u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_c6132ada_34b1_4849_bd5f_d09fee3158c5, &v19);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1C3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)ActivationFactory);
    __debugbreak();
  }
  v21 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v19 + 56LL))(v19, v23[0], &v21);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1C5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  ++*a4;
  v20 = 0LL;
  v9 = v21;
  v10 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::StorageFile *>,Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile *>>(v21);
  if ( v10 >= 0 )
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 64LL))(v9, &v20);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1C9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v18 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.Storage.Streams.RandomAccessStreamReference",
         0x33u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v11 = RoGetActivationFactory(string, &GUID_857309dc_3fbf_4e7d_986f_ef3b1a07a964, &v18);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1CD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  *(_QWORD *)a1 = 0LL;
  v22 = 1;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING))(*(_QWORD *)v18 + 48LL))(v18, v20, a1);
  if ( v12 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1D0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v12);
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v23[0] )
    WindowsDeleteString(v23[0]);
  return a1;
}
