/*
 * XREFs of VidSchiUpdateContextStatus @ 0x1C000C380
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00025A0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00086D0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C000AB20 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000ADA0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B8A0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiUnwaitContext @ 0x1C000E0EC (VidSchiUnwaitContext.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000E204 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000E330 (VidSchiCompleteRewindPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000EF58 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000F5D4 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchSuspendResumeDevice @ 0x1C0011190 (VidSchSuspendResumeDevice.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012110 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchSetNodePowerState @ 0x1C00153E0 (VidSchSetNodePowerState.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C00211F4 (VidSchiReadCommandFromContextQueue.c)
 * Callees:
 *     Template_pqq @ 0x1C001E198 (Template_pqq.c)
 *     Template_piiqq @ 0x1C001F7D0 (Template_piiqq.c)
 */

__int64 __fastcall VidSchiUpdateContextStatus(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  int v5; // r15d
  int v6; // esi
  __int64 v8; // r14
  __int64 v9; // rcx
  _QWORD *v10; // rax
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 *v16; // rcx
  __int64 **v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 **v23; // rax
  __int64 v25; // rdi
  _QWORD *v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 *v31; // rax
  __int64 **v32; // rcx
  __int64 v33; // rdi
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdi
  _QWORD *v37; // rax
  __int64 v38; // r9
  _QWORD *v39; // rax
  __int64 v40; // rdi
  _QWORD *v41; // rax
  __int64 v42; // r9

  v3 = *(_QWORD *)(a1 + 96);
  v4 = 0;
  v5 = (int)a3;
  v6 = (int)a2;
  v8 = *(_QWORD *)(v3 + 24);
  if ( bTracingEnabled )
  {
    v38 = *(_QWORD *)(a1 + 56);
    if ( !v38 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v38) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      Template_pqq(a1, (unsigned int)&EventUpdateContextStatus, (_DWORD)a3, v38, (char)a2, (char)a3);
  }
  if ( v6 == 5 )
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
      v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v39[3] = 281LL;
      v39[4] = 1024LL;
      v39[5] = v8;
      v39[6] = v3;
      v39[7] = a1;
      WdLogEvent5_WdCriticalError(v39);
      JUMPOUT(0x1C0019CDELL);
    }
    if ( (*(_DWORD *)(a1 + 176) & 1) == 0 )
    {
      v16 = *(__int64 **)(a1 + 8);
      a3 = (__int64 *)(a1 + 8);
      v17 = *(__int64 ***)(a1 + 16);
      if ( v16[1] != a1 + 8 || *v17 != a3 )
        __fastfail(3u);
      *v17 = v16;
      v16[1] = (__int64)v17;
      v18 = *(_DWORD *)(a1 + 396);
      a2 = (_QWORD *)(16LL * v18 + v3 + 1912);
      if ( (_QWORD *)*a2 == a2 )
        *(_DWORD *)(v3 + 1648) |= 1 << v18;
      if ( !*(_DWORD *)(v3 + 2708) )
      {
        v19 = *(_QWORD *)(v8 + 352);
        _bittestandset64(&v19, *(unsigned __int16 *)(v3 + 4));
        *(_QWORD *)(v8 + 352) = v19;
      }
      ++*(_DWORD *)(v3 + 2708);
      *(_DWORD *)(a1 + 176) |= 1u;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0) == 1;
      v20 = v3 + 1912;
      v21 = *(unsigned int *)(a1 + 396);
      if ( v11 )
      {
        v27 = (__int64 *)(16 * v21 + v20);
        v28 = *v27;
        *a3 = *v27;
        *(_QWORD *)(a1 + 16) = v27;
        if ( *(__int64 **)(v28 + 8) != v27 )
          __fastfail(3u);
        *(_QWORD *)(v28 + 8) = a3;
        *v27 = (__int64)a3;
      }
      else
      {
        v22 = 16 * v21 + v20;
        v23 = *(__int64 ***)(v22 + 8);
        *a3 = v22;
        *(_QWORD *)(a1 + 16) = v23;
        if ( *v23 != (__int64 *)v22 )
          __fastfail(3u);
        *v23 = a3;
        *(_QWORD *)(v22 + 8) = a3;
      }
      if ( *(_DWORD *)(a1 + 400) == 1 )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
            + 648LL;
        v30 = (__int64 *)(a1 + 408);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0) == 1 )
        {
          a2 = *(_QWORD **)v29;
          *v30 = *(_QWORD *)v29;
          *(_QWORD *)(a1 + 416) = v29;
          if ( a2[1] != v29 )
            __fastfail(3u);
          a2[1] = v30;
          *(_QWORD *)v29 = v30;
        }
        else
        {
          a2 = *(_QWORD **)(v29 + 8);
          *v30 = v29;
          *(_QWORD *)(a1 + 416) = a2;
          if ( *a2 != v29 )
            __fastfail(3u);
          *a2 = v30;
          *(_QWORD *)(v29 + 8) = v30;
        }
      }
      v4 = 1;
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
      v11 = (*(_DWORD *)(v3 + 2708))-- == 1;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v8 + 352);
        _bittestandreset64(&v12, *(unsigned __int16 *)(v3 + 4));
        *(_QWORD *)(v8 + 352) = v12;
      }
      v13 = *(_DWORD *)(a1 + 396);
      if ( *(_QWORD *)(v3 + 16LL * v13 + 1912) == v3 + 16LL * v13 + 1912 )
        *(_DWORD *)(v3 + 1648) &= ~(1 << v13);
      if ( *(_DWORD *)(a1 + 400) == 1 )
      {
        v31 = (__int64 *)(a1 + 408);
        a3 = *(__int64 **)(a1 + 408);
        v32 = *(__int64 ***)(a1 + 416);
        if ( a3[1] != a1 + 408 || *v32 != v31 )
          __fastfail(3u);
        *v32 = a3;
        a3[1] = (__int64)v32;
        *(_QWORD *)(a1 + 416) = 0LL;
        *v31 = 0LL;
      }
      *(_DWORD *)(a1 + 176) &= ~1u;
    }
    if ( v6 )
    {
      switch ( v6 )
      {
        case 8:
          *(_DWORD *)(a1 + 176) |= 0x80u;
          v40 = v3 + 2456;
          v41 = *(_QWORD **)(v40 + 8);
          *a2 = v40;
          *(_QWORD *)(a1 + 16) = v41;
          if ( *v41 != v40 )
            __fastfail(3u);
          *v41 = a2;
          *(_QWORD *)(v40 + 8) = a2;
          break;
        case 9:
          v36 = v3 + 2472;
          v37 = *(_QWORD **)(v36 + 8);
          *a2 = v36;
          *(_QWORD *)(a1 + 16) = v37;
          if ( *v37 != v36 )
            __fastfail(3u);
          *v37 = a2;
          *(_QWORD *)(v36 + 8) = a2;
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 993LL) )
          {
            KeResetEvent((PRKEVENT)(v8 + 2416));
            *(_BYTE *)(*(_QWORD *)(a1 + 104) + 993LL) = 1;
          }
          *(_DWORD *)(a1 + 176) |= 0x200u;
          ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 996LL);
          break;
        case 10:
          v33 = v3 + 2472;
          v34 = *(_QWORD **)(v33 + 8);
          *a2 = v33;
          *(_QWORD *)(a1 + 16) = v34;
          if ( *v34 != v33 )
            __fastfail(3u);
          *v34 = a2;
          *(_QWORD *)(v33 + 8) = a2;
          if ( (*(_DWORD *)(a1 + 176) & 0x200) != 0 )
          {
            --*(_DWORD *)(*(_QWORD *)(a1 + 104) + 996LL);
            *(_DWORD *)(a1 + 176) &= ~0x200u;
          }
          *(_DWORD *)(a1 + 176) |= 0x100u;
          *(_DWORD *)(a1 + 176) &= ~0x80u;
          v35 = *(_QWORD *)(a1 + 104);
          if ( !*(_DWORD *)(v35 + 996) )
          {
            *(_BYTE *)(v35 + 992) = 1;
            *(_BYTE *)(*(_QWORD *)(a1 + 104) + 993LL) = 0;
            KeSetEvent((PRKEVENT)(v8 + 2416), 0, 0);
          }
          break;
        default:
          v14 = v3 + 2424;
          v15 = *(_QWORD **)(v14 + 8);
          *a2 = v14;
          *(_QWORD *)(a1 + 16) = v15;
          if ( *v15 != v14 )
            __fastfail(3u);
          *v15 = a2;
          *(_QWORD *)(v14 + 8) = a2;
          if ( v6 != 1 )
          {
            switch ( v6 )
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
      v25 = v3 + 2440;
      v26 = *(_QWORD **)(v25 + 8);
      *a2 = v25;
      *(_QWORD *)(a1 + 16) = v26;
      if ( *v26 != v25 )
        __fastfail(3u);
      *v26 = a2;
      *(_QWORD *)(v25 + 8) = a2;
      *(_DWORD *)(a1 + 176) = 0;
    }
  }
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 180) = v6;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 184) = v5;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 188) = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 308) + 12LL)) = *(_DWORD *)(a1 + 756);
  v11 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 308) = ((unsigned __int8)*(_DWORD *)(a1 + 308) + 1) & 7;
  if ( !v11 )
  {
    v42 = *(_QWORD *)(a1 + 56);
    if ( !v42 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v42) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      Template_piiqq(
        *(_QWORD *)(a1 + 464),
        (_DWORD)a2,
        (_DWORD)a3,
        v42,
        *(_QWORD *)(a1 + 464),
        *(_QWORD *)(a1 + 456),
        *(_DWORD *)(a1 + 448),
        3);
  }
  return v4;
}
