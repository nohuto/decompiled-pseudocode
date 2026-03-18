/*
 * XREFs of KeUpdateThreadTag @ 0x1401321C8
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireThreadStateLock @ 0x14009C1F0 (KiAcquireThreadStateLock.c)
 *     KiIpiSendPacket @ 0x140129790 (KiIpiSendPacket.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned int v4; // ebx
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r11
  unsigned __int64 v9; // rcx
  char v10; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  unsigned __int64 v16; // r9
  unsigned int v17; // edx
  __int64 v18; // r10
  __int64 v19; // rdx
  bool v20; // zf
  char v21; // al
  __int64 v22; // rbx
  __int64 v23; // rcx
  int v24; // r8d
  struct _KPRCB *v25; // rcx
  __int64 result; // rax
  struct _KPRCB *v27; // [rsp+30h] [rbp-99h] BYREF
  volatile signed __int64 *v28; // [rsp+38h] [rbp-91h] BYREF
  _DWORD v29[2]; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v30[21]; // [rsp+48h] [rbp-81h] BYREF
  int v31; // [rsp+138h] [rbp+6Fh] BYREF

  v31 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 124) != v31 )
  {
    if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = CurrentPrcb;
      _disable();
      CurrentPrcb->NestingLevel = 1;
      v6 = __rdtsc();
      v7 = 3LL;
      v8 = v6 - CurrentPrcb->StartCycles;
      v9 = v8 + *(unsigned int *)(a1 + 80);
      *(_QWORD *)(a1 + 72) += v8;
      CurrentPrcb->StartCycles = v6;
      v10 = *(_BYTE *)(a1 + 2);
      if ( v9 > 0xFFFFFFFF )
        v9 = 0xFFFFFFFFLL;
      *(_DWORD *)(a1 + 80) = v9;
      if ( (v10 & 0x3E) != 0 )
      {
        if ( (v10 & 0x10) != 0 )
        {
          CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(a1 + 124)] += CurrentPrcb->StartCycles
                                                                     - CurrentPrcb->TaggedCyclesStart;
          CurrentPrcb->TaggedCyclesStart = 0LL;
          v10 &= ~0x10u;
        }
        if ( (v10 & 0x3E) != 0 )
        {
          if ( (v10 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(a1 + 1952) )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
              v13 = 3LL;
              if ( CurrentFrequency / 0x19 < 3 )
                v13 = CurrentFrequency / 0x19;
              v14 = CurrentPrcb->PowerState.Class + 2 * v13;
              v9 = v8 + *(_QWORD *)(v12 + 8 * v14);
              *(_QWORD *)(v12 + 8 * v14) = v9;
            }
            v10 &= ~0x20u;
          }
          if ( (v10 & 0x3E) != 0 )
          {
            v9 = *(_QWORD *)(a1 + 104);
            if ( v9 )
            {
              for ( v9 += CurrentPrcb->ScbOffset; v9; v9 = *(_QWORD *)(v9 + 392) )
                *(_QWORD *)v9 += v8;
            }
            if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
            {
              v9 = *(_QWORD *)(a1 + 576);
              if ( (v9 & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
                CurrentPrcb->AffinitizedCycles += v8;
            }
            if ( *(_QWORD *)(a1 + 360) )
              KiEndCounterAccumulation(a1);
          }
        }
      }
      v15 = v31;
      if ( v31 )
        _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
      *(_BYTE *)(a1 + 124) = v15;
      v16 = __rdtsc();
      CurrentPrcb->CycleTime += v16 - CurrentPrcb->StartCycles;
      if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
      {
        v17 = (unsigned int)PpmPerfGetCurrentFrequency(CurrentPrcb) / 0x19;
        if ( v17 < 3 )
          v7 = v17;
        v19 = CurrentPrcb->PowerState.Class + 2 * v7;
        v9 = v18 + CurrentPrcb->Cycles[0][v19];
        CurrentPrcb->Cycles[0][v19] = v9;
      }
      CurrentPrcb->StartCycles = v16;
      if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
        CurrentPrcb->TaggedCyclesStart = v16;
      if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
        KiBeginCounterAccumulation(a1, 0LL);
      v20 = CurrentPrcb->InterruptRequest == 0;
      CurrentPrcb->NestingLevel = 0;
      if ( !v20 )
      {
        LOBYTE(v9) = 2;
        CurrentPrcb->InterruptRequest = 0;
        HalRequestSoftwareInterrupt(v9);
      }
      _enable();
    }
    else
    {
      if ( (unsigned __int8)KiAcquireThreadStateLock(a1, (__int64 *)&v27, (volatile signed __int32 **)&v28) == 2
        || *(_BYTE *)(a1 + 113) )
      {
        v22 = *(unsigned int *)(a1 + 536);
        v29[1] = 0;
        v29[0] = 1310721;
        LODWORD(v22) = v22 & 0x7FFFFFFF;
        memset(v30, 0, 0xA0uLL);
        v23 = (unsigned int)KiProcessorIndexToNumberMappingTable[v22] >> 6;
        v24 = KiProcessorIndexToNumberMappingTable[v22] & 0x3F;
        if ( (_DWORD)v23 )
          LOWORD(v29[0]) = v23 + 1;
        v30[(unsigned int)v23] = v30[v23] | (1LL << v24);
        __writecr8(0xCuLL);
        KiIpiSendPacket(0, (unsigned __int16 *)v29, (__int64)KiIpiUpdateThreadTag, a1, (__int64)&v31, 0LL);
        v25 = KeGetCurrentPrcb();
        while ( v25->PacketBarrier )
          _mm_pause();
      }
      else
      {
        v21 = v31;
        if ( v31 )
          _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
        *(_BYTE *)(a1 + 124) = v21;
      }
      if ( v27 )
        _InterlockedAnd64((volatile signed __int64 *)&v27->PrcbLock, 0LL);
      if ( v28 )
        _InterlockedAnd64(v28, 0LL);
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
