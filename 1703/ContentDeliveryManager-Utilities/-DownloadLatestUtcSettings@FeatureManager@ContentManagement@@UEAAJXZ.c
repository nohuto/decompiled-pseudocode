/*
 * XREFs of ?DownloadLatestUtcSettings@FeatureManager@ContentManagement@@UEAAJXZ @ 0x18000E4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@VCUtcApiWrapper@Diagnostics@Microsoft@@@std@@YA?AV?$shared_ptr@VCUtcApiWrapper@Diagnostics@Microsoft@@@0@XZ @ 0x180015774 (--$make_shared@VCUtcApiWrapper@Diagnostics@Microsoft@@@std@@YA-AV-$shared_ptr@VCUtcApiWrapper@Di.c)
 *     ?DownloadLatestSettingsForNamespaceAsync@CUtcApiWrapper@Diagnostics@Microsoft@@QEAAJPEBG0HHH@Z @ 0x18006790C (-DownloadLatestSettingsForNamespaceAsync@CUtcApiWrapper@Diagnostics@Microsoft@@QEAAJPEBG0HHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::FeatureManager::DownloadLatestUtcSettings(
        ContentManagement::FeatureManager *this)
{
  Microsoft::Diagnostics::CUtcApiWrapper *v1; // rbx
  RPC_STATUS v2; // eax
  int v3; // r9d
  signed int v4; // ecx
  int v5; // eax
  int v6; // r9d
  unsigned int v7; // edi
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+20h] [rbp-38h]
  int StringBinding; // [rsp+28h] [rbp-30h]
  int StringBindinga; // [rsp+28h] [rbp-30h]
  Microsoft::Diagnostics::CUtcApiWrapper *v15; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v16; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  RPC_WSTR String; // [rsp+68h] [rbp+10h] BYREF

  std::make_shared<Microsoft::Diagnostics::CUtcApiWrapper>(&v15);
  v1 = v15;
  String = 0LL;
  v2 = RpcStringBindingComposeW(0LL, (RPC_WSTR)L"ncalrpc", 0LL, 0LL, 0LL, &String);
  v4 = (unsigned __int16)v2 | 0x80070000;
  if ( v2 <= 0 )
    v4 = v2;
  if ( v4 >= 0 )
  {
    RpcBindingFromStringBindingW(String, (RPC_BINDING_HANDLE *)v1 + 1);
    RpcStringFreeW(&String);
  }
  v5 = Microsoft::Diagnostics::CUtcApiWrapper::DownloadLatestSettingsForNamespaceAsync(
         v15,
         L"utc",
         L"app",
         v3,
         v11,
         StringBinding);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v5 = Microsoft::Diagnostics::CUtcApiWrapper::DownloadLatestSettingsForNamespaceAsync(
           v15,
           L"telemetry",
           L"ASM-WindowsDefault",
           v6,
           v12,
           StringBindinga);
    v7 = v5;
    if ( v5 >= 0 )
    {
      v7 = 0;
      goto LABEL_11;
    }
    v8 = 635LL;
  }
  else
  {
    v8 = 628LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v8,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v5);
LABEL_11:
  v9 = v16;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return v7;
}
