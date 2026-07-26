/*
 * XREFs of ndisOidCloneForCompatibility @ 0x1C000C368
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000B8D0 (ndisFDoOidRequestInternal.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0058804 (ndisFInvokeDirectOidRequest.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C005E16C (ndisMInvokeDirectOidRequest.c)
 *     ndisMInvokeOidRequest @ 0x1C009B154 (ndisMInvokeOidRequest.c)
 * Callees:
 *     NdisAllocateCloneOidRequest @ 0x1C000C560 (NdisAllocateCloneOidRequest.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisOidCloneForCompatibility(_BYTE *a1, __int64 a2, char a3, PNDIS_OID_REQUEST *a4)
{
  unsigned int CloneOidRequest; // r15d
  _BYTE *v5; // rdi
  KSPIN_LOCK *v6; // rbp
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  char v12; // r14
  KIRQL v13; // al
  KSPIN_LOCK *v14; // rcx
  PNDIS_OID_REQUEST v15; // rdx
  unsigned __int8 v17; // al
  PNDIS_OID_REQUEST v18; // rdx
  __int64 v19; // rcx

  CloneOidRequest = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( *a1 == 5 )
    v5 = a1;
  else
    v6 = (KSPIN_LOCK *)a1;
  if ( v5 )
  {
    v10 = *((_QWORD *)v5 + 2);
    v11 = *(_BYTE *)(v10 + 100);
    if ( v11 > 6u || v11 == 6 && *(_BYTE *)(v10 + 101) >= 0x32u )
      goto LABEL_7;
  }
  else
  {
    v17 = *((_BYTE *)v6 + 32);
    if ( v17 > 6u || v17 == 6 && *((_BYTE *)v6 + 33) >= 0x32u )
    {
LABEL_7:
      v12 = 1;
      if ( *(_BYTE *)(a2 + 1) != 1 )
        return CloneOidRequest;
      goto LABEL_8;
    }
  }
  v12 = 0;
  if ( *(_BYTE *)(a2 + 1) != 2 && *(_WORD *)(a2 + 2) == 236 )
    return CloneOidRequest;
LABEL_8:
  CloneOidRequest = NdisAllocateCloneOidRequest(*(NDIS_HANDLE *)(a2 + 104), (PNDIS_OID_REQUEST)a2, 0x7172444Eu, a4);
  if ( CloneOidRequest )
    return CloneOidRequest;
  if ( v12 )
  {
    (*a4)->Header.Revision = 2;
    (*a4)->Header.Size = 248;
    if ( (unsigned __int8)byte_1C00895D2 < 4u )
      goto LABEL_11;
    v19 = 53LL;
LABEL_29:
    WPP_SF_qqd(v19, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a2, *a4, *(_DWORD *)(a2 + 32));
    goto LABEL_11;
  }
  (*a4)->Header.Revision = 1;
  (*a4)->Header.Size = 236;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    v19 = 54LL;
    goto LABEL_29;
  }
LABEL_11:
  *(_DWORD *)&(*a4)->NdisReserved[16] |= 0x8000000u;
  if ( a3 && (*(_DWORD *)(a2 + 88) & 0x400) == 0 )
  {
    if ( v5 )
    {
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 18);
      v14 = (KSPIN_LOCK *)(v5 + 144);
      *((_QWORD *)v5 + 19) = KeGetCurrentThread();
      *((_DWORD *)v5 + 40) = 2297571;
      v15 = *a4;
      *((_QWORD *)v5 + 19) = 0LL;
      *((_DWORD *)v5 + 40) = 0;
      *((_QWORD *)v5 + 23) = v15;
    }
    else
    {
      v13 = KeAcquireSpinLockRaiseToDpc(v6 + 12);
      v14 = v6 + 12;
      v6[65] = (KSPIN_LOCK)KeGetCurrentThread();
      *((_DWORD *)v6 + 464) = 2297577;
      v18 = *a4;
      v6[65] = 0LL;
      *((_DWORD *)v6 + 464) = 0;
      v6[277] = (KSPIN_LOCK)v18;
    }
    KeReleaseSpinLock(v14, v13);
  }
  return CloneOidRequest;
}
