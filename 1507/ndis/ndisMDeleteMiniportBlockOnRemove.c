/*
 * XREFs of ndisMDeleteMiniportBlockOnRemove @ 0x1C009AE00
 * Callers:
 *     ndisPnPIrpRemoveDevice @ 0x1C00E5488 (ndisPnPIrpRemoveDevice.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000E7B0 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisFreeRefCount @ 0x1C000ED8C (ndisFreeRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z @ 0x1C00240C8 (-ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z.c)
 *     ndisReleaseStackTrace @ 0x1C0066C84 (ndisReleaseStackTrace.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C009B16C (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00A11D4 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisMDeleteMiniportBlockOnRemove(char *P)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v17; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v18; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v19; // rax
  struct _NDIS_EVENT_LOG *v20; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v21; // rax
  _QWORD *v22; // rax
  void *v23; // rcx
  void *v24; // rcx
  _QWORD *v25; // rcx
  unsigned int v26; // esi
  ULONG_PTR StackTrace; // rcx
  KLockHolder v28; // [rsp+20h] [rbp-28h] BYREF

  v2 = (void *)*((_QWORD *)P + 565);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)P + 565) = 0LL;
  }
  v3 = (void *)*((_QWORD *)P + 505);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)P + 505) = 0LL;
  }
  v4 = *((_QWORD *)P + 518);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(v4 + 24))(*(_QWORD *)(v4 + 8));
    ExFreePoolWithTag(*((PVOID *)P + 518), 0);
    *((_QWORD *)P + 518) = 0LL;
  }
  v5 = (void *)*((_QWORD *)P + 534);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)P + 534) = 0LL;
    *((_WORD *)P + 2132) = 0;
  }
  v6 = (void *)*((_QWORD *)P + 558);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)P + 558) = 0LL;
  }
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v28, (struct KPushLockBase *)&ndisPcwMutex);
  v7 = *((_QWORD *)P + 5);
  if ( v7 )
    *(_QWORD *)(v7 + 176) = 0LL;
  KLockHolder::~KLockHolder(&v28);
  v8 = (void *)*((_QWORD *)P + 489);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)P + 489) = 0LL;
  }
  v9 = (void *)*((_QWORD *)P + 559);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)P + 559) = 0LL;
  }
  v10 = (void *)*((_QWORD *)P + 507);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)P + 507) = 0LL;
  }
  v11 = (void *)*((_QWORD *)P + 480);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)P + 480) = 0LL;
  }
  v12 = (void *)*((_QWORD *)P + 478);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)P + 478) = 0LL;
  }
  v13 = (void *)*((_QWORD *)P + 118);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)P + 118) = 0LL;
  }
  if ( *((_QWORD *)P + 685) )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    *((_QWORD *)P + 685) = 0LL;
  }
  while ( *((_QWORD *)P + 109) )
  {
    v25 = (_QWORD *)*((_QWORD *)P + 109);
    if ( v25 )
      *((_QWORD *)P + 109) = *v25;
    ExFreePoolWithTag(v25, 0);
  }
  v14 = (void *)*((_QWORD *)P + 171);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *((_QWORD *)P + 171) = 0LL;
  }
  v15 = (void *)*((_QWORD *)P + 231);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)P + 231) = 0LL;
  }
  v16 = (void *)*((_QWORD *)P + 554);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *((_QWORD *)P + 554) = 0LL;
  }
  ndisFreeRefCount(*((struct _NDIS_REFCOUNT_BLOCK **)P + 619));
  v17 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)P + 620);
  *((_QWORD *)P + 619) = 0LL;
  ndisFreeRefCount(v17);
  v18 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)P + 567);
  *((_QWORD *)P + 620) = 0LL;
  if ( v18 )
  {
    v19 = ndisRefCountHandleFromRefCountBlock(v18);
    v20 = (struct _NDIS_EVENT_LOG *)v19;
    if ( (*(_BYTE *)&v19->RefWithStack[0].Block.References[2] & 2) != 0 )
    {
      v26 = 0;
      if ( HIDWORD(v19->RefWithStack[0].Block.Next) )
      {
        do
        {
          StackTrace = ndisGetNthEntry(v20, v26)->StackTrace;
          if ( (_DWORD)StackTrace )
            ndisReleaseStackTrace(StackTrace);
          ++v26;
        }
        while ( v26 < v20->NumEntries );
      }
    }
    ExFreePoolWithTag(v20, 0);
  }
  v21 = ndisVerifierNdisDispatch;
  *((_QWORD *)P + 567) = 0LL;
  if ( v21 && *((_QWORD *)P + 628) )
  {
    ((void (*)(void))v21->NdisFreeVerifierContext)();
    *((_QWORD *)P + 628) = 0LL;
  }
  v22 = (_QWORD *)*((_QWORD *)P + 688);
  if ( v22 )
  {
    *v22 = 0LL;
    ExFreePoolWithTag(*((PVOID *)P + 688), 0);
    *((_QWORD *)P + 688) = 0LL;
  }
  Ndis::BindEngine::~BindEngine((Ndis::BindEngine *)(P + 5208));
  Ndis::BindStack::~BindStack((Ndis::BindStack *)(P + 5064));
  v23 = (void *)*((_QWORD *)P + 530);
  if ( v23 )
    ExFreePoolWithTag(v23, 0x7274534Bu);
  v24 = (void *)*((_QWORD *)P + 529);
  if ( v24 )
    ExFreePoolWithTag(v24, 0x7274534Bu);
  if ( (*((_DWORD *)P + 30) & 0x80u) != 0 )
    ExFreePoolWithTag(P, 0);
}
