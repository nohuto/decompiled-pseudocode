/*
 * XREFs of Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x1C00AFCA0
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00A728C (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 * Callees:
 *     WPP_SF_Sd @ 0x1C0042B64 (WPP_SF_Sd.c)
 *     ??$QueryValueBlob@V_lambda_0a0f4a6e234c0d615b3ff6ea32737ef1_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_0a0f4a6e234c0d615b3ff6ea32737ef1_@@@Z @ 0x1C00A7A74 (--$QueryValueBlob@V_lambda_0a0f4a6e234c0d615b3ff6ea32737ef1_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 */

__int64 __fastcall Ndis::BindRegistry::LoadNetworkInterfaceAddress(HANDLE *a1, wchar_t *a2, _WORD *a3)
{
  wchar_t *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  _UNICODE_STRING v10; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0;
  *(_DWORD *)&v10.Length = 0;
  v10.Buffer = 0LL;
  if ( a2 )
  {
    v5 = a2;
    v6 = 0x7FFFLL;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v6;
    }
    while ( v6 );
    if ( !v6 )
    {
      v8 = -1073741811;
      goto LABEL_11;
    }
    v10.Buffer = a2;
    v10.Length = 2 * (0x7FFF - v6);
    v10.MaximumLength = v10.Length + 2;
  }
  v7 = KRegKey::QueryValueBlob<_lambda_0a0f4a6e234c0d615b3ff6ea32737ef1_>(a1, &v10, a3);
  v8 = v7;
  if ( v7 == -1073741772 || v7 >= 0 )
    return 0LL;
LABEL_11:
  if ( (unsigned __int8)byte_1C00895DD >= 2u )
    WPP_SF_Sd(0x17u, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, a2, v8);
  return v8;
}
