/*
 * XREFs of ndisMOidRequest @ 0x1C000A1C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueueOidRequest @ 0x1C0007420 (ndisQueueOidRequest.c)
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B444 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisOidPMAddRemove @ 0x1C000B4D0 (ndisOidPMAddRemove.c)
 *     NdisMIndicateStatusEx @ 0x1C0019810 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_qqqDD @ 0x1C0040BEC (WPP_SF_qqqDD.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     NdisMResetMiniport @ 0x1C00586E0 (NdisMResetMiniport.c)
 *     WPP_SF_qDL @ 0x1C0058C94 (WPP_SF_qDL.c)
 */

__int64 __fastcall ndisMOidRequest(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // esi
  __int64 v4; // r15
  char v5; // r12
  unsigned __int8 v8; // bl
  KIRQL v9; // di
  struct _NDIS_OPEN_BLOCK *i; // rax
  KIRQL v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-B8h] BYREF

  v2 = *(_DWORD *)(a2 + 32);
  v3 = 0;
  v4 = 0LL;
  v20 = v2;
  v5 = 0;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqd(14LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a2, v2);
  v8 = 0;
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qD(107LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, 6LL);
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  for ( i = ndisGlobalOpenList; i; i = i->NextGlobalOpen )
  {
    if ( i == (struct _NDIS_OPEN_BLOCK *)a1 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
      if ( (*(_DWORD *)(a1 + 224) & 0x8000) == 0 && *(_DWORD *)(a1 + 228) )
      {
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 696));
        ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 688), 6u);
        ++*(_DWORD *)(a1 + 228);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 696), v11);
        v8 = 1;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
      v5 = 0;
      break;
    }
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v9);
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qDL(v13, v12, a1, 6LL, v8);
  if ( v8 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = 1;
    if ( (*(_DWORD *)(v4 + 3736) & 0x400) == 0 )
      *(_BYTE *)(a2 + 232) = 1;
    v14 = *(_DWORD *)(a2 + 4);
    if ( v14 == 1 && *(_DWORD *)(a2 + 32) == 66058 )
    {
      if ( *(_DWORD *)(a2 + 48) >= 4u )
      {
        v19 = **(_DWORD **)(a2 + 40);
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = &v19;
        StatusIndication.SourceHandle = (void *)v4;
        StatusIndication.StatusCode = 1073807384;
        StatusIndication.StatusBufferSize = 4;
        NdisMIndicateStatusEx((NDIS_HANDLE)v4, &StatusIndication);
      }
      else
      {
        v3 = -1073676266;
      }
      goto LABEL_38;
    }
    if ( !v14 && *(_DWORD *)(a2 + 32) == 66059 )
    {
      if ( *(_DWORD *)(a2 + 48) >= 8u )
      {
        **(_QWORD **)(a2 + 40) = *(_QWORD *)(v4 + 768);
        *(_DWORD *)(a2 + 52) = *(_QWORD *)(v4 + 768) != 0LL ? 8 : 0;
      }
      else
      {
        v3 = -1073676268;
      }
      goto LABEL_38;
    }
    if ( v14 == 1 && *(_DWORD *)(a2 + 32) == 66066 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) & 0x20000000) != 0 )
        NdisMResetMiniport(v4);
      else
        v3 = -1073741637;
      goto LABEL_38;
    }
    memset((void *)(a2 + 72), 0, 0x60uLL);
    *(_DWORD *)(a2 + 88) |= 0x20u;
    *(_QWORD *)(a2 + 104) = a1;
    *(_QWORD *)(a2 + 96) = 0LL;
    if ( *(_DWORD *)(a2 + 4) == 1
      && (v17 = *(_DWORD *)(a2 + 32) + 50265846, v17 <= 5)
      && (v18 = 43, _bittest(&v18, v17)) )
    {
      v15 = ndisOidPMAddRemove((NDIS_HANDLE)v4, 0LL, (PNDIS_OID_REQUEST)a2);
    }
    else
    {
      v15 = ndisQueueOidRequest(a2, (unsigned __int8 *)v4, 0LL, 0LL);
    }
    v3 = v15;
  }
  else
  {
    v3 = -1073676286;
  }
  if ( v3 != 259 && v5 == 1 )
  {
LABEL_38:
    LOBYTE(v12) = 6;
    ndisMDereferenceOpenUnlocked(a1, v12);
  }
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqqDD(15LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, v4, a2, v20, v3);
  return v3;
}
