/*
 * XREFs of ?QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z @ 0x1C00A1E64
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0013F54 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00A1440 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 * Callees:
 *     ??$QueryValueBlob@V_lambda_3b3a57606365f01e8e109621d2f46771_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_3b3a57606365f01e8e109621d2f46771_@@@Z @ 0x1C00A1B14 (--$QueryValueBlob@V_lambda_3b3a57606365f01e8e109621d2f46771_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 */

__int64 __fastcall KRegKey::QueryValueGuid(KRegKey *this, wchar_t *a2, struct _GUID *a3)
{
  __int64 v4; // rax
  wchar_t *v5; // r8
  _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF
  struct _GUID *v8; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)&v7.Length = 0;
  v7.Buffer = 0LL;
  if ( !a2 )
    goto LABEL_7;
  v4 = 0x7FFFLL;
  v5 = a2;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( v4 )
  {
    v7.Buffer = a2;
    v7.Length = 2 * (0x7FFF - v4);
    v7.MaximumLength = v7.Length + 2;
LABEL_7:
    v8 = a3;
    return KRegKey::QueryValueBlob<_lambda_3b3a57606365f01e8e109621d2f46771_>((HANDLE *)&this->_p, &v7, (_OWORD **)&v8);
  }
  return 3221225485LL;
}
