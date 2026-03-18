/*
 * XREFs of VidSchiUpdateContextStatus @ 0x1C000ABF0
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002180 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00077C0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00098B0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000A340 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C000A7F0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiUnwaitContext @ 0x1C000D158 (VidSchiUnwaitContext.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000D28C (VidSchiCompleteRewindPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000D568 (VidSchiSubmitWaitCommand.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000DA44 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000E45C (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchSuspendResumeDevice @ 0x1C000F0F0 (VidSchSuspendResumeDevice.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0010540 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchSetNodePowerState @ 0x1C0013610 (VidSchSetNodePowerState.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C0024A48 (VidSchiReadCommandFromContextQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_pqq @ 0x1C001FCE8 (Template_pqq.c)
 *     Template_piiqq @ 0x1C0022804 (Template_piiqq.c)
 */

__int64 __fastcall VidSchiUpdateContextStatus(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebp
  int v6; // r13d
  int v7; // esi
  __int64 v9; // r15
  __int64 v10; // rcx
  _QWORD *v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v26; // rdi
  _QWORD *v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdi
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rdi
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  void (__fastcall *v42)(_QWORD); // rax
  void (__fastcall *v43)(_QWORD); // rax
  __int64 v44; // r9

  v4 = *(_QWORD *)(a1 + 96);
  v5 = 0;
  v6 = a3;
  v7 = (int)a2;
  v9 = *(_QWORD *)(v4 + 24);
  if ( bTracingEnabled )
  {
    a4 = *(_QWORD *)(a1 + 56);
    if ( !a4 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      a4 = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pqq(a1, (unsigned int)&EventUpdateContextStatus, a3, a4, (char)a2, a3);
  }
  if ( v7 == 5 )
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
      v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3, a4);
      v41[3] = 281LL;
      v41[4] = 1024LL;
      v41[5] = v9;
      v41[6] = v4;
      v41[7] = a1;
      WdLogEvent5_WdCriticalError(v41);
      JUMPOUT(0x1C000B18DLL);
    }
    if ( (*(_DWORD *)(a1 + 176) & 1) == 0 )
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = (_QWORD *)(a1 + 8);
      v19 = *(_QWORD **)(a1 + 16);
      if ( *(_QWORD *)(v17 + 8) != a1 + 8 || (_QWORD *)*v19 != v18 )
        __fastfail(3u);
      *v19 = v17;
      *(_QWORD *)(v17 + 8) = v19;
      v20 = *(unsigned int *)(a1 + 396);
      if ( *(_QWORD *)(v4 + 16 * (v20 + 122)) == v4 + 16 * (v20 + 122) )
        *(_DWORD *)(v4 + 1688) |= 1 << v20;
      if ( !*(_DWORD *)(v4 + 2748) )
      {
        if ( !*(_QWORD *)(v9 + 384) && *(_DWORD *)(*(_QWORD *)(v9 + 16) + 136LL) == 1 )
        {
          if ( *(_DWORD *)(v4 + 2788) != -1 )
          {
            v42 = *(void (__fastcall **)(_QWORD))(v9 + 2856);
            if ( v42 )
              v42(*(_QWORD *)(v9 + 2896));
          }
          LODWORD(a2) = *(_DWORD *)(v4 + 2788);
          if ( (_DWORD)a2 != -1 )
          {
            v43 = *(void (__fastcall **)(_QWORD))(v9 + 2864);
            if ( v43 )
              v43(*(_QWORD *)(v9 + 2896));
          }
        }
        v21 = *(_QWORD *)(v9 + 384);
        _bittestandset64(&v21, *(unsigned __int16 *)(v4 + 4));
        *(_QWORD *)(v9 + 384) = v21;
      }
      ++*(_DWORD *)(v4 + 2748);
      *(_DWORD *)(a1 + 176) |= 1u;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0) == 1;
      v22 = *(unsigned int *)(a1 + 396);
      if ( v12 )
      {
        v28 = (__int64 *)(v4 + 16 * (v22 + 122));
        v29 = *v28;
        if ( *(__int64 **)(*v28 + 8) != v28 )
          __fastfail(3u);
        *v18 = v29;
        *(_QWORD *)(a1 + 16) = v28;
        *(_QWORD *)(v29 + 8) = v18;
        *v28 = (__int64)v18;
      }
      else
      {
        v23 = v4 + 16 * (v22 + 122);
        v24 = *(_QWORD **)(v23 + 8);
        if ( *v24 != v23 )
          __fastfail(3u);
        *v18 = v23;
        *(_QWORD *)(a1 + 16) = v24;
        *v24 = v18;
        *(_QWORD *)(v23 + 8) = v18;
      }
      if ( *(_DWORD *)(a1 + 400) == 1 )
      {
        v32 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                       + 648LL);
        v33 = (_QWORD *)(a1 + 408);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0) == 1 )
        {
          a2 = (_QWORD *)*v32;
          if ( *(_QWORD **)(*v32 + 8LL) != v32 )
            __fastfail(3u);
          *v33 = a2;
          *(_QWORD *)(a1 + 416) = v32;
          a2[1] = v33;
          *v32 = v33;
        }
        else
        {
          a2 = (_QWORD *)v32[1];
          if ( (_QWORD *)*a2 != v32 )
            __fastfail(3u);
          *v33 = v32;
          *(_QWORD *)(a1 + 416) = a2;
          *a2 = v33;
          v32[1] = v33;
        }
      }
      v5 = 1;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 8);
    a2 = (_QWORD *)(a1 + 8);
    v11 = *(_QWORD **)(a1 + 16);
    if ( *(_QWORD *)(v10 + 8) != a1 + 8 || (_QWORD *)*v11 != a2 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
    {
      v12 = (*(_DWORD *)(v4 + 2748))-- == 1;
      if ( v12 )
      {
        v13 = *(_QWORD *)(v9 + 384);
        _bittestandreset64(&v13, *(unsigned __int16 *)(v4 + 4));
        *(_QWORD *)(v9 + 384) = v13;
      }
      v14 = *(unsigned int *)(a1 + 396);
      if ( *(_QWORD *)(v4 + 16 * (v14 + 122)) == v4 + 16 * (v14 + 122) )
        *(_DWORD *)(v4 + 1688) &= ~(1 << v14);
      if ( *(_DWORD *)(a1 + 400) == 1 )
      {
        v34 = (_QWORD *)(a1 + 408);
        a3 = *(_QWORD *)(a1 + 408);
        v35 = *(_QWORD **)(a1 + 416);
        if ( *(_QWORD *)(a3 + 8) != a1 + 408 || (_QWORD *)*v35 != v34 )
          __fastfail(3u);
        *v35 = a3;
        *(_QWORD *)(a3 + 8) = v35;
        *(_QWORD *)(a1 + 416) = 0LL;
        *v34 = 0LL;
      }
      *(_DWORD *)(a1 + 176) &= ~1u;
    }
    if ( v7 )
    {
      switch ( v7 )
      {
        case 8:
          *(_DWORD *)(a1 + 176) |= 0x80u;
          v15 = v4 + 2496;
          v16 = *(_QWORD **)(v15 + 8);
          if ( *v16 != v15 )
            __fastfail(3u);
          goto LABEL_18;
        case 9:
          v39 = v4 + 2512;
          v40 = *(_QWORD **)(v39 + 8);
          if ( *v40 != v39 )
            __fastfail(3u);
          *a2 = v39;
          *(_QWORD *)(a1 + 16) = v40;
          *v40 = a2;
          *(_QWORD *)(v39 + 8) = a2;
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 989LL) )
          {
            KeResetEvent((PRKEVENT)(v9 + 2776));
            *(_BYTE *)(*(_QWORD *)(a1 + 104) + 989LL) = 1;
          }
          *(_DWORD *)(a1 + 176) |= 0x200u;
          ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 992LL);
          break;
        case 10:
          v36 = v4 + 2512;
          v37 = *(_QWORD **)(v36 + 8);
          if ( *v37 != v36 )
            __fastfail(3u);
          *a2 = v36;
          *(_QWORD *)(a1 + 16) = v37;
          *v37 = a2;
          *(_QWORD *)(v36 + 8) = a2;
          if ( (*(_DWORD *)(a1 + 176) & 0x200) != 0 )
          {
            --*(_DWORD *)(*(_QWORD *)(a1 + 104) + 992LL);
            *(_DWORD *)(a1 + 176) &= ~0x200u;
          }
          *(_DWORD *)(a1 + 176) |= 0x100u;
          *(_DWORD *)(a1 + 176) &= ~0x80u;
          v38 = *(_QWORD *)(a1 + 104);
          if ( !*(_DWORD *)(v38 + 992) )
          {
            *(_BYTE *)(v38 + 988) = 1;
            *(_BYTE *)(*(_QWORD *)(a1 + 104) + 989LL) = 0;
            KeSetEvent((PRKEVENT)(v9 + 2776), 0, 0);
          }
          break;
        case 1:
          v15 = v4 + 2480;
          v16 = *(_QWORD **)(v15 + 8);
          if ( *v16 != v15 )
            __fastfail(3u);
LABEL_18:
          *a2 = v15;
          *(_QWORD *)(a1 + 16) = v16;
          *v16 = a2;
          *(_QWORD *)(v15 + 8) = a2;
          break;
        default:
          v30 = v4 + 2464;
          v31 = *(_QWORD **)(v30 + 8);
          if ( *v31 != v30 )
            __fastfail(3u);
          *a2 = v30;
          *(_QWORD *)(a1 + 16) = v31;
          *v31 = a2;
          *(_QWORD *)(v30 + 8) = a2;
          switch ( v7 )
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
          break;
      }
    }
    else
    {
      v26 = v4 + 2480;
      v27 = *(_QWORD **)(v26 + 8);
      if ( *v27 != v26 )
        __fastfail(3u);
      *a2 = v26;
      *(_QWORD *)(a1 + 16) = v27;
      *v27 = a2;
      *(_QWORD *)(v26 + 8) = a2;
      *(_DWORD *)(a1 + 176) = 0;
    }
  }
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 180) = v7;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 184) = v6;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 308) + 188) = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 308) + 12LL)) = *(_DWORD *)(a1 + 780);
  v12 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 308) = ((unsigned __int8)*(_DWORD *)(a1 + 308) + 1) & 7;
  if ( !v12 )
  {
    v44 = *(_QWORD *)(a1 + 56);
    if ( !v44 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v44) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_piiqq(
        *(_QWORD *)(a1 + 464),
        (_DWORD)a2,
        a3,
        v44,
        *(_QWORD *)(a1 + 464),
        *(_QWORD *)(a1 + 456),
        *(_DWORD *)(a1 + 448),
        3);
  }
  return v5;
}
