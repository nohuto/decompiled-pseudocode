/*
 * XREFs of VidSchiScheduleCommandToRun @ 0x1C0004BB0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00448C4 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0001028 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetNextRunPacket @ 0x1C0003278 (VidSchiSetNextRunPacket.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C0003888 (VidSchiSwitchContextWithCheck.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0003AA4 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C0004950 (VidSchiUpdateNodeRunningTime.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     Template_pq @ 0x1C000F810 (Template_pq.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0012C90 (-VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     Template_pqxxxx @ 0x1C0014E54 (Template_pqxxxx.c)
 *     VidSchiCompletePreemption @ 0x1C0015EC4 (VidSchiCompletePreemption.c)
 *     VidSchiIsQuantumLeft @ 0x1C0017760 (VidSchiIsQuantumLeft.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C0018954 (VidSchiProcessFlipPendingContextList.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C001958C (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiStartNodeYield @ 0x1C001A53C (VidSchiStartNodeYield.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0032900 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C0032B80 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0077200 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchiScheduleCommandToRun(struct _VIDSCH_GLOBAL *a1, _BYTE *a2)
{
  __int64 v2; // r15
  _BYTE *v3; // r12
  _QWORD **v5; // r13
  __int64 v6; // rcx
  _QWORD *v7; // r10
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // rdi
  ULONGLONG v11; // rdx
  ULONGLONG v12; // rax
  __int64 LeastSignificantBit; // rcx
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 MostSignificantBit; // rdi
  __int64 v17; // r15
  _QWORD *v18; // r12
  _QWORD *v19; // r14
  int v20; // r13d
  __int64 v21; // rsi
  unsigned int v22; // eax
  unsigned int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rdx
  int v27; // r9d
  _QWORD *v29; // rdi
  __int64 v30; // r10
  _QWORD *v31; // rax
  int v32; // r15d
  LARGE_INTEGER v33; // rax
  int v34; // edx
  LARGE_INTEGER v35; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  _QWORD *v39; // rdi
  int v40; // r9d
  int v41; // r9d
  __int64 v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v44; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER v45; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+70h] [rbp-90h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v50[20]; // [rsp+B0h] [rbp-50h] BYREF
  char v52; // [rsp+1A0h] [rbp+A0h] BYREF
  int v53; // [rsp+1A8h] [rbp+A8h]

  v2 = 0LL;
  v42 = 0LL;
  *a2 = 0;
  v3 = a2;
  v43 = 0LL;
  v53 = 0;
  if ( !(unsigned int)VidSchiCheckHwProgress(a1) )
    goto LABEL_37;
  v5 = (_QWORD **)((char *)a1 + 1936);
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 238, &LockHandle);
    v7 = *v5;
    if ( *v5 != v5 )
    {
      do
      {
        v29 = (_QWORD *)*v7;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v6, (__int64)(v7 - 25)) )
        {
          v31 = *(_QWORD **)(v30 + 8);
          if ( v29[1] != v30 || *v31 != v30 )
            __fastfail(3u);
          *v31 = v29;
          v29[1] = v31;
          VIDMM_GLOBAL::AddPendingTermination(**(VIDMM_GLOBAL ***)(v30 - 192), (struct VIDMM_ALLOC *)(v30 - 200));
        }
        v7 = v29;
      }
      while ( v29 != v5 );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *((_QWORD *)a1 + 175) = MEMORY[0xFFFFF78000000320];
    if ( KeReadStateEvent((PRKEVENT)((char *)a1 + 1352)) <= 0 )
      break;
LABEL_44:
    if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) == 258 )
      goto LABEL_36;
LABEL_45:
    if ( !(unsigned int)VidSchiCheckHwProgress(a1) )
      goto LABEL_36;
  }
  v43 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 234, &v49);
  if ( *((_DWORD *)a1 + 658) )
    VidSchiProcessCrossAdapterSignaledSyncObjects(a1);
  if ( *((_BYTE *)a1 + 51) )
    VidSchiProcessFlipPendingContextList(v8, *((_QWORD *)a1 + 330));
  v46 = 0;
  while ( 1 )
  {
    v10 = 0LL;
    if ( !*((_DWORD *)a1 + 223) )
      goto LABEL_28;
    if ( *((_DWORD *)a1 + 14) == 1 )
    {
      v14 = *((_QWORD *)a1 + 46);
      if ( !*(_DWORD *)(v14 + 1616) )
        goto LABEL_28;
      goto LABEL_18;
    }
    v11 = *((_QWORD *)a1 + 43) & *((_QWORD *)a1 + 44);
    if ( !v11 )
      v11 = *((_QWORD *)a1 + 43);
    v12 = v11 >> (*((_BYTE *)a1 + 880) + 1);
    if ( v12 )
      v11 = v12 << (*((_BYTE *)a1 + 880) + 1);
    if ( v11 )
    {
      LeastSignificantBit = (unsigned int)RtlFindLeastSignificantBit(v11);
      v14 = *((_QWORD *)a1 + LeastSignificantBit + 46);
      *((_DWORD *)a1 + 220) = LeastSignificantBit;
LABEL_18:
      if ( v14 )
      {
        if ( *(_DWORD *)(v14 + 1620) )
          VidSchiUpdateNodeRunningTime(v14, 0LL);
        v15 = *(_QWORD *)(v14 + 24);
        KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( *(_BYTE *)(v14 + 2024) && (*(_DWORD *)(v14 + 1616) & (0xFFFFFFFF >> (31 - *(_BYTE *)(v15 + 160)))) != 0 )
        {
          MostSignificantBit = (unsigned int)RtlFindMostSignificantBit(*(_DWORD *)(v14 + 1616) & (0xFFFFFFFF >> (31 - *(_BYTE *)(v15 + 160))));
          v32 = ~((1 << (*(_DWORD *)(v15 + 160) + 1)) - 1);
          v33 = KeQueryPerformanceCounter(&v45);
          if ( (v32 & *(_DWORD *)(v14 + 1620)) != 0 )
          {
            v36 = *(_QWORD *)(v14 + 2008);
            if ( v36 )
            {
              v37 = v33.QuadPart - v36;
              *(_QWORD *)(v14 + 2008) = 0LL;
              v38 = *(_QWORD *)(v14 + 2016);
              if ( v37 < v38 )
              {
                *(_QWORD *)(v14 + 2016) = v38 - v37;
              }
              else
              {
                *(_BYTE *)(v14 + 2024) = 0;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))Template_pq)(
                    v38,
                    &EventYieldStopNode,
                    (LARGE_INTEGER)v35.QuadPart,
                    *(_QWORD *)(v15 + 16),
                    *(unsigned __int16 *)(v14 + 4));
              }
            }
            if ( *(_BYTE *)(v14 + 2024) && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_pqxxxx(
                *(_DWORD *)(v14 + 1620) & v32,
                v34,
                v35.LowPart,
                *(_QWORD *)(v15 + 16),
                0,
                *(_WORD *)(v14 + 4),
                *(_BYTE *)(v14 + 1620) & v32,
                0);
          }
          else if ( !*(_QWORD *)(v14 + 2008) )
          {
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
              v14,
              (LARGE_INTEGER)v33.QuadPart,
              (union _LARGE_INTEGER)v45.QuadPart);
          }
        }
        else
        {
          MostSignificantBit = (unsigned int)RtlFindMostSignificantBit(*(unsigned int *)(v14 + 1616));
        }
        v17 = v14 + 16LL * (unsigned int)MostSignificantBit;
        v18 = (_QWORD *)(v14 + 16 * (MostSignificantBit + 128));
        v44 = 0LL;
        do
        {
          v19 = *(_QWORD **)(v17 + 2040);
          v20 = 0;
          v21 = *v18 - 8LL;
          v10 = (__int64)(v19 - 1);
          if ( v19 - 1 == (_QWORD *)v21 )
          {
            v44 = v19 - 1;
            *(_BYTE *)(v10 + 640) = 1;
          }
          else
          {
            do
            {
              v39 = v19 - 1;
              v19 = (_QWORD *)*v19;
              if ( (unsigned int)VidSchiIsQuantumLeft(v39, &v44) )
                break;
              v20 = 1;
            }
            while ( v39 != (_QWORD *)v21 );
            v10 = (__int64)v44;
          }
        }
        while ( !v10 && v20 );
        v5 = (_QWORD **)((char *)a1 + 1936);
      }
    }
LABEL_28:
    VidSchiProfilePerformanceTick(2, (_DWORD)a1, 0, v9, v10, 0LL, 0LL, 0LL);
    if ( !v10 )
    {
      v23 = 0;
LABEL_41:
      v2 = v42;
      goto LABEL_35;
    }
    v22 = VidSchiSwitchContextWithCheck((struct _VIDSCH_CONTEXT *)v10, (__int64)&v43);
    v23 = v22;
    if ( v22 == 1 )
      break;
    if ( v22 == 4 )
    {
      *(_DWORD *)(v10 + 176) |= 0x400u;
      goto LABEL_41;
    }
    if ( v22 == 2 )
    {
      v53 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 96) + 4LL);
      goto LABEL_41;
    }
    if ( v22 != 3 )
      goto LABEL_41;
  }
  v24 = *(_QWORD *)(v10 + 96);
  v2 = *(_QWORD *)(v10 + 648);
  v42 = v2;
  v25 = *(_QWORD *)(v24 + 24);
  if ( v2 )
  {
    --*(_DWORD *)(v10 + 756);
    --*(_DWORD *)(v24 + 2840);
    --*(_DWORD *)(v25 + 892);
    v26 = *(_QWORD *)(v2 + 32);
    if ( v26 == v10 + 664 )
    {
      *(_DWORD *)(v10 + 644) &= 0xFFFFFFF0;
      *(_QWORD *)(v10 + 648) = 0LL;
      VidSchiUpdateContextStatus(v10, (_QWORD *)v22, (__int64 *)0x36B7);
    }
    else
    {
      VidSchiSetNextRunPacket(v10, v26 - 32);
    }
    VidSchiProfilePerformanceTick(5, v25, 0, v27, 0LL, v2, 0LL, 0LL);
  }
  *(_DWORD *)(v10 + 176) |= 0x400u;
LABEL_35:
  KeReleaseInStackQueuedSpinLock(&v49);
  if ( v23 == 1 )
  {
LABEL_36:
    v3 = a2;
  }
  else
  {
    if ( v23 != 4 )
    {
      if ( !v23 )
        goto LABEL_44;
      if ( v23 == 2 )
      {
        memset(v50, 0, sizeof(v50));
        LODWORD(v50[2]) = 1;
        LODWORD(v50[4]) |= 0x21u;
        LODWORD(v50[6]) = v53;
        if ( v43 == -1 )
        {
          HIDWORD(v50[2]) = 1;
        }
        else
        {
          HIDWORD(v50[2]) = 2;
          v43 = -v43;
          v50[7] = &v43;
        }
        VidSchiProfilePerformanceTick(16, (_DWORD)a1, 0, v40, 0LL, 0LL, 0LL, 0LL);
        VidSchWaitForCompletionEvent(a1);
        VidSchiProfilePerformanceTick(17, (_DWORD)a1, 0, v41, 0LL, 0LL, 0LL, 0LL);
      }
      goto LABEL_45;
    }
    VidSchiSubmitPreemptionCommand(*(_QWORD *)(v10 + 96));
    VidSchiCompletePreemption(*(_QWORD *)(v10 + 96));
    v2 = VidSchiReadCommandFromContextQueue(v10, 0LL, &v52);
    v3 = a2;
    if ( !v52 )
      *a2 = 1;
  }
LABEL_37:
  if ( *((_DWORD *)a1 + 620) )
    *v3 = 1;
  return v2;
}
