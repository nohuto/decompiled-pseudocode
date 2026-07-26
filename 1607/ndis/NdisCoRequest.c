/*
 * XREFs of NdisCoRequest @ 0x1C00F8720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     NdisCoOidRequest @ 0x1C00F8260 (NdisCoOidRequest.c)
 *     NdisCoRequestComplete @ 0x1C00F8A10 (NdisCoRequestComplete.c)
 *     ndisCoCompleteOidRequestToRequest @ 0x1C00F9780 (ndisCoCompleteOidRequestToRequest.c)
 *     ndisDereferenceAf @ 0x1C00F9B68 (ndisDereferenceAf.c)
 *     ndisReferenceAf @ 0x1C00F9E38 (ndisReferenceAf.c)
 */

__int64 __fastcall NdisCoRequest(
        NDIS_HANDLE NdisBindingHandle,
        KSPIN_LOCK *P,
        _QWORD *NdisVcHandle,
        _QWORD *NdisPartyHandle,
        _QWORD *a5)
{
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  KIRQL v12; // dl
  unsigned int v13; // ebp
  __int64 v14; // r13
  __int64 (__fastcall *v15)(KSPIN_LOCK, __int64, PVOID, _QWORD *); // rbp
  KIRQL v16; // al
  NDIS_STATUS v17; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *OidRequest; // rsi
  NDIS_STATUS v20; // eax
  KSPIN_LOCK v22; // [rsp+68h] [rbp+10h]
  PVOID v23; // [rsp+80h] [rbp+28h]

  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqq(0x43u, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids, NdisBindingHandle, P, a5);
  if ( *((_DWORD *)a5 + 10) == -33554422 && *((_DWORD *)a5 + 8) == 1 && P && (unsigned __int8)ndisReferenceAf(P) )
  {
    if ( *((_DWORD *)P + 99) < 6u )
    {
      v14 = 0LL;
      v23 = 0LL;
      memset(a5 + 9, 0, 0x20uLL);
      v15 = (__int64 (__fastcall *)(KSPIN_LOCK, __int64, PVOID, _QWORD *))P[10];
      v22 = P[47];
      a5[11] = P[6];
      a5[9] = *(_QWORD *)(P[3] + 128);
      if ( NdisVcHandle )
      {
        a5[10] = NdisVcHandle[18];
        v14 = NdisVcHandle[3];
      }
      if ( NdisPartyHandle )
      {
        a5[12] = NdisPartyHandle[18];
        v23 = (PVOID)NdisPartyHandle[2];
      }
      if ( v15 )
      {
        v16 = KeAcquireSpinLockRaiseToDpc(P + 48);
        v11 = P + 48;
        v12 = v16;
        if ( (P[1] & 0x40000000) == 0 )
        {
          KeReleaseSpinLock(v11, v16);
          v17 = v15(v22, v14, v23, a5);
          v13 = v17;
          if ( v17 == 259 )
            goto LABEL_29;
          NdisCoRequestComplete(v17, P, NdisVcHandle, NdisPartyHandle, a5);
          goto LABEL_28;
        }
        goto LABEL_9;
      }
      v13 = -1073741637;
    }
    else
    {
      P[50] = (KSPIN_LOCK)a5;
      v10 = KeAcquireSpinLockRaiseToDpc(P + 48);
      v11 = P + 48;
      v12 = v10;
      if ( (P[1] & 0x40000000) != 0 )
      {
LABEL_9:
        *((_BYTE *)P + 592) = 1;
        P[73] = (KSPIN_LOCK)a5;
        KeReleaseSpinLock(v11, v12);
LABEL_28:
        v13 = 259;
        goto LABEL_29;
      }
      KeReleaseSpinLock(v11, v10);
      v13 = ((__int64 (__fastcall *)(KSPIN_LOCK))P[45])(P[47]);
      if ( v13 == 259 )
        goto LABEL_29;
      P[50] = 0LL;
    }
    ndisDereferenceAf(P);
    goto LABEL_29;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, 0x6572444Eu);
  OidRequest = PoolWithTag;
  if ( !PoolWithTag )
  {
    v13 = -1073741670;
    goto LABEL_29;
  }
  memset(PoolWithTag, 0, 0xF8uLL);
  *OidRequest = 16253334;
  OidRequest[1] = *((_DWORD *)a5 + 8);
  if ( *((_DWORD *)a5 + 8) != 12 )
  {
    OidRequest[8] = *((_DWORD *)a5 + 10);
    *((_QWORD *)OidRequest + 5) = a5[6];
    OidRequest[12] = *((_DWORD *)a5 + 14);
    OidRequest[13] = *((_DWORD *)a5 + 15);
    OidRequest[14] = *((_DWORD *)a5 + 16);
  }
  *((_QWORD *)OidRequest + 13) = NdisBindingHandle;
  *((_QWORD *)OidRequest + 12) = a5;
  v20 = NdisCoOidRequest(NdisBindingHandle, P, NdisVcHandle, NdisPartyHandle, (PNDIS_OID_REQUEST)OidRequest);
  v13 = v20;
  if ( v20 != 259 )
  {
    ndisCoCompleteOidRequestToRequest(
      *((_QWORD *)OidRequest + 17),
      *((_QWORD *)OidRequest + 16),
      *((_QWORD *)OidRequest + 14),
      (int)OidRequest,
      v20);
    goto LABEL_28;
  }
LABEL_29:
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqq(0x44u, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids, NdisBindingHandle, P, a5);
  return v13;
}
