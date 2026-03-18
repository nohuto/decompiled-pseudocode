/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x1C0005A50
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0006880 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0023C30 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019A0 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00019F0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C0002A74 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0004730 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0004F34 (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_V.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C000FA88 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C0011A70 (VidSchiCompletePendingFlip.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0011E8C (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0011ED8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C001D004 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEAU_VIDSCH_ENQUEUE_DEVICECOMMAND_TO_WORKER@@@Z @ 0x1C0020C60 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEAU_VIDSCH_ENQUEUE_DEVICECOMMAND_TO_WORKER@.c)
 *     Template_pqXR1qqqXR5 @ 0x1C0022D6C (Template_pqXR1qqqXR5.c)
 *     Template_pqxqqipqx @ 0x1C0023718 (Template_pqxqqipqx.c)
 *     Template_px @ 0x1C0023A60 (Template_px.c)
 *     Template_qqqq @ 0x1C0023BA4 (Template_qqqq.c)
 */

__int64 (__fastcall *__fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1))(_QWORD, _QWORD)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // r15
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax
  __int64 v4; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // r8
  bool v11; // cc
  unsigned int v12; // r12d
  __int64 v13; // rbx
  char v14; // al
  __int64 v15; // rbx
  __int64 v16; // r14
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rbx
  __int64 v25; // rcx
  _QWORD **v26; // rbx
  _QWORD *v27; // r9
  _QWORD *v28; // rbx
  _VIDSCH_SYNC_POINT *v29; // rax
  _VIDSCH_SYNC_POINT *v30; // rcx
  unsigned int v31; // r8d
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  __int128 v37; // xmm0
  __int64 v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  char v41; // bl
  __int64 *v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // r8
  int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  int v48; // eax
  _QWORD *v49; // r9
  _QWORD *v50; // r11
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _VIDSCH_SYNC_POINT *v53; // rdx
  __int64 v54; // r11
  unsigned int v55; // r10d
  unsigned int v56; // r8d
  __int64 v57; // r9
  unsigned __int64 *v58; // rax
  _QWORD *v59; // r8
  _QWORD *v60; // r10
  _QWORD *v61; // rdx
  _QWORD *v62; // rax
  __int64 v63; // r8
  _QWORD *v64; // rcx
  __int64 v65; // rax
  _QWORD *v66; // r8
  __int64 v67; // r10
  __int64 v68; // r9
  __int64 v69; // rdx
  _QWORD *v70; // rcx
  struct VIDMM_ALLOC *v71; // r10
  __int64 v72; // rcx
  __int64 **v73; // rdx
  __int64 *v74; // rax
  _VIDSCH_SYNC_POINT *v75; // rcx
  _VIDSCH_SYNC_POINT **v76; // rax
  _QWORD *v77; // r9
  _QWORD *v78; // rax
  bool v79; // [rsp+A0h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL;
  v2 = *((unsigned int *)a1 + 21);
  result = 0LL;
  v4 = *((_QWORD *)a1 + 6);
  *(_DWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)(v1 + 384) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  if ( (_DWORD)v2 == -1 || (unsigned int)v2 >= *(_DWORD *)(v4 + 40) )
    return result;
  _mm_lfence();
  v6 = *(_QWORD *)(v4 + 8 * v2 + 2968);
  *(_BYTE *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 2) = 0;
  *(_BYTE *)v1 = 0;
  *(_BYTE *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1856), (PKLOCK_QUEUE_HANDLE)(v1 + 312));
  LODWORD(v10) = *(_DWORD *)(v6 + 18824);
  if ( (_DWORD)v10 )
  {
    LODWORD(v7) = *((_DWORD *)a1 + 20) - *(_DWORD *)(v6 + 18768);
    v8 = *((_QWORD *)a1 + 7) - *(_QWORD *)(v6 + 18776);
    if ( *((_DWORD *)a1 + 20) != *(_DWORD *)(v6 + 18768) )
    {
      if ( (unsigned int)v10 <= 3 )
      {
        v9 = v8 + *(_QWORD *)(v6 + 18840);
        *(_DWORD *)(v6 + 18824) = v10 + v7;
        *(_QWORD *)(v6 + 18840) = v9;
        if ( (unsigned int)(v10 + v7) > 3 )
        {
          v8 = v9 / (unsigned int)(v10 + v7 - 1);
          v7 = v8 / 0xA;
          *(_QWORD *)(v6 + 18848) = v8 / 0xA;
          _m_prefetchw((const void *)(v6 + 18832));
          while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 18832), v8, *(_QWORD *)(v6 + 18832)) != v8 )
            ;
        }
      }
      else
      {
        if ( (unsigned int)v7 != 1LL )
          v8 /= (unsigned int)v7;
        v10 = *(_QWORD *)(v6 + 18848);
        v7 = *(_QWORD *)(v6 + 18832);
        *(_QWORD *)(v6 + 18864) = v8;
        if ( v8 > v7 + v10 || (v7 -= v10, v8 < v7) )
        {
          ++*(_QWORD *)(v6 + 18856);
          *(_DWORD *)(v6 + 18824) = 0;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(v6 + 18840) = 0LL;
    *(_DWORD *)(v6 + 18824) = 1;
  }
  if ( *(_DWORD *)(v6 + 18824) <= 3u )
    _InterlockedExchange((volatile __int32 *)(v4 + 2004), 1);
  v11 = *(_DWORD *)(v6 + 4) < 4;
  *(_DWORD *)(v6 + 18768) = *((_DWORD *)a1 + 20);
  *(_QWORD *)(v6 + 18776) = *((_QWORD *)a1 + 7);
  *(_QWORD *)(v6 + 18784) = *((_QWORD *)a1 + 8);
  *(_QWORD *)(v6 + 18792) = *((_QWORD *)a1 + 9);
  if ( v11 )
    goto LABEL_21;
  v12 = 0;
  if ( !*(_DWORD *)(v4 + 128) )
    goto LABEL_21;
  do
  {
    *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v12;
    v13 = *(_QWORD *)(v6 + 8LL * v12 + 24);
    if ( !v13 )
      goto LABEL_20;
    LODWORD(v8) = *(_DWORD *)(v13 + 48);
    LODWORD(v7) = 0;
    v14 = *(_DWORD *)(v13 + 44) - 1;
    *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0;
    *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v8;
    if ( (_DWORD)v8 == (v14 & 0x3F) )
    {
      v15 = 0LL;
    }
    else
    {
      while ( 1 )
      {
        v8 = 1224LL * (unsigned int)v8;
        v7 = v8 + v13 + 56;
        *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v7;
        if ( *(_DWORD *)(v7 + 1044) != 5 )
        {
LABEL_17:
          v15 = *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          goto LABEL_18;
        }
        v22 = *(_QWORD *)(v4 + 16);
        if ( (!*(_QWORD *)(v22 + 904) || !*(_BYTE *)(v22 + 2090)) && !*((_QWORD *)a1 + 13) )
        {
          VidSchiQueueDeferredVisibilityWorkItem((struct _VIDSCH_PRESENT_INFO *)v6, (struct _VIDSCH_GLOBAL *)v4);
          v7 = *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
        }
        if ( (unsigned int)VidSchiIsExpectedVSyncCookie(
                             (struct _VIDSCH_GLOBAL *)v4,
                             (struct VIDSCH_FLIP_QUEUE_ENTRY *)v7,
                             a1) )
          break;
        LODWORD(v8) = ((unsigned __int8)*(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) - 1) & 0x3F;
        v35 = ((unsigned __int8)*(_DWORD *)(v13 + 44) - 1) & 0x3F;
        *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v8;
        if ( (_DWORD)v8 == v35 )
          goto LABEL_17;
      }
      v15 = *(_QWORD *)(**(_QWORD **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 104LL);
      *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v15;
      memset((void *)(v1 + 64), 0, 0x30uLL);
      v23 = *((_DWORD *)a1 + 4) == 10;
      *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0x18);
      *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = *(_DWORD *)(v6 + 18768);
      *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_QWORD *)(v6 + 18776);
      *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)(v6 + 18784);
      *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v4;
      *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v15;
      *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v2;
      *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = v12;
      if ( v23
        && (*((_DWORD *)a1 + 4 * *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 28) & 1) != 0 )
      {
        v36 = *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
        *(_BYTE *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
        *(_DWORD *)(v36 + 1044) = 14;
        VidSchiProcessVsyncCompletedFlipEntry(
          (struct _VIDSCH_VSYNC_COMPLETED_ENTRY_INFO *)(v1 + 64),
          (unsigned __int64 *)(v1 + 336),
          (unsigned int *)(v1 + 32),
          (unsigned int *)(v1 + 4),
          (bool *)((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL),
          1);
        memset((void *)(v1 + 144), 0, 0x58uLL);
        v37 = *(_OWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        v38 = *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        v39 = *(_OWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
        *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 6;
        *(_OWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = v37;
        *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v12;
        v40 = *(_OWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
        *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *((_QWORD *)a1 + 2 * v38 + 13);
        *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94) = *((_DWORD *)a1 + 23);
        *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *((_DWORD *)a1 + 22);
        *(_OWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = v39;
        *(_OWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = v40;
        VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc((struct _VIDSCH_ENQUEUE_DEVICECOMMAND_TO_WORKER *)(v1 + 144));
        goto LABEL_20;
      }
      VidSchiProcessVsyncCompletedFlipEntry(
        (struct _VIDSCH_VSYNC_COMPLETED_ENTRY_INFO *)(v1 + 64),
        (unsigned __int64 *)(v1 + 336),
        (unsigned int *)(v1 + 32),
        (unsigned int *)(v1 + 4),
        (bool *)((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL),
        0);
      *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 4);
    }
LABEL_18:
    if ( *(_DWORD *)(v6 + 2264) && *(_BYTE *)(v6 + 46916) )
      VidSchiExecuteNextFlipQueueEntry((struct _VIDSCH_GLOBAL *)v4, (bool *)(v1 + 2), v2, v12);
    if ( !v15 )
      goto LABEL_20;
    v24 = *(_QWORD *)(v15 + 32);
    *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = *(_QWORD *)(*(_QWORD *)(v24 + 8) + 408LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v24 + 1888), (PKLOCK_QUEUE_HANDLE)(v1 + 240));
    v26 = (_QWORD **)(v24 + 1920);
    v27 = *v26;
    if ( *v26 != v26 )
    {
      do
      {
        *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v27;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v25, (__int64)(v27 - 27)) )
        {
          v51 = *v49;
          v52 = (_QWORD *)v49[1];
          if ( *(_QWORD **)(*v49 + 8LL) != v49 || (_QWORD *)*v52 != v49 )
            __fastfail(3u);
          *v52 = v51;
          *(_QWORD *)(v51 + 8) = v52;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v49 - 26), (struct VIDMM_ALLOC *)(v49 - 27));
          v50 = *(_QWORD **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        }
        v27 = v50;
      }
      while ( v50 != v26 );
    }
    KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v1 + 240));
    v28 = *(_QWORD **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v29 = (_VIDSCH_SYNC_POINT *)(v28 + 145);
    v30 = (_VIDSCH_SYNC_POINT *)v28[145];
    if ( v30 == (_VIDSCH_SYNC_POINT *)(v28 + 145) )
      goto LABEL_51;
    while ( 1 )
    {
      v53 = v30;
      *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v30;
      v30 = *(_VIDSCH_SYNC_POINT **)v30;
      *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v30;
      v54 = *((_QWORD *)v53 + 2);
      if ( v54 > v28[144] )
        break;
LABEL_113:
      v59 = (_QWORD *)*((_QWORD *)v53 + 11);
      v60 = (_QWORD *)((char *)v53 + 88);
      *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = (char *)v53 + 88;
      if ( v59 != (_QWORD *)((char *)v53 + 88) )
      {
        do
        {
          v61 = v59 - 29;
          v62 = v59;
          *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *v59;
          v63 = *v59;
          v64 = (_QWORD *)v61[30];
          *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v61;
          if ( *(_QWORD **)(v63 + 8) != v61 + 29 || (_QWORD *)*v64 != v62 )
            __fastfail(3u);
          *v64 = v63;
          *(_QWORD *)(v63 + 8) = v64;
          VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v61);
          v65 = *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          v59 = *(_QWORD **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          v60 = *(_QWORD **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          *(_QWORD *)(v65 + 232) = 0LL;
          *(_QWORD *)(v65 + 240) = 0LL;
        }
        while ( v59 != v60 );
        v30 = *(_VIDSCH_SYNC_POINT **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v29 = (_VIDSCH_SYNC_POINT *)(v28 + 145);
        v53 = *(_VIDSCH_SYNC_POINT **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      }
      v9 = *((_QWORD *)v53 + 9);
      v66 = (_QWORD *)((char *)v53 + 72);
      *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = (char *)v53 + 72;
      if ( (_VIDSCH_SYNC_POINT *)v9 != (_VIDSCH_SYNC_POINT *)((char *)v53 + 72) )
      {
        do
        {
          v67 = v9 - 216;
          v68 = *(_QWORD *)v9;
          *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v67;
          v69 = *(_QWORD *)(v67 + 216);
          v70 = *(_QWORD **)(v67 + 224);
          *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v68;
          if ( *(_QWORD *)(v69 + 8) != v67 + 216 || *v70 != v67 + 216 )
            __fastfail(3u);
          *v70 = v69;
          *(_QWORD *)(v69 + 8) = v70;
          if ( (unsigned int)VidSchiCheckConditionDeviceCommand((__int64)v70, v67) )
          {
            VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(
              *(VIDMM_GLOBAL **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78),
              v71);
          }
          else
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v28[4] + 1888LL), (PKLOCK_QUEUE_HANDLE)(v1 + 264));
            v72 = v28[4] + 1920LL;
            v73 = *(__int64 ***)(v28[4] + 1928LL);
            if ( *v73 != (__int64 *)v72 )
              __fastfail(3u);
            v74 = (__int64 *)(*(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) + 216LL);
            *v74 = v72;
            v74[1] = (__int64)v73;
            *v73 = v74;
            *(_QWORD *)(v72 + 8) = v74;
            KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 264));
          }
          v66 = *(_QWORD **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          v9 = *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
        }
        while ( (_QWORD *)v9 != v66 );
        v30 = *(_VIDSCH_SYNC_POINT **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v29 = (_VIDSCH_SYNC_POINT *)(v28 + 145);
        v53 = *(_VIDSCH_SYNC_POINT **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
        v60 = *(_QWORD **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      }
      if ( (_QWORD *)*v66 == v66 && (_QWORD *)*v60 == v60 )
      {
        v75 = *(_VIDSCH_SYNC_POINT **)v53;
        v76 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v53 + 1);
        if ( *(_VIDSCH_SYNC_POINT **)(*(_QWORD *)v53 + 8LL) != v53 || *v76 != v53 )
          __fastfail(3u);
        v23 = bTracingEnabled == 0;
        *v76 = v75;
        *((_QWORD *)v75 + 1) = v76;
        if ( !v23 )
        {
          v77 = (_QWORD *)v28[1];
          if ( !v77 )
            v77 = v28;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            Template_px(v75, v53, v66, v77, *((_QWORD *)v53 + 2));
            v53 = *(_VIDSCH_SYNC_POINT **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          }
        }
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v53, (unsigned int)v53);
        v30 = *(_VIDSCH_SYNC_POINT **)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v29 = (_VIDSCH_SYNC_POINT *)(v28 + 145);
      }
      if ( v30 == v29 )
        goto LABEL_51;
    }
    v55 = *((_DWORD *)v53 + 16);
    v56 = 0;
    if ( !v55 )
    {
LABEL_112:
      v28[144] = v54;
      goto LABEL_113;
    }
    v57 = *((_QWORD *)v53 + 3);
    *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v57;
    while ( 1 )
    {
      v58 = (unsigned __int64 *)(v57 + 16LL * v56);
      v9 = *v58;
      if ( *v58 )
      {
        if ( *(_QWORD *)(v9 + 152) < v58[1] )
          break;
      }
      v57 = *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( ++v56 >= v55 )
      {
        v29 = (_VIDSCH_SYNC_POINT *)(v28 + 145);
        goto LABEL_112;
      }
    }
LABEL_51:
    v31 = -*(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28[5] + 24LL) + 8LL * *(unsigned int *)(v28[4] + 4LL)) + 8 * v2 + 520);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v4 + 8 * v2 + 5504) + 8LL), v31);
    v8 = *(_QWORD *)(v4 + 8 * v2 + 5504);
    *(_DWORD *)v8 += *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    LODWORD(v10) = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), v31);
    *(_DWORD *)v7 += *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_20:
    ++v12;
  }
  while ( v12 < *(_DWORD *)(v4 + 128) );
LABEL_21:
  if ( bTracingEnabled )
  {
    v41 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_pqxqqipqx(
        v8,
        v7,
        v10,
        *(_QWORD *)(v4 + 16),
        *((_DWORD *)a1 + 22),
        *((_QWORD *)a1 + 13),
        *((_DWORD *)a1 + 21),
        *((_DWORD *)a1 + 20),
        *((_QWORD *)a1 + 7),
        0,
        0,
        *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150));
      v41 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    memset((void *)(v1 + 400), 0, 0x40uLL);
    v45 = *((_DWORD *)a1 + 4);
    switch ( v45 )
    {
      case 10:
        if ( *(_DWORD *)(v4 + 128) )
        {
          v43 = (_QWORD *)(v1 + 400);
          v44 = *(unsigned int *)(v4 + 128);
          v42 = (__int64 *)((char *)a1 + 104);
          do
          {
            v46 = *v42;
            v42 += 2;
            *v43++ = v46;
            --v44;
          }
          while ( v44 );
        }
        break;
      case 3:
        *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = *((_QWORD *)a1 + 13);
        break;
      case 7:
        LODWORD(v43) = -1;
        LODWORD(v44) = (unsigned __int8)*((_DWORD *)a1 + 24);
        v23 = !_BitScanForward((unsigned int *)&v47, v44);
        *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v47;
        if ( !v23 )
          LODWORD(v43) = (unsigned __int8)v47;
        for ( LOBYTE(v9) = 0; (_DWORD)v44; LOBYTE(v9) = v9 + 1 )
        {
          LODWORD(v42) = (char)v43;
          *(_QWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190 + 8LL * (char)v43) = *((_QWORD *)a1 + 5 * (char)v9 + 13);
          v48 = 1 << (char)v43;
          LODWORD(v43) = -1;
          LODWORD(v44) = ~v48 & v44;
          v23 = !_BitScanForward((unsigned int *)&v48, v44);
          *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74) = v48;
          if ( !v23 )
            LODWORD(v43) = (unsigned __int8)v48;
        }
        break;
    }
    if ( (v41 & 0x40) != 0 )
      Template_pqXR1qqqXR5(
        (_DWORD)v43,
        (_DWORD)v42,
        v44,
        *(_QWORD *)(v4 + 16),
        *(_DWORD *)(v4 + 128),
        v1 + 400,
        *((_DWORD *)a1 + 21),
        *((_DWORD *)a1 + 20),
        *(_DWORD *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
        v1 + 336);
  }
  if ( *(_BYTE *)v1 || *(_BYTE *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
    goto LABEL_28;
  if ( g_bVSyncEnabledForLogging || *(_BYTE *)(v4 + 45) != 1 || !*(_DWORD *)(v4 + 2016) )
    goto LABEL_29;
  if ( _InterlockedExchange((volatile __int32 *)(v4 + 2004), 0)
    || *(_DWORD *)(*(_QWORD *)(v4 + 16) + 2160LL)
    || *(_DWORD *)(v4 + 952)
    || *(_DWORD *)(v4 + 968) )
  {
LABEL_28:
    *(_DWORD *)(v4 + 2008) = 0;
    *(_DWORD *)(v4 + 2012) = -1;
    goto LABEL_29;
  }
  if ( *(_DWORD *)(v4 + 2012) == -1 )
    *(_DWORD *)(v4 + 2012) = v2;
  if ( *(_DWORD *)(v4 + 2012) == (_DWORD)v2 )
  {
    v32 = *(_DWORD *)(v4 + 2008);
    if ( v32 != -1 )
    {
      v33 = *(_DWORD *)(v4 + 2016);
      v34 = v32 + 1;
      *(_DWORD *)(v4 + 2008) = v34;
      if ( v34 == v33 )
      {
        if ( !_InterlockedExchange((volatile __int32 *)(v4 + 2000), 1) )
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 1968), CriticalWorkQueue);
      }
      else if ( v34 > v33 )
      {
        *(_DWORD *)(v4 + 2008) = v33 + 1;
      }
    }
  }
LABEL_29:
  *(_QWORD *)(v6 + 18808) = *((_QWORD *)a1 + 13);
  *(_DWORD *)(v6 + 18816) = *((_DWORD *)a1 + 23);
  v16 = *(_QWORD *)(v4 + 16);
  v17 = *(_DWORD *)(v6 + 18768);
  v18 = *(_QWORD *)(v16 + 2128);
  if ( (unsigned int)v2 < *(_DWORD *)(v18 + 80) )
  {
    v19 = *(_QWORD *)(v18 + 112) + 1016LL * (unsigned int)v2;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v19 + 856), (PKLOCK_QUEUE_HANDLE)(v1 + 288));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qqqq(
        *(unsigned __int8 *)(v19 + 848),
        v20,
        v21,
        *(_DWORD *)(v19 + 840),
        v17,
        *(_BYTE *)(v19 + 848),
        *(_DWORD *)(v16 + 2160));
    KePulseEvent((PRKEVENT)(v19 + 808), 0, 0);
    if ( *(_QWORD *)(v19 + 832) )
    {
      *(_DWORD *)(v19 + 844) = v17;
      if ( *(_DWORD *)(v19 + 840) <= v17 )
      {
        if ( *(_BYTE *)(v19 + 848) )
        {
          *(_BYTE *)(v19 + 848) = 0;
          if ( *(_QWORD *)(v16 + 2136) )
          {
            if ( _InterlockedDecrement((volatile signed __int32 *)(v16 + 2160)) < 0 )
            {
              v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
              v78[3] = 275LL;
              v78[4] = 28LL;
              v78[5] = v16;
              v78[6] = *(unsigned int *)(v16 + 2160);
              v78[7] = 0LL;
              WdLogEvent5_WdCriticalError(v78);
            }
          }
        }
        KeSetEvent(*(PRKEVENT *)(v19 + 832), 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 288));
  }
  if ( *(_BYTE *)(((unsigned __int64)&v79 & 0xFFFFFFFFFFFFFFC0uLL) + 2) )
    VidSchiCompletePendingFlip(v4, (unsigned int)v2, 9LL, v9);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)(v1 + 312));
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v4 + 2880);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))result(*(_QWORD *)(v4 + 2896), (unsigned int)v2);
  return result;
}
