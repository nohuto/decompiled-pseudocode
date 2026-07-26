/*
 * XREFs of ndisMInvokeDirectOidRequest @ 0x1C0059D2C
 * Callers:
 *     ndisMDoDirectOidRequest @ 0x1C0040BF8 (ndisMDoDirectOidRequest.c)
 * Callees:
 *     ndisOidCloneForCompatibility @ 0x1C0007450 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C0007DAC (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeDirectOidRequest(KSPIN_LOCK *a1, __int64 a2)
{
  KSPIN_LOCK v2; // r15
  __int64 v3; // rbp
  int v4; // r14d
  NDIS_STATUS v6; // eax
  PNDIS_OID_REQUEST v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // [rsp+20h] [rbp-28h]
  PNDIS_OID_REQUEST v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[477];
  v3 = a2;
  v4 = *(_DWORD *)(a2 + 32);
  v11 = 0LL;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qD(0xE3u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64)a1, v4);
  v6 = ndisOidCloneForCompatibility((__int64)a1, v3, 0, &v11);
  v7 = v11;
  v8 = v6;
  if ( !v6 )
  {
    if ( v11 )
    {
      if ( (unsigned __int8)byte_1C0085312 >= 4u )
        WPP_SF_qqd(0xE4u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v3, v11, v11->DATA.QUERY_INFORMATION.Oid);
      v3 = (__int64)v7;
    }
    v8 = (*(__int64 (__fastcall **)(KSPIN_LOCK, __int64))(v2 + 248))(a1[3], v3);
  }
  if ( v8 != 259 && v7 )
    ndisOidFreeInternalCloneRequest(a1, (__int64)v7, 0, 0LL);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    LODWORD(v10) = v8;
    WPP_SF_qdD(0xE5u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64)a1, v4, v10);
  }
  return v8;
}
