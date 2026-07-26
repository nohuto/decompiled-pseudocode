/*
 * XREFs of Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x1C00AC530
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00A1440 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 * Callees:
 *     WPP_SF_Sd @ 0x1C003EF2C (WPP_SF_Sd.c)
 *     ??$QueryValueBlob@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@Z @ 0x1C00A16B8 (--$QueryValueBlob@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
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
  v7 = KRegKey::QueryValueBlob<_lambda_5bc2d9b33f02c20be684baa9d0d621f5_>(a1, &v10, a3);
  v8 = v7;
  if ( v7 == -1073741772 || v7 >= 0 )
    return 0LL;
LABEL_11:
  if ( (unsigned __int8)byte_1C008371D >= 2u )
    WPP_SF_Sd(0x17u, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, a2, v8);
  return v8;
}
