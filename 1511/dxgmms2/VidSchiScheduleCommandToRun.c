/*
 * XREFs of VidSchiScheduleCommandToRun @ 0x1C000ADA0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiProcessFlipPendingContextList @ 0x1C0002458 (VidSchiProcessFlipPendingContextList.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B8A0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiUpdateContextStatus @ 0x1C000C380 (VidSchiUpdateContextStatus.c)
 *     VidSchiIsQuantumLeft @ 0x1C000DBC0 (VidSchiIsQuantumLeft.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00127F8 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchiStartNodeYield @ 0x1C0014268 (VidSchiStartNodeYield.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0014A70 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     Template_pq @ 0x1C001D234 (Template_pq.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001EF3C (-VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     Template_pqxxxx @ 0x1C0020958 (Template_pqxxxx.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C003A290 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C003A610 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C005F394 (VidSchiSubmitPreemptionCommand.c)
 */

__int64 __fastcall VidSchiScheduleCommandToRun(struct _VIDSCH_GLOBAL *a1, _BYTE *a2)
{
  __int64 v3; // r13
  __int64 v4; // rcx
  struct _VIDSCH_GLOBAL *v5; // r10
  struct _VIDSCH_GLOBAL *v6; // rbx
  _QWORD *v7; // r10
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // r9d
  __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // r8d
  ULONGLONG v15; // rdx
  __int64 LeastSignificantBit; // rcx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 MostSignificantBit; // rbp
  int v20; // ebx
  LARGE_INTEGER v21; // rax
  int v22; // edx
  LARGE_INTEGER v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // r15
  _QWORD *v28; // r12
  _QWORD *v29; // rdi
  int v30; // ebp
  __int64 v31; // rsi
  _QWORD *v32; // rbx
  int v33; // eax
  int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // r8
  bool v38; // zf
  __int64 v39; // r8
  int v40; // edx
  int v41; // ecx
  _QWORD *v43; // [rsp+50h] [rbp-A8h] BYREF
  int v44; // [rsp+58h] [rbp-A0h]
  union _LARGE_INTEGER v45; // [rsp+60h] [rbp-98h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v47; // [rsp+70h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v49[11]; // [rsp+A0h] [rbp-58h] BYREF
  char v51; // [rsp+110h] [rbp+18h] BYREF
  char v52; // [rsp+118h] [rbp+20h] BYREF

  v3 = 0LL;
  *a2 = 0;
  v51 = 0;
  while ( (unsigned int)VidSchiCheckHwProgress(a1, &v51) || *((_DWORD *)a1 + 610) == 2 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 232, &LockHandle);
    v5 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 236);
    if ( v5 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 1888) )
    {
      do
      {
        v6 = *(struct _VIDSCH_GLOBAL **)v5;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v4, (char *)v5 - 200) )
        {
          v8 = *v7;
          v9 = (_QWORD *)v7[1];
          if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
            __fastfail(3u);
          *v9 = v8;
          *(_QWORD *)(v8 + 8) = v9;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v7 - 24), (struct VIDMM_ALLOC *)(v7 - 25));
        }
        v5 = v6;
      }
      while ( v6 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 1888) );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *((_QWORD *)a1 + 176) = MEMORY[0xFFFFF78000000320];
    if ( KeReadStateEvent((PRKEVENT)((char *)a1 + 1360)) > 0 )
      goto LABEL_69;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 228, &v47);
    if ( *((_DWORD *)a1 + 646) )
      VidSchiProcessCrossAdapterSignaledSyncObjects(a1);
    if ( *((_BYTE *)a1 + 51) )
      VidSchiProcessFlipPendingContextList(v10, *((_QWORD *)a1 + 324));
    v44 = 0;
    while ( 1 )
    {
      v12 = 0LL;
      if ( !*((_DWORD *)a1 + 225) )
        goto LABEL_52;
      if ( *((_DWORD *)a1 + 14) == 1 )
      {
        v13 = *((_QWORD *)a1 + 47);
        if ( !*(_DWORD *)(v13 + 1648) )
          goto LABEL_52;
        goto LABEL_26;
      }
      v14 = *((_DWORD *)a1 + 222);
      v15 = *((_QWORD *)a1 + 44) & *((_QWORD *)a1 + 45);
      if ( !v15 )
        v15 = *((_QWORD *)a1 + 44);
      if ( v15 >> ((unsigned __int8)v14 + 1) )
        v15 = v15 >> ((unsigned __int8)v14 + 1) << ((unsigned __int8)v14 + 1);
      if ( v15 )
      {
        LeastSignificantBit = (unsigned int)RtlFindLeastSignificantBit(v15);
        v13 = *((_QWORD *)a1 + LeastSignificantBit + 47);
        *((_DWORD *)a1 + 222) = LeastSignificantBit;
LABEL_26:
        if ( v13 )
        {
          if ( *(_DWORD *)(v13 + 1652) )
          {
            v17 = *(_QWORD *)(v13 + 24);
            v52 = 0;
            v49[0] = v13;
            DpSynchronizeExecution(
              *(_QWORD *)(v17 + 24),
              VidSchiUpdateNodeRunningTimeAtISR,
              v49,
              *(unsigned int *)(v17 + 32),
              &v52);
          }
          v18 = *(_QWORD *)(v13 + 24);
          KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( *(_BYTE *)(v13 + 1896)
            && (*(_DWORD *)(v13 + 1648) & 0xC0000000) == 0
            && (*(_DWORD *)(v13 + 1648) & (0xFFFFFFFF >> (31 - *(_BYTE *)(v18 + 160)))) != 0 )
          {
            MostSignificantBit = (unsigned int)RtlFindMostSignificantBit(*(_DWORD *)(v13 + 1648) & (0xFFFFFFFF >> (31 - *(_BYTE *)(v18 + 160))));
            v20 = ~((1 << (*(_DWORD *)(v18 + 160) + 1)) - 1);
            v21 = KeQueryPerformanceCounter(&v45);
            if ( (v20 & *(_DWORD *)(v13 + 1652)) != 0 )
            {
              v24 = *(_QWORD *)(v13 + 1880);
              if ( v24 )
              {
                v25 = v21.QuadPart - v24;
                *(_QWORD *)(v13 + 1880) = 0LL;
                v26 = *(_QWORD *)(v13 + 1888);
                if ( v25 < v26 )
                {
                  *(_QWORD *)(v13 + 1888) = v26 - v25;
                }
                else
                {
                  *(_BYTE *)(v13 + 1896) = 0;
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))Template_pq)(
                      v26,
                      &EventYieldStopNode,
                      (LARGE_INTEGER)v23.QuadPart,
                      *(_QWORD *)(v18 + 16),
                      *(unsigned __int16 *)(v13 + 4));
                }
              }
              if ( *(_BYTE *)(v13 + 1896) && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_pqxxxx(
                  v20 & *(_DWORD *)(v13 + 1652),
                  v22,
                  v23.LowPart,
                  *(_QWORD *)(v18 + 16),
                  0,
                  *(_WORD *)(v13 + 4),
                  v20 & *(_BYTE *)(v13 + 1652),
                  0,
                  0);
            }
            else if ( !*(_QWORD *)(v13 + 1880) )
            {
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                v13,
                (LARGE_INTEGER)v21.QuadPart,
                (union _LARGE_INTEGER)v45.QuadPart);
            }
          }
          else
          {
            MostSignificantBit = (unsigned int)RtlFindMostSignificantBit(*(unsigned int *)(v13 + 1648));
          }
          v43 = 0LL;
          v27 = v13 + 16LL * (unsigned int)MostSignificantBit;
          v28 = (_QWORD *)(v13 + 16 * (MostSignificantBit + 120));
          do
          {
            v29 = *(_QWORD **)(v27 + 1912);
            v30 = 0;
            v31 = *v28 - 8LL;
            v12 = (__int64)(v29 - 1);
            if ( v29 - 1 == (_QWORD *)v31 )
            {
              v43 = v29 - 1;
              *(_BYTE *)(v12 + 640) = 1;
            }
            else
            {
              do
              {
                v32 = v29 - 1;
                v29 = (_QWORD *)*v29;
                if ( (unsigned int)VidSchiIsQuantumLeft(v32, &v43) )
                  break;
                v30 = 1;
              }
              while ( v32 != (_QWORD *)v31 );
              v12 = (__int64)v43;
            }
          }
          while ( !v12 && v30 );
        }
      }
LABEL_52:
      VidSchiProfilePerformanceTick(2, (_DWORD)a1, 0, v11, v12, 0LL, 0LL, 0LL);
      if ( !v12 )
      {
        v34 = 0;
        goto LABEL_65;
      }
      v33 = VidSchiSwitchContextWithCheck((struct _VIDSCH_CONTEXT *)v12);
      v34 = v33;
      if ( v33 == 1 )
        break;
      if ( v33 != 3 )
        goto LABEL_65;
    }
    v35 = *(_QWORD *)(v12 + 96);
    v3 = *(_QWORD *)(v12 + 648);
    v36 = *(_QWORD *)(v35 + 24);
    if ( v3 )
    {
      --*(_DWORD *)(v12 + 756);
      --*(_DWORD *)(v35 + 2712);
      --*(_DWORD *)(v36 + 900);
      v37 = *(_QWORD *)(v3 + 32);
      if ( v37 == v12 + 664 )
      {
        *(_DWORD *)(v12 + 644) &= 0xFFFFFFF0;
        *(_QWORD *)(v12 + 648) = 0LL;
        VidSchiUpdateContextStatus(v12, 1LL, 14378LL);
      }
      else
      {
        v38 = v37 == 32;
        v39 = v37 - 32;
        *(_QWORD *)(v12 + 648) = v39;
        if ( v38 )
        {
          *(_DWORD *)(v12 + 644) &= 0xFFFFFFF0;
        }
        else
        {
          *(_DWORD *)(v12 + 644) ^= (((unsigned int)(*(_DWORD *)(v39 + 48) - 4) <= 1) ^ (unsigned __int8)*(_DWORD *)(v12 + 644)) & 1;
          v40 = *(_DWORD *)(v12 + 644) ^ ((unsigned __int8)*(_DWORD *)(v12 + 644) ^ (unsigned __int8)(2 * (*(_DWORD *)(v39 + 48) == 3))) & 2;
          *(_DWORD *)(v12 + 644) = v40;
          v41 = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(4 * (*(_DWORD *)(v39 + 48) == 7))) & 4;
          *(_DWORD *)(v12 + 644) = v41;
          *(_DWORD *)(v12 + 644) = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(8 * (*(_DWORD *)(v39 + 48) == 6))) & 8;
        }
      }
      VidSchiProfilePerformanceTick(5, v36, 0, v11, 0LL, v3, 0LL, 0LL);
    }
    *(_DWORD *)(v12 + 176) |= 0x400u;
LABEL_65:
    KeReleaseInStackQueuedSpinLock(&v47);
    if ( v34 != 1 )
    {
      if ( v34 == 4 )
      {
        *(_QWORD *)(*(_QWORD *)(v12 + 96) + 192LL) = 0LL;
        VidSchiSubmitPreemptionCommand(*(_QWORD *)(v12 + 96));
        continue;
      }
      if ( (v34 & 0xFFFFFFFD) != 0 )
        continue;
LABEL_69:
      if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) != 258 )
        continue;
    }
    break;
  }
  if ( *((_DWORD *)a1 + 610) )
    *a2 = 1;
  return v3;
}
