/*
 * XREFs of VidSchiUpdateContextStatus @ 0x1C0002EC0
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0001A80 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0002690 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0002D28 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000342C (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C0003888 (VidSchiSwitchContextWithCheck.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00048A8 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiCompleteRewindPacket @ 0x1C0015EDC (VidSchiCompleteRewindPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0017BD4 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C001958C (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C001A630 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x1C001AED0 (VidSchiSubmitWaitCommand.c)
 *     VidSchiUnwaitContext @ 0x1C001B160 (VidSchiUnwaitContext.c)
 *     VidSchSetNodePowerState @ 0x1C001CF50 (VidSchSetNodePowerState.c)
 *     VidSchSuspendResumeDevice @ 0x1C001D320 (VidSchSuspendResumeDevice.c)
 * Callees:
 *     Template_pqq @ 0x1C0010A8C (Template_pqq.c)
 *     Template_piiqq @ 0x1C0013D70 (Template_piiqq.c)
 */

__int64 __fastcall VidSchiUpdateContextStatus(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rdi
  int v4; // r15d
  int v5; // esi
  unsigned int v7; // r14d
  __int64 v8; // rbp
  __int64 v9; // rcx
  _QWORD *v10; // rax
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 *v17; // rcx
  __int64 **v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 **v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 *v32; // rax
  _QWORD *v33; // rax
  __int64 *v34; // rax
  __int64 **v35; // rcx
  __int64 v36; // rdi
  _QWORD *v37; // rax
  __int64 v38; // rdi
  _QWORD *v39; // rax
  __int64 v40; // rdi
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // r9

  v3 = *(_QWORD *)(a1 + 96);
  v4 = (int)a3;
  v5 = (int)a2;
  v7 = 0;
  v8 = *(_QWORD *)(v3 + 24);
  if ( bTracingEnabled )
  {
    v30 = *(_QWORD *)(a1 + 56);
    if ( !v30 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v30) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      Template_pqq(a1, (unsigned int)&EventUpdateContextStatus, (_DWORD)a3, v30, (char)a2, (char)a3);
  }
  if ( v5 == 5 )
  {
    if ( (*(_DWORD *)(a1 + 176) & 8) != 0
      || (*(_DWORD *)(a1 + 176) & 4) != 0
      || (*(_DWORD *)(a1 + 176) & 0x10) != 0
      || (*(_DWORD *)(a1 + 176) & 0x40) != 0
      || (*(_DWORD *)(a1 + 176) & 0x200) != 0
      || (*(_DWORD *)(a1 + 176) & 0x100) != 0
      || (*(_DWORD *)(a1 + 176) & 0x80u) != 0
      || (*(_DWORD *)(a1 + 176) & 0x20) != 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v33[3] = 281LL;
      v33[4] = 1024LL;
      v33[5] = v8;
      v33[6] = v3;
      v33[7] = a1;
      WdLogEvent5_WdCriticalError(v33);
      JUMPOUT(0x1C000A9EDLL);
    }
    if ( (*(_DWORD *)(a1 + 176) & 1) == 0 )
    {
      v17 = *(__int64 **)(a1 + 8);
      a3 = (__int64 *)(a1 + 8);
      v18 = *(__int64 ***)(a1 + 16);
      if ( v17[1] != a1 + 8 || *v18 != a3 )
        __fastfail(3u);
      *v18 = v17;
      v17[1] = (__int64)v18;
      v19 = *(_DWORD *)(a1 + 396);
      a2 = (_QWORD *)(16LL * v19 + v3 + 2040);
      if ( (_QWORD *)*a2 == a2 )
        *(_DWORD *)(v3 + 1616) |= 1 << v19;
      if ( !*(_DWORD *)(v3 + 2836) )
      {
        if ( !*(_QWORD *)(v8 + 344) )
          v7 = 1;
        v20 = *(_QWORD *)(v8 + 344);
        _bittestandset64(&v20, *(unsigned __int16 *)(v3 + 4));
        *(_QWORD *)(v8 + 344) = v20;
      }
      ++*(_DWORD *)(v3 + 2836);
      *(_DWORD *)(a1 + 176) |= 1u;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0) == 1;
      v21 = v3 + 2040;
      v22 = *(unsigned int *)(a1 + 396);
      if ( v11 )
      {
        v23 = (__int64 *)(16 * v22 + v21);
        v24 = *v23;
        *a3 = *v23;
        *(_QWORD *)(a1 + 16) = v23;
        if ( *(__int64 **)(v24 + 8) != v23 )
          __fastfail(3u);
        *(_QWORD *)(v24 + 8) = a3;
        *v23 = (__int64)a3;
      }
      else
      {
        v28 = 16 * v22 + v21;
        v29 = *(__int64 ***)(v28 + 8);
        *a3 = v28;
        *(_QWORD *)(a1 + 16) = v29;
        if ( *v29 != (__int64 *)v28 )
          __fastfail(3u);
        *v29 = a3;
        *(_QWORD *)(v28 + 8) = a3;
      }
      if ( *(_DWORD *)(a1 + 400) == 1 )
      {
        v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
            + 648LL;
        v32 = (__int64 *)(a1 + 408);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0) == 1 )
        {
          a2 = *(_QWORD **)v31;
          *v32 = *(_QWORD *)v31;
          *(_QWORD *)(a1 + 416) = v31;
          if ( a2[1] != v31 )
            __fastfail(3u);
          a2[1] = v32;
          *(_QWORD *)v31 = v32;
        }
        else
        {
          a2 = *(_QWORD **)(v31 + 8);
          *v32 = v31;
          *(_QWORD *)(a1 + 416) = a2;
          if ( *a2 != v31 )
            __fastfail(3u);
          *a2 = v32;
          *(_QWORD *)(v31 + 8) = v32;
        }
      }
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *(struct _KTHREAD **)(v8 + 128) && CurrentThread != *(struct _KTHREAD **)(v8 + 136) )
      {
        *(_QWORD *)(v8 + 1552) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v8 + 1520), 0, 0);
      }
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 8);
    a2 = (_QWORD *)(a1 + 8);
    v10 = *(_QWORD **)(a1 + 16);
    if ( *(_QWORD *)(v9 + 8) != a1 + 8 || (_QWORD *)*v10 != a2 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
    {
      v11 = (*(_DWORD *)(v3 + 2836))-- == 1;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v8 + 344);
        _bittestandreset64(&v12, *(unsigned __int16 *)(v3 + 4));
        *(_QWORD *)(v8 + 344) = v12;
      }
      v13 = *(_DWORD *)(a1 + 396);
      if ( *(_QWORD *)(v3 + 16LL * v13 + 2040) == v3 + 16LL * v13 + 2040 )
        *(_DWORD *)(v3 + 1616) &= ~(1 << v13);
      if ( *(_DWORD *)(a1 + 400) == 1 )
      {
        v34 = (__int64 *)(a1 + 408);
        a3 = *(__int64 **)(a1 + 408);
        v35 = *(__int64 ***)(a1 + 416);
        if ( a3[1] != a1 + 408 || *v35 != v34 )
          __fastfail(3u);
        *v35 = a3;
        a3[1] = (__int64)v35;
        *(_QWORD *)(a1 + 416) = 0LL;
        *v34 = 0LL;
      }
      *(_DWORD *)(a1 + 176) &= ~1u;
    }
    if ( v5 )
    {
      switch ( v5 )
      {
        case 8:
          *(_DWORD *)(a1 + 176) |= 0x80u;
          v36 = v3 + 2584;
          v37 = *(_QWORD **)(v36 + 8);
          *a2 = v36;
          *(_QWORD *)(a1 + 16) = v37;
          if ( *v37 != v36 )
            __fastfail(3u);
          *v37 = a2;
          *(_QWORD *)(v36 + 8) = a2;
          break;
        case 9:
          v38 = v3 + 2600;
          v39 = *(_QWORD **)(v38 + 8);
          *a2 = v38;
          *(_QWORD *)(a1 + 16) = v39;
          if ( *v39 != v38 )
            __fastfail(3u);
          *v39 = a2;
          *(_QWORD *)(v38 + 8) = a2;
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 865LL) )
          {
            KeResetEvent((PRKEVENT)(v8 + 2456));
            *(_BYTE *)(*(_QWORD *)(a1 + 104) + 865LL) = 1;
          }
          *(_DWORD *)(a1 + 176) |= 0x200u;
          ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 868LL);
          break;
        case 10:
          v40 = v3 + 2600;
          v41 = *(_QWORD **)(v40 + 8);
          *a2 = v40;
          *(_QWORD *)(a1 + 16) = v41;
          if ( *v41 != v40 )
            __fastfail(3u);
          *v41 = a2;
          *(_QWORD *)(v40 + 8) = a2;
          if ( (*(_DWORD *)(a1 + 176) & 0x200) != 0 )
          {
            --*(_DWORD *)(*(_QWORD *)(a1 + 104) + 868LL);
            *(_DWORD *)(a1 + 176) &= ~0x200u;
          }
          *(_DWORD *)(a1 + 176) |= 0x100u;
          *(_DWORD *)(a1 + 176) &= ~0x80u;
          v42 = *(_QWORD *)(a1 + 104);
          if ( !*(_DWORD *)(v42 + 868) )
          {
            *(_BYTE *)(v42 + 864) = 1;
            *(_BYTE *)(*(_QWORD *)(a1 + 104) + 865LL) = 0;
            KeSetEvent((PRKEVENT)(v8 + 2456), 0, 0);
          }
          break;
        default:
          v14 = v3 + 2552;
          v15 = *(_QWORD **)(v14 + 8);
          *a2 = v14;
          *(_QWORD *)(a1 + 16) = v15;
          if ( *v15 != v14 )
            __fastfail(3u);
          *v15 = a2;
          *(_QWORD *)(v14 + 8) = a2;
          if ( v5 != 1 )
          {
            switch ( v5 )
            {
              case 2:
                *(_DWORD *)(a1 + 176) |= 8u;
                break;
              case 3:
                *(_DWORD *)(a1 + 176) |= 0x10u;
                break;
              case 4:
                *(_DWORD *)(a1 + 176) |= 0x20u;
                break;
              case 7:
                *(_DWORD *)(a1 + 176) |= 0x40u;
                break;
            }
          }
          break;
      }
    }
    else
    {
      v26 = v3 + 2568;
      v27 = *(_QWORD **)(v26 + 8);
      *a2 = v26;
      *(_QWORD *)(a1 + 16) = v27;
      if ( *v27 != v26 )
        __fastfail(3u);
      *v27 = a2;
      *(_QWORD *)(v26 + 8) = a2;
      *(_DWORD *)(a1 + 176) = 0;
    }
  }
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 180) = v5;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 184) = v4;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 188) = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 308) + 12LL)) = *(_DWORD *)(a1 + 756);
  v11 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 308) = ((unsigned __int8)*(_DWORD *)(a1 + 308) + 1) & 7;
  if ( !v11 )
  {
    v43 = *(_QWORD *)(a1 + 56);
    if ( !v43 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v43) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      Template_piiqq(
        *(_QWORD *)(a1 + 464),
        (_DWORD)a2,
        (_DWORD)a3,
        v43,
        *(_QWORD *)(a1 + 464),
        *(_QWORD *)(a1 + 456),
        *(_DWORD *)(a1 + 448),
        3);
  }
  return v7;
}
