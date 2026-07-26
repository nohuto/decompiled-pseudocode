/*
 * XREFs of ndisFInvokeDirectOidRequest @ 0x1C00539E4
 * Callers:
 *     ndisFDoDirectOidRequestInternal @ 0x1C0040150 (ndisFDoDirectOidRequestInternal.c)
 * Callees:
 *     ndisOidCloneForCompatibility @ 0x1C0007450 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C0007DAC (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qLq @ 0x1C003F298 (WPP_SF_qLq.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     WPP_SF_qLqL @ 0x1C0053274 (WPP_SF_qLqL.c)
 */

__int64 __fastcall ndisFInvokeDirectOidRequest(KSPIN_LOCK *a1, __int64 a2)
{
  KSPIN_LOCK v2; // r15
  int v4; // r14d
  NDIS_STATUS v6; // eax
  PNDIS_OID_REQUEST v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h]
  PNDIS_OID_REQUEST v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[2];
  v4 = *(_DWORD *)(a2 + 32);
  v12 = 0LL;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    HIDWORD(v11) = HIDWORD(a2);
    WPP_SF_qLq(0x85u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, (__int64)a1, v4);
  }
  v6 = ndisOidCloneForCompatibility((__int64)a1, a2, 0, &v12);
  v7 = v12;
  v8 = v6;
  if ( !v6 )
  {
    if ( v12 )
    {
      if ( (unsigned __int8)byte_1C0085312 >= 4u )
      {
        LODWORD(v11) = v12->DATA.QUERY_INFORMATION.Oid;
        WPP_SF_qqd(0x86u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a2, v12, v11);
      }
      v9 = (__int64)v7;
    }
    else
    {
      v9 = a2;
    }
    v8 = (*(__int64 (__fastcall **)(KSPIN_LOCK, __int64))(v2 + 296))(a1[3], v9);
  }
  if ( v8 != 259 && v7 )
    ndisOidFreeInternalCloneRequest(a1, (__int64)v7, 1, 0LL);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qLqL(0x87u, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, (__int64)a1, v4);
  return v8;
}
