/*
 * XREFs of Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x1C009CB88
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C009C998 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 * Callees:
 *     WPP_SF_Sd @ 0x1C003DE84 (WPP_SF_Sd.c)
 *     ??$QueryValueBlob@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@Z @ 0x1C009CEB8 (--$QueryValueBlob@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 */

__int64 __fastcall Ndis::BindRegistry::LoadNetworkInterfaceAddress(__int64 a1, const wchar_t *a2, _WORD *a3)
{
  const wchar_t *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v11; // [rsp+28h] [rbp-10h]

  *a3 = 0;
  v10 = 0;
  v11 = 0LL;
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
    v11 = a2;
    LOWORD(v10) = 2 * (0x7FFF - v6);
    HIWORD(v10) = v10 + 2;
  }
  v7 = KRegKey::QueryValueBlob<_lambda_5bc2d9b33f02c20be684baa9d0d621f5_>(a1, &v10);
  v8 = v7;
  if ( v7 == -1073741772 || v7 >= 0 )
    return 0LL;
LABEL_11:
  if ( (unsigned __int8)byte_1C008531D >= 2u )
    WPP_SF_Sd(0x17u, &WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, a2, v8);
  return v8;
}
