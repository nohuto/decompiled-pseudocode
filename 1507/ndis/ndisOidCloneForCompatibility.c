/*
 * XREFs of ndisOidCloneForCompatibility @ 0x1C0007450
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C0006A40 (ndisFDoOidRequestInternal.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C00539E4 (ndisFInvokeDirectOidRequest.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C0059D2C (ndisMInvokeDirectOidRequest.c)
 *     ndisMInvokeOidRequest @ 0x1C0098CA0 (ndisMInvokeOidRequest.c)
 * Callees:
 *     NdisAllocateCloneOidRequest @ 0x1C0007640 (NdisAllocateCloneOidRequest.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

NDIS_STATUS __fastcall ndisOidCloneForCompatibility(__int64 a1, __int64 a2, char a3, PNDIS_OID_REQUEST *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  char v11; // r14
  NDIS_STATUS result; // eax
  KIRQL v13; // al
  KSPIN_LOCK *v14; // rcx
  unsigned __int8 v15; // al
  __int64 v16; // rcx

  v4 = 0LL;
  v5 = 0LL;
  if ( *(_BYTE *)a1 == 5 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    v4 = a1;
    v10 = *(_BYTE *)(v9 + 100);
    if ( v10 > 6u || v10 == 6 && *(_BYTE *)(v9 + 101) >= 0x32u )
      goto LABEL_5;
  }
  else
  {
    v15 = *(_BYTE *)(a1 + 32);
    v5 = a1;
    if ( v15 > 6u || v15 == 6 && *(_BYTE *)(a1 + 33) >= 0x32u )
    {
LABEL_5:
      v11 = 1;
      if ( *(_BYTE *)(a2 + 1) == 1 )
        goto LABEL_6;
      return 0;
    }
  }
  v11 = 0;
  if ( *(_BYTE *)(a2 + 1) != 2 && *(_WORD *)(a2 + 2) == 236 )
    return 0;
LABEL_6:
  result = NdisAllocateCloneOidRequest(*(NDIS_HANDLE *)(a2 + 104), (PNDIS_OID_REQUEST)a2, 0x7172444Eu, a4);
  if ( result )
    return result;
  if ( v11 )
  {
    (*a4)->Header.Revision = 2;
    (*a4)->Header.Size = 248;
    if ( (unsigned __int8)byte_1C0085312 < 4u )
      goto LABEL_9;
    v16 = 53LL;
  }
  else
  {
    (*a4)->Header.Revision = 1;
    (*a4)->Header.Size = 236;
    if ( (unsigned __int8)byte_1C0085312 < 4u )
      goto LABEL_9;
    v16 = 54LL;
  }
  WPP_SF_qqd(v16, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a2, *a4, *(_DWORD *)(a2 + 32));
LABEL_9:
  *(_DWORD *)&(*a4)->NdisReserved[16] |= 0x8000000u;
  if ( a3 && (*(_DWORD *)(a2 + 88) & 0x400) == 0 )
  {
    if ( v4 )
    {
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
      v14 = (KSPIN_LOCK *)(v4 + 144);
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v4 + 160) = 2297569;
      *(_QWORD *)(v4 + 184) = *a4;
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
    }
    else
    {
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
      v14 = (KSPIN_LOCK *)(v5 + 96);
      *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 1856) = 2297575;
      *(_QWORD *)(v5 + 2216) = *a4;
      *(_QWORD *)(v5 + 520) = 0LL;
      *(_DWORD *)(v5 + 1856) = 0;
    }
    KeReleaseSpinLock(v14, v13);
  }
  return 0;
}
