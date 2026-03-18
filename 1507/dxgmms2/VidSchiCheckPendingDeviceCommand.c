/*
 * XREFs of VidSchiCheckPendingDeviceCommand @ 0x1C0002C34
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00014D0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C00019A0 (VidSchiCompleteSignalCommmand.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0002690 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C00059CC (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00138A0 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00157C8 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0017BD4 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0017F3C (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchUnreferenceDisplayingAllocationInternal @ 0x1C001D5D0 (VidSchUnreferenceDisplayingAllocationInternal.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0001028 (VidSchiCheckConditionDeviceCommand.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0003A30 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C000F300 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0011FE8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     Template_px @ 0x1C0014F14 (Template_px.c)
 */

void __fastcall VidSchiCheckPendingDeviceCommand(_QWORD *a1, __int64 a2, __int64 a3)
{
  _VIDSCH_SYNC_POINT *v3; // r13
  _VIDSCH_SYNC_POINT *v4; // r12
  _VIDSCH_SYNC_POINT *v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // r10
  __int64 v10; // r9
  _QWORD *v11; // r15
  _QWORD *v12; // rdi
  _QWORD *v13; // rbp
  _QWORD *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rbp
  __int64 v19; // r10
  __int64 *v20; // r14
  __int64 v21; // rcx
  __int64 *v22; // rax
  struct VIDMM_ALLOC *v23; // r10
  VIDMM_GLOBAL *v24; // r11
  __int64 v25; // rax
  __int64 **v26; // rcx
  _VIDSCH_SYNC_POINT *v27; // rcx
  _VIDSCH_SYNC_POINT **v28; // rax
  bool v29; // zf
  _QWORD *v30; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v3 = (_VIDSCH_SYNC_POINT *)(a1 + 130);
  v4 = (_VIDSCH_SYNC_POINT *)a1[130];
  if ( v4 == (_VIDSCH_SYNC_POINT *)(a1 + 130) )
    return;
  while ( 1 )
  {
    v6 = v4;
    v4 = *(_VIDSCH_SYNC_POINT **)v4;
    v7 = *((_QWORD *)v6 + 2);
    if ( v7 > a1[129] )
      break;
LABEL_10:
    v11 = (_QWORD *)((char *)v6 + 88);
    v12 = (_QWORD *)*((_QWORD *)v6 + 11);
    if ( v12 != (_QWORD *)((char *)v6 + 88) )
    {
      do
      {
        v13 = v12 - 27;
        v12 = (_QWORD *)*v12;
        v14 = v13 + 27;
        v15 = v13[27];
        v16 = (_QWORD *)v13[28];
        if ( *(_QWORD **)(v15 + 8) != v13 + 27 || (_QWORD *)*v16 != v14 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v13);
        *v14 = 0LL;
        v13[28] = 0LL;
      }
      while ( v12 != v11 );
    }
    v17 = (_QWORD *)((char *)v6 + 72);
    v18 = (_QWORD *)*((_QWORD *)v6 + 9);
    while ( v18 != v17 )
    {
      v19 = (__int64)(v18 - 25);
      v18 = (_QWORD *)*v18;
      v20 = (__int64 *)(v19 + 200);
      v21 = *(_QWORD *)(v19 + 200);
      v22 = *(__int64 **)(v19 + 208);
      if ( *(_QWORD *)(v21 + 8) != v19 + 200 || (__int64 *)*v22 != v20 )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v21, v19) )
      {
        VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v24, v23);
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[4] + 1904LL), &LockHandle);
        v25 = a1[4] + 1936LL;
        v26 = *(__int64 ***)(a1[4] + 1944LL);
        *v20 = v25;
        v20[1] = (__int64)v26;
        if ( *v26 != (__int64 *)v25 )
          __fastfail(3u);
        *v26 = v20;
        *(_QWORD *)(v25 + 8) = v20;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
    if ( (_QWORD *)*v17 == v17 && (_QWORD *)*v11 == v11 )
    {
      v27 = *(_VIDSCH_SYNC_POINT **)v6;
      v28 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v6 + 1);
      if ( *(_VIDSCH_SYNC_POINT **)(*(_QWORD *)v6 + 8LL) != v6 || *v28 != v6 )
        __fastfail(3u);
      v29 = bTracingEnabled == 0;
      *v28 = v27;
      *((_QWORD *)v27 + 1) = v28;
      if ( !v29 )
      {
        v30 = (_QWORD *)a1[1];
        if ( !v30 )
          v30 = a1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_px(v27, v7, a3, v30, *((_QWORD *)v6 + 2));
      }
      _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v6, v7);
    }
    if ( v4 == v3 )
      return;
  }
  a3 = *((unsigned int *)v6 + 16);
  v8 = 0;
  if ( !(_DWORD)a3 )
  {
LABEL_9:
    a1[129] = v7;
    goto LABEL_10;
  }
  v9 = *((_QWORD *)v6 + 3);
  while ( 1 )
  {
    v10 = *(_QWORD *)(v9 + 16LL * v8);
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 152) < *(_QWORD *)(v9 + 16LL * v8 + 8) )
        break;
    }
    if ( ++v8 >= (unsigned int)a3 )
      goto LABEL_9;
  }
}
