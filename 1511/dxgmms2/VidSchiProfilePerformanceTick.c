/*
 * XREFs of VidSchiProfilePerformanceTick @ 0x1C000B390
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C00086D0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000ADA0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B8A0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C000BFF0 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000CF40 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E648 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C000EB40 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000EC2C (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000EF58 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C0020F50 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C00211F4 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSelectContext @ 0x1C0021C64 (VidSchiSelectContext.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0022F10 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0039E40 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C003A290 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C0061938 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0061A5C (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C008B054 (VidSchiWaitForCompletePreemption.c)
 * Callees:
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C00132F0 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     Template_pq @ 0x1C001D234 (Template_pq.c)
 *     Template_pqq @ 0x1C001E198 (Template_pqq.c)
 *     Template_ppqqxx @ 0x1C001FA5C (Template_ppqqxx.c)
 *     Template_ppqxqpq @ 0x1C001FB18 (Template_ppqxqpq.c)
 *     Template_pqqPR2 @ 0x1C001FDF4 (Template_pqqPR2.c)
 *     Template_pqqpx @ 0x1C001FFA0 (Template_pqqpx.c)
 *     Template_pqqqPR3XR3 @ 0x1C002013C (Template_pqqqPR3XR3.c)
 *     Template_pqqtt @ 0x1C00202B8 (Template_pqqtt.c)
 *     Template_pqqxqqtp @ 0x1C0020568 (Template_pqqxqqtp.c)
 *     Template_pqxqqqxqp @ 0x1C00207BC (Template_pqxqqqxqp.c)
 *     Template_pqxqt @ 0x1C00208AC (Template_pqxqt.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@_K$01@@QEAAPEA_KI@Z @ 0x1C008A25C (-AllocateElements@-$PagedPoolZeroedArray@_K$01@@QEAAPEA_KI@Z.c)
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
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  void *v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 Elements; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r11
  unsigned int i; // r8d
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // r9
  void *v39; // rcx
  void *v40; // rcx
  int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r9
  __int16 v47; // ax
  int v48; // edx
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r9
  bool v53; // zf
  __int64 v54; // rax
  int v55; // r8d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r9
  __int64 v60; // rcx
  int v61; // r10d
  __int64 v62; // r11
  int v63; // edx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // r9
  int v70; // ecx
  __int64 v71; // rdx
  __int64 v72; // r9
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
        v22 = *(_QWORD *)(a5 + 56);
        if ( !v22 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
          v22 = a5;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v75 = a8;
          v21 = &EventAttemptPreemption;
          goto LABEL_26;
        }
        break;
      case 2:
        if ( a5 )
        {
          v23 = *(_QWORD *)(a5 + 96);
          v24 = *(_QWORD *)(a5 + 56);
          v25 = *(_DWORD *)(v23 + 1648);
          v26 = *(unsigned __int16 *)(v23 + 4);
          if ( !v24 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
            LODWORD(v24) = a5;
        }
        else
        {
          v25 = 0;
          v26 = 0;
          LODWORD(v24) = 0;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          Template_ppqqxx(
            v25,
            v24,
            v26,
            *(_QWORD *)(a2 + 16),
            v24,
            v26,
            v25,
            *(_QWORD *)(a2 + 352),
            *(_QWORD *)(a2 + 360));
        break;
      case 4:
        v27 = *(_DWORD *)(a6 + 48);
        if ( v27 )
        {
          if ( v27 == 4 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 1824), (PKLOCK_QUEUE_HANDLE)(v8 + 40));
            v42 = *(_QWORD *)(a6 + 264);
            if ( v42 )
              v42 = *(_QWORD *)(v42 + 16);
            v43 = *(_QWORD *)(a6 + 80);
            v44 = *(_QWORD *)(v43 + 56);
            if ( !v44 || (*(_DWORD *)(v43 + 112) & 0x40) != 0 )
              v44 = *(_QWORD *)(a6 + 80);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_pqqpx(
                v42,
                v43,
                v41,
                v44,
                *(_DWORD *)(a6 + 96),
                *(_DWORD *)(a6 + 256),
                v42,
                *(_QWORD *)(a6 + 288));
            KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v8 + 40));
          }
          else if ( v27 == 5 )
          {
            v30 = *(unsigned int *)(a6 + 260);
            *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
            *(_DWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
            Elements = PagedPoolZeroedArray<unsigned __int64,2>::AllocateElements(v8 + 8, v30);
            v32 = *(unsigned int *)(a6 + 260);
            *(_QWORD *)v8 = Elements;
            *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
            *(_DWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0;
            v33 = PagedPoolZeroedArray<unsigned __int64,2>::AllocateElements(v8 + 40, v32);
            v34 = *(_QWORD *)v8;
            if ( *(_QWORD *)v8 && v33 )
            {
              for ( i = 0; i < *(_DWORD *)(a6 + 260); ++i )
              {
                *(_QWORD *)(v34 + 8LL * i) = *(_QWORD *)(*(_QWORD *)(a6 + 8LL * i + 264) + 16LL);
                v36 = *(_DWORD *)(*(_QWORD *)(a6 + 8LL * i + 264) + 40LL);
                if ( v36 == 2 || v36 == 4 )
                  *(_QWORD *)(v33 + 8LL * i) = *(_QWORD *)(a6 + 8LL * i + 520);
                else
                  *(_QWORD *)(v33 + 8LL * i) = 0LL;
              }
              v37 = *(_QWORD *)(a6 + 80);
              v38 = *(_QWORD *)(v37 + 56);
              if ( !v38 || (*(_DWORD *)(v37 + 112) & 0x40) != 0 )
                v38 = *(_QWORD *)(a6 + 80);
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_pqqqPR3XR3(
                  v37,
                  0,
                  i,
                  v38,
                  *(_DWORD *)(a6 + 96),
                  *(_DWORD *)(a6 + 256),
                  *(_DWORD *)(a6 + 260),
                  v34,
                  v33);
            }
            v39 = *(void **)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            if ( v39 != (void *)(v8 + 48) && v39 )
              ExFreePoolWithTag(v39, 0);
            v40 = *(void **)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            if ( v40 != (void *)(v8 + 16) && v40 )
              ExFreePoolWithTag(v40, 0);
          }
          else
          {
            v28 = *(_QWORD *)(a6 + 80);
            v29 = *(_QWORD *)(v28 + 56);
            if ( !v29 || (*(_DWORD *)(v28 + 112) & 0x40) != 0 )
              v29 = *(_QWORD *)(a6 + 80);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_pqqxqqtp(
                (*(_DWORD *)(a6 + 72) >> 14) & 1,
                v27,
                a3,
                v29,
                v27,
                *(_DWORD *)(a6 + 96),
                0,
                0,
                0,
                (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
                *(_QWORD *)(a6 + 264));
          }
        }
        else
        {
          v45 = *(_QWORD *)(a6 + 80);
          v46 = *(_QWORD *)(v45 + 56);
          if ( !v46 || (*(_DWORD *)(v45 + 112) & 0x40) != 0 )
            v46 = *(_QWORD *)(a6 + 80);
          v47 = Microsoft_Windows_DxgKrnlEnableBits;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          {
            Template_pqqxqqtp(
              (*(_DWORD *)(a6 + 72) >> 14) & 1,
              *(_DWORD *)(a6 + 308),
              a3,
              v46,
              0,
              *(_DWORD *)(a6 + 96),
              *(_DWORD *)(a6 + 308),
              *(_DWORD *)(a6 + 316),
              *(_DWORD *)(a6 + 324),
              (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
              *(_QWORD *)(a6 + 264));
            v47 = Microsoft_Windows_DxgKrnlEnableBits;
          }
          v48 = *(_DWORD *)(a6 + 448);
          if ( v48 && (v47 & 0x800) != 0 )
          {
            v49 = *(_QWORD *)(a6 + 80);
            v50 = *(_QWORD *)(v49 + 56);
            if ( !v50 || (*(_DWORD *)(v49 + 112) & 0x40) != 0 )
              v50 = *(_QWORD *)(a6 + 80);
            Template_pqqPR2(v49, v48, a3, v50, *(_DWORD *)(a6 + 96), v48, a6 + 456);
          }
        }
        break;
      case 5:
        v51 = *(_QWORD *)(a6 + 80);
        v52 = *(_QWORD *)(v51 + 56);
        if ( !v52 || (*(_DWORD *)(v51 + 112) & 0x40) != 0 )
          v52 = *(_QWORD *)(a6 + 80);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_pqq(v51, (unsigned int)&EventQueueSelect, a3, v52, *(_DWORD *)(a6 + 48), *(_DWORD *)(a6 + 96));
        break;
      case 7:
        v53 = *(_DWORD *)(a7 + 88) == 1;
        *(_QWORD *)v8 = 0LL;
        if ( v53 )
        {
          v54 = *(_QWORD *)(a7 + 56);
          if ( v54 )
          {
            if ( *(_DWORD *)(v54 + 48) == 8 )
              *(_QWORD *)v8 = *(_QWORD *)(v54 + 80);
          }
        }
        VidSchiAddGpuWorkEntry(*(struct _VIDSCH_CONTEXT **)(a7 + 48), 1);
        v56 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 )
        {
          v57 = *(_QWORD *)(v56 + 56);
          if ( !v57 || (*(_DWORD *)(v56 + 112) & 0x40) != 0 )
            v57 = *(_QWORD *)v8;
        }
        else
        {
          LODWORD(v57) = 0;
        }
        v58 = *(_QWORD *)(a7 + 48);
        v59 = *(_QWORD *)(v58 + 56);
        if ( !v59 || (*(_DWORD *)(v58 + 112) & 0x40) != 0 )
          v59 = *(_QWORD *)(a7 + 48);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_ppqxqpq(
            v57,
            v58,
            v55,
            v59,
            v57,
            *(_DWORD *)(a7 + 88),
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            *(_QWORD *)(a7 + 64),
            *(_DWORD *)(v58 + 448));
        break;
      case 8:
      case 10:
      case 12:
        LODWORD(v60) = 0;
        LOBYTE(v61) = 0;
        LOBYTE(v62) = 0;
        switch ( v11 )
        {
          case 8:
            v63 = 1;
            break;
          case 10:
            v63 = 2;
            break;
          case 12:
            v61 = *(_DWORD *)(a8 + 32);
            v63 = 9;
            v60 = *(_QWORD *)(a8 + 40);
            v62 = *(_QWORD *)(a8 + 64);
            break;
          default:
            v63 = *(_DWORD *)v8;
            break;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v64 = *(_QWORD *)(a7 + 48);
          v65 = *(_QWORD *)(v64 + 56);
          if ( !v65 || (*(_DWORD *)(v64 + 112) & 0x40) != 0 )
            v65 = *(_QWORD *)(a7 + 48);
          Template_pqxqqqxqp(
            v60,
            v63,
            v64,
            v65,
            *(_DWORD *)(a7 + 88),
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            v63,
            *(_DWORD *)(v64 + 448),
            v60,
            v61,
            v62);
        }
        break;
      case 9:
      case 11:
      case 13:
        if ( a7 )
        {
          v66 = *(_QWORD *)(a7 + 48);
          v67 = *(_QWORD *)(v66 + 56);
          if ( !v67 || (*(_DWORD *)(v66 + 112) & 0x40) != 0 )
            v67 = *(_QWORD *)(a7 + 48);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_pqxqt(
              a1 == 11,
              v66,
              a3,
              v67,
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
            v68 = *(_QWORD *)(a6 + 80);
            v69 = *(_QWORD *)(v68 + 56);
            if ( !v69 || (*(_DWORD *)(v68 + 112) & 0x40) != 0 )
              v69 = *(_QWORD *)(a6 + 80);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_pqqtt(v68, 0xC0000000, a3, v69, 4, *(_DWORD *)(a6 + 96), (*(_DWORD *)(a6 + 256) & 2) != 0);
            break;
          }
        }
        else if ( (_DWORD)a1 == 11 )
        {
          v70 = 1;
          goto LABEL_143;
        }
        v70 = 0;
LABEL_143:
        v71 = *(_QWORD *)(a6 + 80);
        v72 = *(_QWORD *)(v71 + 56);
        if ( !v72 || (*(_DWORD *)(v71 + 112) & 0x40) != 0 )
          v72 = *(_QWORD *)(a6 + 80);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_pqqtt(v70, v71, a3, v72, *(_DWORD *)(a6 + 48), *(_DWORD *)(a6 + 96), v70);
        break;
      case 14:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v75 = 1;
          goto LABEL_24;
        }
        break;
      case 15:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_pq(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 1);
        break;
      case 16:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v75 = 3;
          goto LABEL_24;
        }
        break;
      case 17:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v75 = 3;
          v21 = &EventExitWorkerThread;
          goto LABEL_25;
        }
        break;
      case 18:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v75 = 2;
LABEL_24:
          v21 = &EventEnterWorkerThread;
          goto LABEL_25;
        }
        break;
      case 19:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          v75 = 2;
          v21 = &EventExitWorkerThread;
LABEL_25:
          v22 = *(_QWORD *)(a2 + 16);
LABEL_26:
          Template_pq(a1, v21, a3, v22, v75);
        }
        break;
      default:
        break;
    }
  }
  if ( *(int *)(a2 + 5120) >= 1 )
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
      ++*(_DWORD *)(a3 + 2500);
      ++*(_DWORD *)(a3 + 4LL * v12 + 2500);
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a5 + 96) + 24LL) + 4LL))
                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a5 + 96) + 4LL)
                      + 8);
      ++*(_DWORD *)(v15 + 12);
      ++*(_DWORD *)(v15 + 4LL * v12 + 12);
    }
    else if ( v11 == 3 )
    {
      ++*(_DWORD *)(a3 + 2496);
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a5 + 96) + 24LL) + 4LL))
                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a5 + 96) + 4LL)
                      + 8);
      ++*(_DWORD *)(v19 + 8);
    }
  }
  if ( v11 >= 4 && *(int *)(a2 + 5120) >= 2 )
  {
    switch ( v11 )
    {
      case 4:
        ++*(_DWORD *)(a3 + 8LL * *(int *)(a6 + 48) + 2564);
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 80) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 80) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a6 + 80) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v14 + 8LL * *(int *)(a6 + 48) + 76);
        break;
      case 7:
        ++*(_DWORD *)(a3 + 16LL * *(int *)(a7 + 88) + 2636);
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v16 + 16LL * *(int *)(a7 + 88) + 148);
        break;
      case 8:
        v17 = 2 * (*(int *)(a7 + 88) + 165LL);
        ++*(_DWORD *)(a3 + 8 * v17);
        v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v18 + 16LL * *(int *)(a7 + 88) + 152);
        break;
      case 9:
      case 11:
      case 13:
        if ( a6 )
        {
          ++*(_DWORD *)(a3 + 8LL * *(int *)(a6 + 48) + 2568);
          v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 80) + 104LL) + 40LL) + 24LL)
                                      + 8LL
                                      * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 80) + 96LL) + 24LL)
                                                        + 4LL))
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a6 + 80) + 96LL) + 4LL)
                          + 8);
          ++*(_DWORD *)(v13 + 8LL * *(int *)(a6 + 48) + 80);
        }
        break;
      case 10:
        ++*(_DWORD *)(a3 + 16LL * *(int *)(a7 + 88) + 2644);
        v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a7 + 48) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v20 + 16LL * *(int *)(a7 + 88) + 156);
        break;
      case 12:
        ++*(_DWORD *)(a3 + 16LL * *(int *)(a7 + 88) + 2648);
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
