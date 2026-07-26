/*
 * XREFs of ndisMDeleteMiniportBlockOnRemove @ 0x1C00AD04C
 * Callers:
 *     ndisPnPIrpRemoveDevice @ 0x1C00E6DF8 (ndisPnPIrpRemoveDevice.c)
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0010AE0 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisReleaseStackTrace @ 0x1C0010B78 (ndisReleaseStackTrace.c)
 *     NdisFreeRefCount @ 0x1C001BCE0 (NdisFreeRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ?ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z @ 0x1C0027B74 (-ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00A3564 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C00A4738 (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z @ 0x1C00D833C (-ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z.c)
 *     PdcTaskClientUnregister @ 0x1C00E4BA4 (PdcTaskClientUnregister.c)
 */

void __fastcall ndisMDeleteMiniportBlockOnRemove(char *P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v18; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v19; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v20; // rax
  struct _NDIS_EVENT_LOG *v21; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v22; // rax
  _QWORD *v23; // rax
  void *v24; // rcx
  void *v25; // rcx
  _QWORD *v26; // rcx
  unsigned int v27; // esi
  ULONG_PTR StackTrace; // rcx
  KLockThisExclusive v29; // [rsp+20h] [rbp-28h] BYREF

  v2 = (void *)*((_QWORD *)P + 565);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)P + 565) = 0LL;
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0x98u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)P);
  v3 = (void *)*((_QWORD *)P + 709);
  if ( v3 )
  {
    PdcTaskClientUnregister(v3);
    *((_QWORD *)P + 709) = 0LL;
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0x99u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)P);
  v4 = (void *)*((_QWORD *)P + 505);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)P + 505) = 0LL;
  }
  v5 = *((_QWORD *)P + 518);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(v5 + 24))(*(_QWORD *)(v5 + 8));
    ExFreePoolWithTag(*((PVOID *)P + 518), 0);
    *((_QWORD *)P + 518) = 0LL;
  }
  v6 = (void *)*((_QWORD *)P + 534);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)P + 534) = 0LL;
    *((_WORD *)P + 2132) = 0;
  }
  v7 = (void *)*((_QWORD *)P + 558);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)P + 558) = 0LL;
  }
  KLockThisExclusive::KLockThisExclusive(&v29, (struct KPushLockBase *)&ndisPcwMutex);
  v8 = *((_QWORD *)P + 5);
  if ( v8 )
  {
    --*(_DWORD *)(v8 + 168);
    *(_QWORD *)(*((_QWORD *)P + 5) + 176LL) = 0LL;
    ndisPcwMaybeDeleteDataBlock(*((struct _NDIS_PCW_DATA_BLOCK **)P + 5));
  }
  KLockHolder::~KLockHolder(&v29);
  v9 = (void *)*((_QWORD *)P + 489);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)P + 489) = 0LL;
  }
  v10 = (void *)*((_QWORD *)P + 559);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)P + 559) = 0LL;
  }
  v11 = (void *)*((_QWORD *)P + 507);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)P + 507) = 0LL;
  }
  v12 = (void *)*((_QWORD *)P + 480);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)P + 480) = 0LL;
  }
  v13 = (void *)*((_QWORD *)P + 478);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)P + 478) = 0LL;
  }
  v14 = (void *)*((_QWORD *)P + 118);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *((_QWORD *)P + 118) = 0LL;
  }
  if ( *((_QWORD *)P + 683) )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    *((_QWORD *)P + 683) = 0LL;
  }
  while ( *((_QWORD *)P + 109) )
  {
    v26 = (_QWORD *)*((_QWORD *)P + 109);
    if ( v26 )
      *((_QWORD *)P + 109) = *v26;
    ExFreePoolWithTag(v26, 0);
  }
  v15 = (void *)*((_QWORD *)P + 171);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)P + 171) = 0LL;
  }
  v16 = (void *)*((_QWORD *)P + 231);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *((_QWORD *)P + 231) = 0LL;
  }
  v17 = (void *)*((_QWORD *)P + 554);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    *((_QWORD *)P + 554) = 0LL;
  }
  NdisFreeRefCount(*((struct _NDIS_REFCOUNT_BLOCK **)P + 619));
  v18 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)P + 620);
  *((_QWORD *)P + 619) = 0LL;
  NdisFreeRefCount(v18);
  v19 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)P + 567);
  *((_QWORD *)P + 620) = 0LL;
  if ( v19 )
  {
    v20 = ndisRefCountHandleFromRefCountBlock(v19);
    v21 = (struct _NDIS_EVENT_LOG *)v20;
    if ( (*(_BYTE *)&v20->RefWithStack[0].Block.References[2] & 2) != 0 )
    {
      v27 = 0;
      if ( HIDWORD(v20->RefWithStack[0].Block.Next) )
      {
        do
        {
          StackTrace = ndisGetNthEntry(v21, v27)->StackTrace;
          if ( (_DWORD)StackTrace )
            ndisReleaseStackTrace(StackTrace);
          ++v27;
        }
        while ( v27 < v21->NumEntries );
      }
    }
    ExFreePoolWithTag(v21, 0);
  }
  v22 = ndisVerifierNdisDispatch;
  *((_QWORD *)P + 567) = 0LL;
  if ( v22 && *((_QWORD *)P + 628) )
  {
    ((void (*)(void))v22->NdisFreeVerifierContext)();
    *((_QWORD *)P + 628) = 0LL;
  }
  v23 = (_QWORD *)*((_QWORD *)P + 708);
  if ( v23 )
  {
    *v23 = 0LL;
    ExFreePoolWithTag(*((PVOID *)P + 708), 0);
    *((_QWORD *)P + 708) = 0LL;
  }
  Ndis::BindEngine::~BindEngine((Ndis::BindEngine *)(P + 5208));
  Ndis::BindStack::~BindStack((Ndis::BindStack *)(P + 5064));
  v24 = (void *)*((_QWORD *)P + 530);
  if ( v24 )
    ExFreePoolWithTag(v24, 0x7274534Bu);
  v25 = (void *)*((_QWORD *)P + 529);
  if ( v25 )
    ExFreePoolWithTag(v25, 0x7274534Bu);
  if ( (*((_DWORD *)P + 30) & 0x80u) != 0 )
    ExFreePoolWithTag(P, 0);
}
