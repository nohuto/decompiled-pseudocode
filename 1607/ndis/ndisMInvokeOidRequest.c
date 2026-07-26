/*
 * XREFs of ndisMInvokeOidRequest @ 0x1C009B154
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000B230 (ndisMDoOidRequest.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C006C980 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00D1590 (ndisMInvokeBlockingOidRequest.c)
 *     ndisSetPowerSuspend @ 0x1C00DC7FC (ndisSetPowerSuspend.c)
 * Callees:
 *     ndisOidCloneForCompatibility @ 0x1C000C368 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000C7DC (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeOidRequest(__int64 a1, _NDIS_OID_REQUEST *a2)
{
  __int64 v2; // r14
  _NDIS_OID_REQUEST *v3; // rbp
  int Oid; // r15d
  unsigned int v6; // eax
  __int64 v7; // r8
  PNDIS_OID_REQUEST v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-28h]
  PNDIS_OID_REQUEST v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 3816);
  v3 = a2;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v15 = 0LL;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qD(0xD5u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, Oid);
  v6 = ndisOidCloneForCompatibility((_BYTE *)a1, (__int64)v3, 1, &v15);
  v8 = v15;
  v9 = v6;
  if ( !v6 )
  {
    if ( v15 && (unsigned __int8)byte_1C00895D2 >= 4u )
      WPP_SF_qqd(0xD6u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v3, v15, v15->DATA.QUERY_INFORMATION.Oid);
    v10 = *(_QWORD *)(a1 + 3816);
    v11 = *(_QWORD *)(v10 + 352);
    if ( (!v11 || *(_QWORD *)(v11 + 64) == *(_QWORD *)(v10 + 176))
      && ndisVerifierNdisDispatch
      && (*(_BYTE *)(v2 + 26) & 2) != 0 )
    {
      if ( v8 )
        v3 = v8;
      v12 = ndisVerifierNdisDispatch->NdisMiniportOidRequestHandler(
              *(void **)(a1 + 24),
              v3,
              (void *)a1,
              *(void **)(a1 + 5024),
              *(int (__fastcall **)(void *, _NDIS_OID_REQUEST *))(v2 + 176));
    }
    else
    {
      if ( v8 )
        v3 = v8;
      v12 = (*(__int64 (__fastcall **)(_QWORD, _NDIS_OID_REQUEST *))(v2 + 176))(*(_QWORD *)(a1 + 24), v3);
    }
    v9 = v12;
  }
  if ( v9 != 259 && v8 )
  {
    LOBYTE(v7) = 1;
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, (__int64)v8, v7, 0LL);
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    LODWORD(v14) = v9;
    WPP_SF_qdD(0xD7u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, Oid, v14);
  }
  return v9;
}
