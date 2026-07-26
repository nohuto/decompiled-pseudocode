/*
 * XREFs of ndisMOidRequestCompleteInternal @ 0x1C0025A0C
 * Callers:
 *     ndisMAbortRequests @ 0x1C001366C (ndisMAbortRequests.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00402A8 (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0040378 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisCompleteLegacyRequest @ 0x1C004124C (ndisCompleteLegacyRequest.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C00663FC (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C00678CC (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C000A40C (ndisQueueRequestWorkItem.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024BB8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00410C8 (ndisCancelOidRequestOnMiniport.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

void __fastcall ndisMOidRequestCompleteInternal(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  struct _KEVENT *v8; // rbp
  bool v9; // si
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  KIRQL v13; // al
  KIRQL v14; // dl
  __int64 v15; // r8
  _QWORD v16[6]; // [rsp+30h] [rbp-48h] BYREF

  v8 = 0LL;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqd(228LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a2, a3);
  memset(v16, 0, sizeof(v16));
  v9 = (*(_DWORD *)(a2 + 88) & 0x200000) != 0;
  v16[4] = a2;
  LODWORD(v16[5]) = a3;
  if ( a4 )
    HIDWORD(v16[5]) |= 1u;
  v16[0] = a1;
  ndisReferenceMiniportNoCheck(a1, 0x49u);
  if ( a4 )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_DWORD *)(a1 + 4484) &= ~1u;
    *(_QWORD *)(a1 + 2224) = 0LL;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v13);
  }
  ndisOidRequestComplete((__int64)v16, v10, v11, v12);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2312660;
  if ( v9 )
  {
    if ( (*(_DWORD *)(a1 + 124) & 0x20000) != 0 && !*(_DWORD *)(a1 + 4312) )
    {
      v8 = *(struct _KEVENT **)(a1 + 4320);
      *(_QWORD *)(a1 + 4320) = 0LL;
    }
  }
  else if ( *(_QWORD *)(a1 + 2200) == a1 + 2200 )
  {
    if ( (*(_DWORD *)(a1 + 124) & 0x20000) != 0 )
    {
      v8 = *(struct _KEVENT **)(a1 + 1616);
      *(_QWORD *)(a1 + 1616) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v14);
    if ( (unsigned int)ndisQueueRequestWorkItem((_LIST_ENTRY *)a1, 0LL, 0x11u) != 259 )
    {
      LOBYTE(v15) = 1;
      ndisCancelOidRequestOnMiniport(a1, 0LL, v15);
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2312700;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v14);
  if ( v8 )
    KeSetEvent(v8, 0, 0);
  ndisDereferenceMiniport(a1, 0x49u);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(229LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a2);
}
