/*
 * XREFs of KiSetAffinityThread @ 0x1400434D0
 * Callers:
 *     KeSetLegacyAffinityThread @ 0x140043120 (KeSetLegacyAffinityThread.c)
 *     KeSetAffinityThread @ 0x14015B334 (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x14016DD9C (KeSetAffinityProcess.c)
 * Callees:
 *     KiUpdateNodeAffinitizedFlag @ 0x14000FA64 (KiUpdateNodeAffinitizedFlag.c)
 *     RtlBeginReadTickLock @ 0x140017F48 (RtlBeginReadTickLock.c)
 *     KeSelectIdealProcessor @ 0x14002B7F8 (KeSelectIdealProcessor.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14009C160 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D3438 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D34E0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     KeSelectNodeForAffinity @ 0x14012B5E8 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceThreadAffinity @ 0x14025D654 (EtwTraceThreadAffinity.c)
 */

char __fastcall KiSetAffinityThread(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v5; // ebx
  __int64 *v6; // rbp
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdi
  int v13; // r13d
  volatile signed __int32 *v14; // r12
  __int64 v15; // rsi
  unsigned int v16; // ebx
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  char v21; // al
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rax
  int v25; // ebp
  __int64 i; // rbx
  __int64 v27; // r10
  __int64 v28; // rax
  __int64 v29; // r11
  _QWORD *v30; // rcx
  _QWORD *v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r8
  unsigned __int64 v35; // r8
  int v36; // r11d
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  int v42; // ecx
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned int v47; // ebx
  __int64 v48; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v51; // [rsp+20h] [rbp-88h]
  __int64 v52; // [rsp+28h] [rbp-80h]
  __int64 v55; // [rsp+40h] [rbp-68h] BYREF
  __int64 v56; // [rsp+48h] [rbp-60h]
  int v57; // [rsp+50h] [rbp-58h]
  int v58; // [rsp+54h] [rbp-54h]
  __int64 v59; // [rsp+58h] [rbp-50h] BYREF
  __int64 v60; // [rsp+60h] [rbp-48h]

  v4 = 0;
  v5 = 0;
  v6 = a3;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_WORD *)(a1 + 560) = *((_WORD *)v6 + 4);
  *(_QWORD *)(a1 + 552) = *v6;
  v51 = *(_DWORD *)(a1 + 196);
  v8 = KiProcessorBlock[v51];
  v52 = v8;
  if ( *(unsigned __int8 *)(v8 + 1616) != *((_WORD *)v6 + 4) || (v9 = *(_QWORD *)(v8 + 1608), (v9 & *v6) == 0) )
  {
    v10 = KeSelectNodeForAffinity(v6);
    v60 = 0LL;
    LOWORD(v60) = *((_WORD *)v6 + 4);
    v59 = *v6 & *(_QWORD *)(v10 + 136);
    v11 = KeSelectIdealProcessor(v10, (__int64)&v59, 0LL);
    v8 = v11;
    *(_DWORD *)(a1 + 196) = v11;
    v51 = v11;
    v9 = KiProcessorBlock[v11];
    v52 = v9;
  }
  v12 = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
    goto LABEL_142;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = *(unsigned __int8 *)(a1 + 388);
      v12 = 0LL;
      v14 = 0LL;
      if ( v13 == 5 )
      {
        v21 = *(_BYTE *)(a1 + 112) & 7;
        if ( v21 == 1 || (unsigned __int8)(v21 - 3) <= 3u )
          goto LABEL_68;
        LOBYTE(v13) = 2;
        goto LABEL_56;
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
LABEL_56:
        v22 = *(unsigned int *)(a1 + 536);
        if ( (int)v22 >= 0 )
        {
          v12 = KiProcessorBlock[v22];
          v23 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
          {
            do
            {
              if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v23);
            }
            while ( *(_QWORD *)(v12 + 48) );
          }
          if ( a1 == *(_QWORD *)(v12 + 8) )
            goto LABEL_68;
LABEL_66:
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 3 )
          goto LABEL_68;
        v15 = *(unsigned int *)(a1 + 536);
        if ( (int)v15 >= 0 )
        {
          v12 = KiProcessorBlock[v15];
          v16 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
          {
            do
            {
              if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v16);
            }
            while ( *(_QWORD *)(v12 + 48) );
          }
          if ( a1 == *(_QWORD *)(v12 + 16) )
            goto LABEL_68;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v15 )
            __fastfail(0x1Eu);
          goto LABEL_66;
        }
      }
    }
    v17 = *(unsigned int *)(a1 + 536);
    if ( (int)v17 >= 0 )
      break;
    v18 = (unsigned int)v17;
    LODWORD(v18) = v17 & 0x7FFFFFFF;
    v19 = 0;
    v14 = *(volatile signed __int32 **)(KiProcessorBlock[v18] + 24776);
    while ( _interlockedbittestandset64(v14, 0LL) )
    {
      do
      {
        if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v19);
      }
      while ( *(_QWORD *)v14 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v17 )
      goto LABEL_68;
    _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
  }
  v12 = KiProcessorBlock[v17];
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
  {
    do
    {
      if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v20);
    }
    while ( *(_QWORD *)(v12 + 48) );
  }
  if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v17 )
    goto LABEL_66;
LABEL_68:
  *(_WORD *)(a1 + 584) = *((_WORD *)v6 + 4);
  v24 = *v6;
  v25 = 0;
  *(_QWORD *)(a1 + 576) = v24;
  v4 = 1;
  if ( (*(_DWORD *)(a1 + 116) & 8) == 0 )
  {
    while ( 2 )
    {
      for ( i = KiCpuSetSequence; (KiCpuSetSequence & 1) != 0; i = KiCpuSetSequence )
        _mm_pause();
      v27 = *(_QWORD *)(a1 + 552);
      if ( ((v27 - 1) & v27) != 0 )
      {
        v28 = *(_QWORD *)(a1 + 544);
        v29 = *(unsigned __int16 *)(a1 + 584);
        v30 = (_QWORD *)(v28 + 1936);
        v31 = (_QWORD *)(v28 + 1944);
        if ( (*(_DWORD *)(v28 + 1716) & 0x200) != 0 )
        {
          v30 = (_QWORD *)*v30;
          v31 = (_QWORD *)*v31;
        }
        v8 = 8 * v29;
        v32 = KiSystemAllowedCpuSets[v29] | v30[v29];
        if ( v32 )
        {
          v34 = a1 + 1968;
          if ( (*(_DWORD *)(a1 + 1724) & 0x20000) != 0 )
            v34 = *(_QWORD *)(a1 + 1968);
          v35 = *(_QWORD *)(v34 + 8 * v29);
          if ( !v35 )
          {
            v35 = v31[v29];
            if ( !v35 )
            {
              if ( !KiRestrictedSystemCpuSetsActive )
              {
                v33 = 0LL;
                goto LABEL_90;
              }
              v35 = KiSystemAllowedCpuSets[v29];
            }
          }
          if ( (v32 & v35) == 0 )
            v35 = v32;
          if ( (v35 & *(__int64 *)((char *)&KiNonParkedCpuSets + v8)) != 0 )
            v35 &= *(__int64 *)((char *)&KiNonParkedCpuSets + v8);
          v33 = 0LL;
          if ( v35 )
          {
            v36 = (_DWORD)v29 << 6;
            do
            {
              _BitScanForward64((unsigned __int64 *)&v8, v35);
              v57 = v8;
              v33 |= *((_QWORD *)KiCpuSetAffinities + (unsigned int)(v8 + v36));
              v35 &= ~(1LL << v8);
            }
            while ( v35 );
          }
        }
        else
        {
          v33 = 0LL;
        }
LABEL_90:
        a4 = v27 & v33;
        if ( a4 )
          v27 = a4;
      }
      if ( *(_QWORD *)(a1 + 576) != v27 )
      {
        v37 = *(unsigned int *)(a1 + 196);
        *(_QWORD *)(a1 + 576) = v27;
        v38 = KiProcessorBlock[v37];
        if ( *(unsigned __int8 *)(v38 + 1616) != *(_WORD *)(a1 + 584) || (v27 & *(_QWORD *)(v38 + 1608)) == 0 )
        {
          v55 = v27;
          v56 = 0LL;
          LOWORD(v56) = *(_WORD *)(a1 + 584);
          v39 = KeSelectNodeForAffinity(&v55);
          v37 = (unsigned int)KeSelectIdealProcessor(v39, (__int64)&v55, 0LL);
        }
        *(_DWORD *)(a1 + 588) = v37;
        KiUpdateSharedReadyQueueAffinityThread(KiProcessorBlock[v37], a1, 0x140000000uLL, a4);
        KiUpdateNodeAffinitizedFlag(a1);
        v25 = 1;
      }
      if ( KiCpuSetSequence == i )
        goto LABEL_100;
      continue;
    }
  }
  i = RtlBeginReadTickLock(&KiCpuSetSequence);
LABEL_100:
  *(_QWORD *)(a1 + 568) = i;
  if ( v25 )
  {
    v6 = &v59;
    LOWORD(v60) = *(_WORD *)(a1 + 584);
    v9 = *(_QWORD *)(a1 + 576);
    v59 = v9;
  }
  else
  {
    v40 = *(unsigned __int16 *)(a1 + 584);
    v41 = *(_QWORD *)(a1 + 576);
    *(_DWORD *)(a1 + 588) = v51;
    if ( v41 == qword_1403D15E8[v40] )
    {
      v42 = 1;
    }
    else
    {
      if ( (unsigned __int16)KeNumberNodes > 1u )
      {
        while ( 1 )
        {
          _BitScanReverse64(&v43, v41);
          v58 = v43;
          v8 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v40
                                                                                           + (int)v43]]
                                     + 1600)
                         + 136LL);
          if ( (v8 & v41) != v8 )
            break;
          v8 = ~v8;
          v41 &= v8;
          if ( !v41 )
          {
            v42 = 1;
            goto LABEL_108;
          }
        }
      }
      v42 = 0;
    }
LABEL_108:
    if ( v42 == ((*(unsigned __int8 *)(a1 + 2) >> 3) & 1) )
      _InterlockedXor((volatile signed __int32 *)a1, 0x80000u);
    v44 = *(_QWORD *)(a1 + 104);
    if ( !v44 )
      goto LABEL_113;
    while ( (*(_DWORD *)(v44 + 4) & 2) != 0 )
    {
      v44 = *(_QWORD *)(v44 + 80);
      if ( !v44 )
        goto LABEL_113;
    }
    if ( (*(_DWORD *)(a1 + 120) & 0x100) != 0 || *(char *)(a1 + 195) >= 16 )
    {
LABEL_113:
      v45 = v52;
      if ( !v52 )
        v45 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
      v46 = *(_QWORD *)(v45 + 24768);
      LOBYTE(v9) = 0;
      if ( v46 )
        LOBYTE(v9) = (*(_QWORD *)(a1 + 576) & v46) == v46;
    }
    else
    {
      LOBYTE(v9) = 0;
    }
    v6 = a3;
    if ( (_BYTE)v9 != ((*(_DWORD *)(a1 + 120) & 0x1000) != 0) )
      _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x1000u);
  }
  if ( (unsigned __int8)v13 > 3u )
  {
LABEL_137:
    v4 = 0;
  }
  else
  {
    if ( (unsigned __int8)v13 == 1 )
    {
      v47 = *(char *)(a1 + 195);
      KiRemoveThreadFromAnyReadyQueue(v12, v14, a1, v47);
      LOBYTE(v9) = KiPrepareReadyThreadForRescheduling(a1, v47, a2);
      goto LABEL_137;
    }
    if ( (unsigned __int8)v13 != 2 )
    {
      if ( (unsigned __int8)v13 == 3 )
      {
        if ( *(unsigned __int8 *)(v12 + 1616) != *((_WORD *)v6 + 4) || (v9 = *(_QWORD *)(v12 + 1608), (v9 & *v6) == 0) )
        {
          KiSelectNextThread(v12, a2);
          *(_BYTE *)(a1 + 388) = 7;
          v9 = *a2;
          *(_QWORD *)(a1 + 216) = *a2;
          *a2 = a1 + 216;
        }
      }
      goto LABEL_137;
    }
    if ( *(unsigned __int8 *)(v12 + 1616) == *((_WORD *)v6 + 4) )
    {
      v9 = *(_QWORD *)(v12 + 1608);
      if ( (v9 & *v6) != 0 )
        goto LABEL_137;
    }
    LOBYTE(v9) = *(_BYTE *)(a1 + 388);
    if ( (_BYTE)v9 != 2 )
    {
      *(_BYTE *)(a1 + 112) |= 8u;
      goto LABEL_137;
    }
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xBu);
    if ( *(_QWORD *)(v12 + 16) )
      goto LABEL_137;
    LOBYTE(v9) = KiSelectNextThread(v12, a2);
  }
  if ( v12 )
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
  if ( v14 )
    _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
LABEL_142:
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v4 )
  {
    LODWORD(v9) = KeGetPcr()->Prcb.Number;
    v48 = *(unsigned int *)(v12 + 36);
    if ( (_DWORD)v9 != (_DWORD)v48 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      LOBYTE(v8) = 2;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      LOBYTE(v9) = HalSendSoftwareInterrupt(v48, v8);
    }
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    LOBYTE(v9) = EtwTraceThreadAffinity(a1, v6);
  return v9;
}
