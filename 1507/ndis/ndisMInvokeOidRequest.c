/*
 * XREFs of ndisMInvokeOidRequest @ 0x1C0098CA0
 * Callers:
 *     ndisMDoOidRequest @ 0x1C00078B0 (ndisMDoOidRequest.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0068E90 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00D2808 (ndisMInvokeBlockingOidRequest.c)
 *     ndisSetPowerSuspend @ 0x1C00DCF6C (ndisSetPowerSuspend.c)
 * Callees:
 *     ndisOidCloneForCompatibility @ 0x1C0007450 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C0007DAC (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeOidRequest(__int64 a1, _NDIS_OID_REQUEST *a2)
{
  __int64 v2; // r14
  _NDIS_OID_REQUEST *v3; // rbp
  int Oid; // r15d
  NDIS_STATUS v6; // eax
  PNDIS_OID_REQUEST v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-28h]
  PNDIS_OID_REQUEST v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 3816);
  v3 = a2;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v14 = 0LL;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qD(0xD2u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, Oid);
  v6 = ndisOidCloneForCompatibility(a1, (__int64)v3, 1, &v14);
  v7 = v14;
  v8 = v6;
  if ( !v6 )
  {
    if ( v14 && (unsigned __int8)byte_1C0085312 >= 4u )
      WPP_SF_qqd(0xD3u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v3, v14, v14->DATA.QUERY_INFORMATION.Oid);
    v9 = *(_QWORD *)(a1 + 3816);
    v10 = *(_QWORD *)(v9 + 352);
    if ( (!v10 || *(_QWORD *)(v10 + 64) == *(_QWORD *)(v9 + 176))
      && ndisVerifierNdisDispatch
      && (*(_BYTE *)(v2 + 26) & 2) != 0 )
    {
      if ( v7 )
        v3 = v7;
      v11 = ndisVerifierNdisDispatch->NdisMiniportOidRequestHandler(
              *(void **)(a1 + 24),
              v3,
              (void *)a1,
              *(void **)(a1 + 5024),
              *(int (__fastcall **)(void *, _NDIS_OID_REQUEST *))(v2 + 176));
    }
    else
    {
      if ( v7 )
        v3 = v7;
      v11 = (*(__int64 (__fastcall **)(_QWORD, _NDIS_OID_REQUEST *))(v2 + 176))(*(_QWORD *)(a1 + 24), v3);
    }
    v8 = v11;
  }
  if ( v8 != 259 && v7 )
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, (__int64)v7, 1, 0LL);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    LODWORD(v13) = v8;
    WPP_SF_qdD(0xD4u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, Oid, v13);
  }
  return v8;
}
