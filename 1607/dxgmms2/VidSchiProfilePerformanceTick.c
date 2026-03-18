/*
 * XREFs of VidSchiProfilePerformanceTick @ 0x1C0009E20
 * Callers:
 *     VidSchiNeedToForcePreemptNode @ 0x1C0001114 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C0006D00 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00077C0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00098B0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000A340 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000BC60 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000CD48 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000D694 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000DA44 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C0024708 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C0024A48 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSelectContext @ 0x1C00255D4 (VidSchiSelectContext.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0027554 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C00433D0 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0043780 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C0068A24 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0068B54 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00A0944 (VidSchiWaitForCompletePreemption.c)
 * Callees:
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C0001090 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     Template_pq @ 0x1C001E5A8 (Template_pq.c)
 *     Template_pqq @ 0x1C001FCE8 (Template_pqq.c)
 *     Template_ppqqxx @ 0x1C0022AA8 (Template_ppqqxx.c)
 *     Template_ppqxqpq @ 0x1C0022B64 (Template_ppqxqpq.c)
 *     Template_pqqPR2 @ 0x1C0022E40 (Template_pqqPR2.c)
 *     Template_pqqpx @ 0x1C0022FEC (Template_pqqpx.c)
 *     Template_pqqqPR3XR3 @ 0x1C0023188 (Template_pqqqPR3XR3.c)
 *     Template_pqqtt @ 0x1C0023304 (Template_pqqtt.c)
 *     Template_pqqxqqtp @ 0x1C00235B4 (Template_pqqxqqtp.c)
 *     Template_pqxqqqxqp @ 0x1C0023808 (Template_pqxqqqxqp.c)
 *     Template_pqxqt @ 0x1C00238F8 (Template_pqxqt.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@_K$01@@QEAAPEA_KI@Z @ 0x1C009FA1C (-AllocateElements@-$PagedPoolZeroedArray@_K$01@@QEAAPEA_KI@Z.c)
 */

void __fastcall VidSchiProfilePerformanceTick(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rbp
  int v11; // ebx
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  void *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 Elements; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r11
  unsigned int i; // r8d
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // r9
  void *v38; // rcx
  void *v39; // rcx
  int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r9
  __int16 v46; // ax
  int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r9
  bool v52; // zf
  __int64 v53; // rax
  int v54; // r8d
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // r9
  __int64 v59; // rcx
  int v60; // r10d
  __int64 v61; // r11
  int v62; // edx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // r9
  int v69; // ecx
  __int64 v70; // rdx
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  int v75; // [rsp+20h] [rbp-80h]
  __int64 v76; // [rsp+A0h] [rbp+0h] BYREF

  v8 = (unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL;
  v11 = a1;
  v12 = a8;
  if ( bTracingEnabled )
  {
    switch ( (int)a1 )
    {
      case 1:
        v21 = *(_QWORD *)(a5 + 56);
        if ( !v21 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
          v21 = a5;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v75 = a8;
          v20 = &EventAttemptPreemption;
          goto LABEL_28;
        }
        break;
      case 2:
        if ( a5 )
        {
          v22 = *(_QWORD *)(a5 + 96);
          v23 = *(_QWORD *)(a5 + 56);
          v24 = *(_DWORD *)(v22 + 1688);
          v25 = *(unsigned __int16 *)(v22 + 4);
          if ( !v23 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
            LODWORD(v23) = a5;
        }
        else
        {
          v24 = 0;
          v25 = 0;
          LODWORD(v23) = 0;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqqxx(
            v24,
            v23,
            v25,
            *(_QWORD *)(a2 + 16),
            v23,
            v25,
            v24,
            *(_QWORD *)(a2 + 384),
            *(_QWORD *)(a2 + 392));
        break;
      case 4:
        v26 = *(_DWORD *)(a6 + 48);
        if ( v26 )
        {
          if ( v26 == 4 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 1856), (PKLOCK_QUEUE_HANDLE)(v8 + 40));
            v41 = *(_QWORD *)(a6 + 272);
            if ( v41 )
              v41 = *(_QWORD *)(v41 + 16);
            v42 = *(_QWORD *)(a6 + 88);
            v43 = *(_QWORD *)(v42 + 56);
            if ( !v43 || (*(_DWORD *)(v42 + 112) & 0x40) != 0 )
              v43 = *(_QWORD *)(a6 + 88);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_pqqpx(
                v41,
                v42,
                v40,
                v43,
                *(_DWORD *)(a6 + 104),
                *(_DWORD *)(a6 + 264),
                v41,
                *(_QWORD *)(a6 + 296));
            KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v8 + 40));
          }
          else if ( v26 == 5 )
          {
            v29 = *(unsigned int *)(a6 + 268);
            *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
            *(_DWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
            Elements = PagedPoolZeroedArray<unsigned __int64,2>::AllocateElements(v8 + 8, v29);
            v31 = *(unsigned int *)(a6 + 268);
            *(_QWORD *)v8 = Elements;
            *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
            *(_DWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0;
            v32 = PagedPoolZeroedArray<unsigned __int64,2>::AllocateElements(v8 + 40, v31);
            v33 = *(_QWORD *)v8;
            if ( *(_QWORD *)v8 && v32 )
            {
              for ( i = 0; i < *(_DWORD *)(a6 + 268); ++i )
              {
                *(_QWORD *)(v33 + 8LL * i) = *(_QWORD *)(*(_QWORD *)(a6 + 8LL * i + 272) + 16LL);
                v35 = *(_DWORD *)(*(_QWORD *)(a6 + 8LL * i + 272) + 40LL);
                if ( v35 == 2 || v35 == 4 )
                  *(_QWORD *)(v32 + 8LL * i) = *(_QWORD *)(a6 + 8LL * i + 528);
                else
                  *(_QWORD *)(v32 + 8LL * i) = 0LL;
              }
              v36 = *(_QWORD *)(a6 + 88);
              v37 = *(_QWORD *)(v36 + 56);
              if ( !v37 || (*(_DWORD *)(v36 + 112) & 0x40) != 0 )
                v37 = *(_QWORD *)(a6 + 88);
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_pqqqPR3XR3(
                  v36,
                  0,
                  i,
                  v37,
                  *(_DWORD *)(a6 + 104),
                  *(_DWORD *)(a6 + 264),
                  *(_DWORD *)(a6 + 268),
                  v33,
                  v32);
            }
            v38 = *(void **)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            if ( v38 != (void *)(v8 + 48) && v38 )
              ExFreePoolWithTag(v38, 0);
            v39 = *(void **)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            if ( v39 != (void *)(v8 + 16) && v39 )
              ExFreePoolWithTag(v39, 0);
          }
          else
          {
            v27 = *(_QWORD *)(a6 + 88);
            v28 = *(_QWORD *)(v27 + 56);
            if ( !v28 || (*(_DWORD *)(v27 + 112) & 0x40) != 0 )
              v28 = *(_QWORD *)(a6 + 88);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_pqqxqqtp(
                (*(_DWORD *)(a6 + 72) >> 14) & 1,
                v26,
                a3,
                v28,
                v26,
                *(_DWORD *)(a6 + 104),
                0,
                0,
                0,
                (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
                *(_QWORD *)(a6 + 272));
          }
        }
        else
        {
          v44 = *(_QWORD *)(a6 + 88);
          v45 = *(_QWORD *)(v44 + 56);
          if ( !v45 || (*(_DWORD *)(v44 + 112) & 0x40) != 0 )
            v45 = *(_QWORD *)(a6 + 88);
          v46 = Microsoft_Windows_DxgKrnlEnableBits;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            Template_pqqxqqtp(
              (*(_DWORD *)(a6 + 72) >> 14) & 1,
              *(_DWORD *)(a6 + 316),
              a3,
              v45,
              0,
              *(_DWORD *)(a6 + 104),
              *(_DWORD *)(a6 + 316),
              *(_DWORD *)(a6 + 324),
              *(_DWORD *)(a6 + 332),
              (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
              *(_QWORD *)(a6 + 272));
            v46 = Microsoft_Windows_DxgKrnlEnableBits;
          }
          v47 = *(_DWORD *)(a6 + 456);
          if ( v47 && (v46 & 0x400) != 0 )
          {
            v48 = *(_QWORD *)(a6 + 88);
            v49 = *(_QWORD *)(v48 + 56);
            if ( !v49 || (*(_DWORD *)(v48 + 112) & 0x40) != 0 )
              v49 = *(_QWORD *)(a6 + 88);
            Template_pqqPR2(v48, v47, a3, v49, *(_DWORD *)(a6 + 104), v47, a6 + 464);
          }
        }
        break;
      case 5:
        v50 = *(_QWORD *)(a6 + 88);
        v51 = *(_QWORD *)(v50 + 56);
        if ( !v51 || (*(_DWORD *)(v50 + 112) & 0x40) != 0 )
          v51 = *(_QWORD *)(a6 + 88);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_pqq(v50, (unsigned int)&EventQueueSelect, a3, v51, *(_DWORD *)(a6 + 48), *(_DWORD *)(a6 + 104));
        break;
      case 7:
        v52 = *(_DWORD *)(a7 + 88) == 1;
        *(_QWORD *)v8 = 0LL;
        if ( v52 )
        {
          v53 = *(_QWORD *)(a7 + 56);
          if ( v53 )
          {
            if ( *(_DWORD *)(v53 + 48) == 8 )
              *(_QWORD *)v8 = *(_QWORD *)(v53 + 88);
          }
        }
        VidSchiAddGpuWorkEntry(*(struct _VIDSCH_CONTEXT **)(a7 + 48), 1);
        v55 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 )
        {
          v56 = *(_QWORD *)(v55 + 56);
          if ( !v56 || (*(_DWORD *)(v55 + 112) & 0x40) != 0 )
            v56 = *(_QWORD *)v8;
        }
        else
        {
          LODWORD(v56) = 0;
        }
        v57 = *(_QWORD *)(a7 + 48);
        v58 = *(_QWORD *)(v57 + 56);
        if ( !v58 || (*(_DWORD *)(v57 + 112) & 0x40) != 0 )
          v58 = *(_QWORD *)(a7 + 48);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_ppqxqpq(
            v56,
            v57,
            v54,
            v58,
            v56,
            *(_DWORD *)(a7 + 88),
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            *(_QWORD *)(a7 + 64),
            *(_DWORD *)(v57 + 448));
        break;
      case 8:
      case 10:
      case 12:
        LODWORD(v59) = 0;
        LOBYTE(v60) = 0;
        LOBYTE(v61) = 0;
        switch ( v11 )
        {
          case 8:
            v62 = 1;
            break;
          case 10:
            v62 = 2;
            break;
          case 12:
            v60 = *(_DWORD *)(a8 + 32);
            v62 = 9;
            v59 = *(_QWORD *)(a8 + 40);
            v61 = *(_QWORD *)(a8 + 64);
            break;
          default:
            v62 = *(_DWORD *)v8;
            break;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v63 = *(_QWORD *)(a7 + 48);
          v64 = *(_QWORD *)(v63 + 56);
          if ( !v64 || (*(_DWORD *)(v63 + 112) & 0x40) != 0 )
            v64 = *(_QWORD *)(a7 + 48);
          Template_pqxqqqxqp(
            v59,
            v62,
            v63,
            v64,
            *(_DWORD *)(a7 + 88),
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            v62,
            *(_DWORD *)(v63 + 448),
            v59,
            v60,
            v61);
        }
        break;
      case 9:
      case 11:
      case 13:
        if ( a7 )
        {
          v65 = *(_QWORD *)(a7 + 48);
          v66 = *(_QWORD *)(v65 + 56);
          if ( !v66 || (*(_DWORD *)(v65 + 112) & 0x40) != 0 )
            v66 = *(_QWORD *)(a7 + 48);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_pqxqt(
              a1 == 11,
              v65,
              a3,
              v66,
              *(_DWORD *)(a7 + 88),
              *(_QWORD *)(a7 + 104),
              *(_DWORD *)(a7 + 96),
              (_DWORD)a1 == 11);
          break;
        }
        if ( !a6 )
          break;
        if ( (_DWORD)a1 == 9 )
        {
          if ( *(_DWORD *)(a6 + 48) == 4 )
          {
            v67 = *(_QWORD *)(a6 + 88);
            v68 = *(_QWORD *)(v67 + 56);
            if ( !v68 || (*(_DWORD *)(v67 + 112) & 0x40) != 0 )
              v68 = *(_QWORD *)(a6 + 88);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_pqqtt(v67, 0xC0000000, a3, v68, 4, *(_DWORD *)(a6 + 104), (*(_DWORD *)(a6 + 264) & 2) != 0);
            break;
          }
        }
        else if ( (_DWORD)a1 == 11 )
        {
          v69 = 1;
          goto LABEL_145;
        }
        v69 = 0;
LABEL_145:
        v70 = *(_QWORD *)(a6 + 88);
        v71 = *(_QWORD *)(v70 + 56);
        if ( !v71 || (*(_DWORD *)(v70 + 112) & 0x40) != 0 )
          v71 = *(_QWORD *)(a6 + 88);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_pqqtt(v69, v70, a3, v71, *(_DWORD *)(a6 + 48), *(_DWORD *)(a6 + 104), v69);
        break;
      case 14:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v75 = 1;
          goto LABEL_26;
        }
        break;
      case 15:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_pq(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 1);
        break;
      case 16:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v75 = 3;
          goto LABEL_26;
        }
        break;
      case 17:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v75 = 3;
          v20 = &EventExitWorkerThread;
          goto LABEL_27;
        }
        break;
      case 18:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v75 = 2;
LABEL_26:
          v20 = &EventEnterWorkerThread;
          goto LABEL_27;
        }
        break;
      case 19:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v75 = 2;
          v20 = &EventExitWorkerThread;
LABEL_27:
          v21 = *(_QWORD *)(a2 + 16);
LABEL_28:
          Template_pq(a1, v20, a3, v21, v75);
        }
        break;
      default:
        break;
    }
  }
  if ( *(int *)(a2 + 5496) >= 1 )
  {
    if ( v11 == 1 )
    {
      if ( (int)a8 < 0 )
      {
        v12 = -(int)a8;
      }
      else if ( (int)a8 >= 16 )
      {
        v12 = 1;
      }
      ++*(_DWORD *)(a3 + 2540);
      ++*(_DWORD *)(a3 + 4LL * v12 + 2540);
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a5 + 96) + 24LL) + 4LL))
                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a5 + 96) + 4LL)
                      + 8);
      ++*(_DWORD *)(v15 + 12);
      ++*(_DWORD *)(v15 + 4LL * v12 + 12);
    }
    else if ( v11 == 3 )
    {
      ++*(_DWORD *)(a3 + 2536);
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a5 + 96) + 24LL) + 4LL))
                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a5 + 96) + 4LL)
                      + 8);
      ++*(_DWORD *)(v18 + 8);
    }
  }
  if ( v11 >= 4 && *(int *)(a2 + 5496) >= 2 && (v11 >= 7 || v11 < 5) )
  {
    switch ( v11 )
    {
      case 4:
        ++*(_DWORD *)(a3 + 8LL * *(int *)(a6 + 48) + 2604);
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 88) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 88) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a6 + 88) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v14 + 8LL * *(int *)(a6 + 48) + 76);
        break;
      case 7:
        ++*(_DWORD *)(a3 + 16LL * *(int *)(a7 + 88) + 2676);
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v16 + 16LL * *(int *)(a7 + 88) + 148);
        break;
      case 8:
        ++*(_DWORD *)(a3 + 16LL * *(int *)(a7 + 88) + 2680);
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v17 + 16LL * *(int *)(a7 + 88) + 152);
        break;
      case 9:
      case 11:
      case 13:
        if ( a6 )
        {
          ++*(_DWORD *)(a3 + 8LL * *(int *)(a6 + 48) + 2608);
          v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 88) + 104LL) + 40LL) + 24LL)
                                      + 8LL
                                      * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 88) + 96LL) + 24LL)
                                                        + 4LL))
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a6 + 88) + 96LL) + 4LL)
                          + 8);
          ++*(_DWORD *)(v13 + 8LL * *(int *)(a6 + 48) + 80);
        }
        break;
      case 10:
        ++*(_DWORD *)(a3 + 16LL * *(int *)(a7 + 88) + 2684);
        v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v19 + 16LL * *(int *)(a7 + 88) + 156);
        break;
      case 12:
        v72 = 2 * (*(int *)(a7 + 88) + 168LL);
        ++*(_DWORD *)(a3 + 8 * v72);
        v73 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 4LL)
                        + 8);
        v74 = 2 * (*(int *)(a7 + 88) + 10LL);
        ++*(_DWORD *)(v73 + 8 * v74);
        break;
      default:
        return;
    }
  }
}
