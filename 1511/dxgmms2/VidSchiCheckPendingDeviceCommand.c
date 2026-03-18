/*
 * XREFs of VidSchiCheckPendingDeviceCommand @ 0x1C000E980
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C0001FB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0002288 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C8B0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C000E84C (VidSchiCompleteSignalCommmand.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000EF58 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchUnreferenceDisplayingAllocationInternal @ 0x1C0022BF0 (VidSchUnreferenceDisplayingAllocationInternal.c)
 * Callees:
 *     VidSchiProcessPrimariesTerminationList @ 0x1C000EA40 (VidSchiProcessPrimariesTerminationList.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0011664 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00127F8 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00128D0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0014708 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     Template_px @ 0x1C0020A14 (Template_px.c)
 */

void __fastcall VidSchiCheckPendingDeviceCommand(_QWORD *a1)
{
  __int64 v2; // r8
  _VIDSCH_SYNC_POINT *v3; // r12
  _VIDSCH_SYNC_POINT *v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // r9
  _QWORD *v9; // r15
  _QWORD *v10; // rdi
  _QWORD *v11; // rbp
  _QWORD *v12; // r14
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rbp
  _QWORD *v17; // r10
  __int64 *v18; // r14
  __int64 v19; // rcx
  __int64 **v20; // rax
  struct VIDMM_ALLOC *v21; // r10
  __int64 v22; // rax
  __int64 **v23; // rcx
  _VIDSCH_SYNC_POINT *v24; // rcx
  _VIDSCH_SYNC_POINT **v25; // rax
  bool v26; // zf
  _QWORD *v27; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  VIDMM_GLOBAL *v29; // [rsp+80h] [rbp+8h]

  v29 = *(VIDMM_GLOBAL **)(*(_QWORD *)(a1[4] + 8LL) + 432LL);
  VidSchiProcessPrimariesTerminationList();
  v3 = (_VIDSCH_SYNC_POINT *)a1[146];
  while ( v3 != (_VIDSCH_SYNC_POINT *)(a1 + 146) )
  {
    v4 = v3;
    v3 = *(_VIDSCH_SYNC_POINT **)v3;
    v5 = *((_QWORD *)v4 + 2);
    if ( v5 > a1[145] )
    {
      v2 = *((unsigned int *)v4 + 16);
      v6 = 0;
      if ( (_DWORD)v2 )
      {
        v7 = *((_QWORD *)v4 + 3);
        do
        {
          v8 = *(_QWORD *)(v7 + 16LL * v6);
          if ( v8 )
          {
            if ( *(_QWORD *)(v8 + 152) < *(_QWORD *)(v7 + 16LL * v6 + 8) )
              return;
          }
        }
        while ( ++v6 < (unsigned int)v2 );
      }
      a1[145] = v5;
    }
    v9 = (_QWORD *)((char *)v4 + 88);
    v10 = (_QWORD *)*((_QWORD *)v4 + 11);
    while ( v10 != v9 )
    {
      v11 = v10 - 27;
      v10 = (_QWORD *)*v10;
      v12 = v11 + 27;
      v13 = v11[27];
      v14 = (_QWORD *)v11[28];
      if ( *(_QWORD **)(v13 + 8) != v11 + 27 || (_QWORD *)*v14 != v12 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v11);
      *v12 = 0LL;
      v11[28] = 0LL;
    }
    v15 = (_QWORD *)((char *)v4 + 72);
    v16 = (_QWORD *)*((_QWORD *)v4 + 9);
    while ( v16 != v15 )
    {
      v17 = v16 - 25;
      v16 = (_QWORD *)*v16;
      v18 = v17 + 25;
      v19 = v17[25];
      v20 = (__int64 **)v17[26];
      if ( *(_QWORD **)(v19 + 8) != v17 + 25 || *v20 != v18 )
        __fastfail(3u);
      *v20 = (__int64 *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v19, v17) )
      {
        VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v29, v21);
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[4] + 1856LL), &LockHandle);
        v22 = a1[4] + 1888LL;
        v23 = *(__int64 ***)(a1[4] + 1896LL);
        *v18 = v22;
        v18[1] = (__int64)v23;
        if ( *v23 != (__int64 *)v22 )
          __fastfail(3u);
        *v23 = v18;
        *(_QWORD *)(v22 + 8) = v18;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
    if ( (_QWORD *)*v15 == v15 && (_QWORD *)*v9 == v9 )
    {
      v24 = *(_VIDSCH_SYNC_POINT **)v4;
      v25 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v4 + 1);
      if ( *(_VIDSCH_SYNC_POINT **)(*(_QWORD *)v4 + 8LL) != v4 || *v25 != v4 )
        __fastfail(3u);
      v26 = bTracingEnabled == 0;
      *v25 = v24;
      *((_QWORD *)v24 + 1) = v25;
      if ( !v26 )
      {
        v27 = (_QWORD *)a1[1];
        if ( !v27 )
          v27 = a1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_px(v24, v5, v2, v27, *((_QWORD *)v4 + 2));
      }
      _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v4, v5);
    }
  }
}
