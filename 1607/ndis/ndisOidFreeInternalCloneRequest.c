/*
 * XREFs of ndisOidFreeInternalCloneRequest @ 0x1C000C7DC
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000B8D0 (ndisFDoOidRequestInternal.c)
 *     ndisMAbortRequests @ 0x1C001BE34 (ndisMAbortRequests.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0043ECC (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     NdisMDirectOidRequestComplete @ 0x1C0044120 (NdisMDirectOidRequestComplete.c)
 *     NdisMOidRequestComplete @ 0x1C00441A0 (NdisMOidRequestComplete.c)
 *     NdisFDirectOidRequestComplete @ 0x1C0057D30 (NdisFDirectOidRequestComplete.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0058804 (ndisFInvokeDirectOidRequest.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C005E16C (ndisMInvokeDirectOidRequest.c)
 *     ndisMInvokeOidRequest @ 0x1C009B154 (ndisMInvokeOidRequest.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
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
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(40LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a2, v9, *(_DWORD *)(a2 + 32));
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
    if ( (unsigned __int8)byte_1C00895D2 >= 4u )
      WPP_SF_qq(175LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, *(_QWORD *)(a2 + 24), a2);
    if ( v13 )
    {
      *(_BYTE *)(v13 + 232) = *(_BYTE *)(a2 + 232);
      *(_DWORD *)(v13 + 152) = *(_DWORD *)(a2 + 152);
    }
    ExFreePoolWithTag((PVOID)a2, 0);
    if ( (unsigned __int8)byte_1C00895D2 >= 4u )
      WPP_SF_qq(176LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, v12, 0LL);
  }
  else if ( (unsigned __int8)byte_1C00895D2 >= 2u )
  {
    WPP_SF_(41LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a3);
  }
  if ( a4 )
    *a4 = v9;
}
