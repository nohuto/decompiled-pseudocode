/*
 * XREFs of ndisMOidRequestCompleteInternal @ 0x1C0040E6C
 * Callers:
 *     ndisMAbortRequests @ 0x1C000F50C (ndisMAbortRequests.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C003EAB0 (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C003EB80 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisCompleteLegacyRequest @ 0x1C003FB50 (ndisCompleteLegacyRequest.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C006732C (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C006880C (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C000895C (ndisQueueRequestWorkItem.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BCC4 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C003F9CC (ndisCancelOidRequestOnMiniport.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
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
  __int64 v15[6]; // [rsp+30h] [rbp-48h] BYREF

  v8 = 0LL;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(226LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, a3);
  memset(v15, 0, sizeof(v15));
  v9 = (*(_DWORD *)(a2 + 88) & 0x200000) != 0;
  v15[4] = a2;
  LODWORD(v15[5]) = a3;
  if ( a4 )
    HIDWORD(v15[5]) |= 1u;
  v15[0] = a1;
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
  ndisOidRequestComplete(v15, v10, v11, v12);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2312560;
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
      ndisCancelOidRequestOnMiniport(a1, 0LL, 1);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2312600;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v14);
  if ( v8 )
    KeSetEvent(v8, 0, 0);
  ndisDereferenceMiniport(a1, 0x49u);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0xE3u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2);
}
