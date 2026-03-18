/*
 * XREFs of VidSchiScheduleCommandToRun @ 0x1C00098B0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019A0 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000A340 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     VidSchiIsQuantumLeft @ 0x1C000C920 (VidSchiIsQuantumLeft.c)
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0010F04 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C00116F0 (VidSchiProcessFlipPendingContextList.c)
 *     VidSchiStartNodeYield @ 0x1C0011BA8 (VidSchiStartNodeYield.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C001D004 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0021790 (-VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     Template_pqxxxx @ 0x1C00239A4 (Template_pqxxxx.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0040C30 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C00433D0 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C0043C50 (VidSchiCheckHwProgress.c)
 */

__int64 __fastcall VidSchiScheduleCommandToRun(struct _VIDSCH_GLOBAL *a1, _BYTE *a2)
{
  int v2; // r12d
  __int64 v4; // r13
  __int64 v5; // rcx
  struct _VIDSCH_GLOBAL *v6; // r9
  __int64 v7; // rcx
  int v8; // r9d
  struct _VIDSCH_CONTEXT *v9; // rdi
  __int64 v10; // rax
  ULONGLONG v11; // rdx
  ULONGLONG v12; // rax
  __int64 LeastSignificantBit; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 MostSignificantBit; // rdi
  _QWORD **v18; // r14
  __int64 v19; // r15
  _QWORD *v20; // rbp
  __int64 v21; // rsi
  unsigned int v22; // eax
  unsigned int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rbp
  struct _VIDSCH_CONTEXT *v26; // rdx
  bool v27; // zf
  char *v28; // rdx
  int v29; // ecx
  int v30; // r8d
  struct _VIDSCH_CONTEXT *v32; // rdi
  int v33; // r14d
  LARGE_INTEGER v34; // rax
  int v35; // edx
  int v36; // r8d
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  struct _VIDSCH_GLOBAL *v40; // rsi
  _QWORD *v41; // r9
  __int64 v42; // rcx
  _QWORD *v43; // rax
  struct _VIDSCH_CONTEXT *v44; // [rsp+50h] [rbp-B8h] BYREF
  union _LARGE_INTEGER v45; // [rsp+58h] [rbp-B0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+80h] [rbp-88h] BYREF
  __int64 v49[14]; // [rsp+98h] [rbp-70h] BYREF
  char v50; // [rsp+110h] [rbp+8h] BYREF
  _BYTE *v51; // [rsp+118h] [rbp+10h]
  char v52; // [rsp+120h] [rbp+18h] BYREF
  int v53; // [rsp+128h] [rbp+20h]

  v51 = a2;
  v2 = 0;
  v4 = 0LL;
  *a2 = 0;
  v50 = 0;
  while ( 1 )
  {
LABEL_2:
    if ( (unsigned int)(*((_DWORD *)a1 + 700) - 2) > 1 && !(unsigned int)VidSchiCheckHwProgress(a1, &v50) )
      goto LABEL_40;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 236, &LockHandle);
    v6 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 240);
    if ( v6 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 1920) )
    {
      do
      {
        v40 = *(struct _VIDSCH_GLOBAL **)v6;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v5, (__int64)v6 - 216) )
        {
          v42 = *v41;
          v43 = (_QWORD *)v41[1];
          if ( *(_QWORD **)(*v41 + 8LL) != v41 || (_QWORD *)*v43 != v41 )
            __fastfail(3u);
          *v43 = v42;
          *(_QWORD *)(v42 + 8) = v43;
          VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v41 - 26), (struct VIDMM_ALLOC *)(v41 - 27));
        }
        v6 = v40;
      }
      while ( v40 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 1920) );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *((_QWORD *)a1 + 180) = MEMORY[0xFFFFF78000000320];
    if ( KeReadStateEvent((PRKEVENT)a1 + 58) <= 0 )
      break;
LABEL_45:
    if ( (unsigned int)VidSchiWaitForSchedulerEvents(a1) == 258 )
      goto LABEL_40;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 232, &v48);
  if ( *((_DWORD *)a1 + 740) )
    VidSchiProcessCrossAdapterSignaledSyncObjects(a1);
  if ( *((_BYTE *)a1 + 51) )
    VidSchiProcessFlipPendingContextList(v7, *((_QWORD *)a1 + 371));
  v53 = 0;
  while ( 1 )
  {
    v9 = 0LL;
    if ( !*((_DWORD *)a1 + 234) )
      goto LABEL_31;
    v10 = *((_QWORD *)a1 + 26);
    if ( v10 && (*(_DWORD *)(v10 + 176) & 1) != 0 )
    {
      v9 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 26);
      goto LABEL_31;
    }
    if ( *((_DWORD *)a1 + 15) == 1 )
    {
      v14 = *((_QWORD *)a1 + 51);
      if ( !*(_DWORD *)(v14 + 1688) )
        goto LABEL_31;
      goto LABEL_21;
    }
    v11 = *((_QWORD *)a1 + 48) & *((_QWORD *)a1 + 49);
    if ( !v11 )
      v11 = *((_QWORD *)a1 + 48);
    v12 = v11 >> (*((_BYTE *)a1 + 920) + 1);
    if ( v12 )
      v11 = v12 << (*((_BYTE *)a1 + 920) + 1);
    if ( v11 )
    {
      LeastSignificantBit = (unsigned int)RtlFindLeastSignificantBit(v11);
      v14 = *((_QWORD *)a1 + LeastSignificantBit + 51);
      *((_DWORD *)a1 + 230) = LeastSignificantBit;
LABEL_21:
      if ( v14 )
      {
        if ( *(_DWORD *)(v14 + 1692) )
        {
          v15 = *(_QWORD *)(v14 + 24);
          v52 = 0;
          v49[0] = v14;
          DpSynchronizeExecution(
            *(_QWORD *)(v15 + 24),
            VidSchiUpdateNodeRunningTimeAtISR,
            v49,
            *(unsigned int *)(v15 + 32),
            &v52);
        }
        v16 = *(_QWORD *)(v14 + 24);
        KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( *(_BYTE *)(v14 + 1936)
          && (*(_DWORD *)(v14 + 1688) & 0xC0000000) == 0
          && (*(_DWORD *)(v14 + 1688) & (0xFFFFFFFF >> (31 - *(_BYTE *)(v16 + 168)))) != 0 )
        {
          MostSignificantBit = (unsigned int)RtlFindMostSignificantBit(*(_DWORD *)(v14 + 1688) & (0xFFFFFFFF >> (31 - *(_BYTE *)(v16 + 168))));
          v33 = ~((1 << (*(_DWORD *)(v16 + 168) + 1)) - 1);
          v34 = KeQueryPerformanceCounter(&v45);
          if ( (v33 & *(_DWORD *)(v14 + 1692)) != 0 )
          {
            v37 = *(_QWORD *)(v14 + 1920);
            if ( v37 )
            {
              v38 = v34.QuadPart - v37;
              v39 = *(_QWORD *)(v14 + 1928);
              if ( v38 >= v39 )
              {
                VidSchiStopNodeYield((struct _VIDSCH_NODE *)v14);
              }
              else
              {
                *(_QWORD *)(v14 + 1920) = 0LL;
                *(_QWORD *)(v14 + 1928) = v39 - v38;
              }
            }
            if ( *(_BYTE *)(v14 + 1936) && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_pqxxxx(
                *(_DWORD *)(v14 + 1692) & v33,
                v35,
                v36,
                *(_QWORD *)(v16 + 16),
                0,
                *(_WORD *)(v14 + 4),
                *(_BYTE *)(v14 + 1692) & v33,
                0,
                0);
          }
          else if ( !*(_QWORD *)(v14 + 1920) )
          {
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
              v14,
              (LARGE_INTEGER)v34.QuadPart,
              (union _LARGE_INTEGER)v45.QuadPart);
          }
        }
        else
        {
          MostSignificantBit = (unsigned int)RtlFindMostSignificantBit(*(unsigned int *)(v14 + 1688));
        }
        v18 = (_QWORD **)(v14 + 16 * (MostSignificantBit + 122));
        v44 = 0LL;
        v19 = v14 + 16LL * (unsigned int)MostSignificantBit;
        do
        {
          v20 = *v18;
          v21 = *(_QWORD *)(v19 + 1960) - 8LL;
          v9 = (struct _VIDSCH_CONTEXT *)(*v18 - 1);
          if ( v9 == (struct _VIDSCH_CONTEXT *)v21 )
          {
            v44 = (struct _VIDSCH_CONTEXT *)(*v18 - 1);
            *((_BYTE *)v9 + 640) = 1;
          }
          else
          {
            do
            {
              v32 = (struct _VIDSCH_CONTEXT *)(v20 - 1);
              v20 = (_QWORD *)*v20;
              if ( (unsigned int)VidSchiIsQuantumLeft(v32, &v44) )
                break;
              v2 = 1;
            }
            while ( v32 != (struct _VIDSCH_CONTEXT *)v21 );
            v9 = v44;
          }
          if ( v9 )
            break;
          v27 = v2 == 0;
          v2 = 0;
        }
        while ( !v27 );
        v2 = 0;
      }
    }
LABEL_31:
    VidSchiProfilePerformanceTick(2, (_DWORD)a1, 0, v8, (__int64)v9, 0LL, 0LL, 0LL);
    if ( !v9 )
    {
      v23 = 0;
      goto LABEL_39;
    }
    v22 = VidSchiSwitchContextWithCheck(v9);
    v23 = v22;
    if ( v22 == 1 )
      break;
    if ( v22 != 3 )
      goto LABEL_39;
  }
  v24 = *((_QWORD *)v9 + 12);
  v4 = *((_QWORD *)v9 + 81);
  v25 = *(_QWORD *)(v24 + 24);
  if ( v4 )
  {
    --*((_DWORD *)v9 + 195);
    --*(_DWORD *)(v24 + 2752);
    --*(_DWORD *)(v25 + 936);
    v26 = *(struct _VIDSCH_CONTEXT **)(v4 + 32);
    if ( v26 == (struct _VIDSCH_CONTEXT *)((char *)v9 + 664) )
    {
      *((_DWORD *)v9 + 161) &= 0xFFFFFFF0;
      *((_QWORD *)v9 + 81) = 0LL;
      VidSchiUpdateContextStatus(v9, 1LL, 15527LL);
    }
    else
    {
      v27 = v26 == (struct _VIDSCH_CONTEXT *)32;
      v28 = (char *)v26 - 32;
      *((_QWORD *)v9 + 81) = v28;
      if ( v27 )
      {
        *((_DWORD *)v9 + 161) &= 0xFFFFFFF0;
      }
      else
      {
        *((_DWORD *)v9 + 161) ^= v22 & (*((_DWORD *)v9 + 161) ^ (*((_DWORD *)v28 + 12) - 4 <= v22));
        v29 = *((_DWORD *)v9 + 161) ^ ((unsigned __int8)*((_DWORD *)v9 + 161) ^ (unsigned __int8)(2
                                                                                                * (*((_DWORD *)v28 + 12) == 3))) & 2;
        *((_DWORD *)v9 + 161) = v29;
        v30 = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)(4 * (*((_DWORD *)v28 + 12) == 7))) & 4;
        *((_DWORD *)v9 + 161) = v30;
        *((_DWORD *)v9 + 161) = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(8 * (*((_DWORD *)v28 + 12) == 6))) & 8;
      }
    }
    VidSchiProfilePerformanceTick(5, v25, 0, v8, 0LL, v4, 0LL, 0LL);
  }
  *((_DWORD *)v9 + 44) |= 0x400u;
LABEL_39:
  KeReleaseInStackQueuedSpinLock(&v48);
  if ( v23 != 1 )
  {
    if ( v23 == 4 )
    {
      *(_QWORD *)(*((_QWORD *)v9 + 12) + 232LL) = 0LL;
      VidSchiSubmitPreemptionCommand(*((_QWORD *)v9 + 12));
      goto LABEL_2;
    }
    if ( (v23 & 0xFFFFFFFD) != 0 )
      goto LABEL_2;
    goto LABEL_45;
  }
LABEL_40:
  if ( *((_DWORD *)a1 + 700) )
    *v51 = 1;
  return v4;
}
