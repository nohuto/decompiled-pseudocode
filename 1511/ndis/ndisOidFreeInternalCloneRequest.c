/*
 * XREFs of ndisOidFreeInternalCloneRequest @ 0x1C0009398
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C0007FE0 (ndisFDoOidRequestInternal.c)
 *     ndisMAbortRequests @ 0x1C001366C (ndisMAbortRequests.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0040378 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     NdisMDirectOidRequestComplete @ 0x1C00405D0 (NdisMDirectOidRequestComplete.c)
 *     NdisMOidRequestComplete @ 0x1C0040650 (NdisMOidRequestComplete.c)
 *     NdisFDirectOidRequestComplete @ 0x1C0053150 (NdisFDirectOidRequestComplete.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0053DD4 (ndisFInvokeDirectOidRequest.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C0059CCC (ndisMInvokeDirectOidRequest.c)
 *     ndisMInvokeOidRequest @ 0x1C009631C (ndisMInvokeOidRequest.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

void __fastcall ndisOidFreeInternalCloneRequest(KSPIN_LOCK *a1, __int64 a2, __int64 a3, KSPIN_LOCK *a4)
{
  KSPIN_LOCK *v4; // rbp
  KSPIN_LOCK *v5; // r14
  char v7; // bl
  KSPIN_LOCK v9; // rsi
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rbx

  v4 = 0LL;
  v5 = 0LL;
  v7 = a3;
  if ( *(_BYTE *)a1 == 5 )
    v4 = a1;
  else
    v5 = a1;
  v9 = *(_QWORD *)(a2 + 96);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqd(40LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a2, v9, *(_DWORD *)(a2 + 32));
  if ( v9 )
  {
    *(_QWORD *)(a2 + 96) = 0LL;
    if ( *(_DWORD *)(a2 + 4) == 12 )
    {
      *(_DWORD *)(v9 + 60) = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(v9 + 64) = *(_DWORD *)(a2 + 64);
      *(_DWORD *)(v9 + 68) = *(_DWORD *)(a2 + 68);
      *(_QWORD *)(v9 + 40) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(v9 + 48) = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(v9 + 52) = *(_DWORD *)(a2 + 52);
    }
    else
    {
      *(_DWORD *)(v9 + 52) = *(_DWORD *)(a2 + 52);
      *(_DWORD *)(v9 + 56) = *(_DWORD *)(a2 + 56);
      *(_QWORD *)(v9 + 40) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(v9 + 48) = *(_DWORD *)(a2 + 48);
    }
    if ( v7 && (*(_DWORD *)(v9 + 88) & 0x400) == 0 )
    {
      if ( v4 )
      {
        v10 = KeAcquireSpinLockRaiseToDpc(v4 + 18);
        v4[19] = 0LL;
        v11 = v4 + 18;
        *((_DWORD *)v4 + 40) = 0;
        v4[23] = v9;
      }
      else
      {
        v10 = KeAcquireSpinLockRaiseToDpc(v5 + 12);
        v5[65] = 0LL;
        v11 = v5 + 12;
        *((_DWORD *)v5 + 464) = 0;
        v5[277] = v9;
      }
      KeReleaseSpinLock(v11, v10);
    }
    v12 = *(_QWORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 96);
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
      WPP_SF_qq(175LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, *(_QWORD *)(a2 + 24), a2);
    if ( v13 )
    {
      *(_BYTE *)(v13 + 232) = *(_BYTE *)(a2 + 232);
      *(_DWORD *)(v13 + 152) = *(_DWORD *)(a2 + 152);
    }
    ExFreePoolWithTag((PVOID)a2, 0);
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
      WPP_SF_qq(176LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v12, 0LL);
  }
  else if ( (unsigned __int8)byte_1C0083712 >= 2u )
  {
    WPP_SF_(41LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a3);
  }
  if ( a4 )
    *a4 = v9;
}
