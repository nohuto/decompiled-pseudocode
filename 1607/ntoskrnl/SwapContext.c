// see https://github.com/nohuto/windbg-notes/blob/main/assets/SwapContext.c for a decompilation attempt

/*
 * XREFs of SwapContext @ 0x140166570
 * Callers:
 *     KiIdleLoop @ 0x140161FE0 (KiIdleLoop.c)
 *     KiSwapContext @ 0x140166240 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x1401663B0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     EtwTraceContextSwap @ 0x1400D4300 (EtwTraceContextSwap.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1401C146C (HvlSwitchVirtualAddressSpace.c)
 *     KiUpdateSpeculationControl @ 0x1401D9EB0 (KiUpdateSpeculationControl.c)
 */

bool __fastcall SwapContext(unsigned __int8 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // r12
  ULONG_PTR v7; // rbp
  unsigned __int64 v9; // rdx
  ULONG64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // r8
  bool v23; // zf
  __int64 v24; // rcx
  unsigned int v26; // ebp
  _BYTE v27[32]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v28; // [rsp+28h] [rbp-10h]

  _m_prefetchw((const void *)(v3 + 113));
  v28 = a1;
  if ( *(_BYTE *)(v3 + 113) )
  {
    v26 = 0;
    do
    {
      if ( (++v26 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        HvlNotifyLongSpinWait(v26);
      _mm_pause();
    }
    while ( *(_BYTE *)(v3 + 113) );
  }
  *(_BYTE *)(v3 + 113) = 1;
  _disable();
  v4 = __rdtsc();
  v5 = (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4) - *(_QWORD *)(v1 + 23352);
  *(_QWORD *)(v1 + 23544) += v5;
  *(_QWORD *)(v1 + 23352) += v5;
  v6 = v5;
  if ( *(_BYTE *)(v1 + 6) )
  {
    *(_BYTE *)(v1 + 6) = 0;
    if ( *(_QWORD *)(v1 + 24) != v3 )
      HalRequestSoftwareInterrupt(2LL);
  }
  if ( (*(_BYTE *)(v3 + 2) & 0x36) != 0 )
  {
    KiBeginThreadAccountingPeriod(v1, (struct _KTHREAD *)v3, v6);
  }
  else
  {
    --*(_BYTE *)(v1 + 32);
    _enable();
  }
  ++*(_DWORD *)(v1 + 11452);
  v7 = KeFeatureBits;
  _RCX = *(_DWORD **)(v2 + 96);
  v9 = *(_QWORD *)(v2 + 592) & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v9 )
  {
    if ( (KeFeatureBits & 0x4000000000LL) != 0 )
    {
      __asm { xsaves  byte ptr [rcx] }
    }
    else if ( (KeFeatureBits & 0x8000) != 0 )
    {
      _xsaveopt(_RCX, (unsigned int)v9);
    }
    else if ( (KeFeatureBits & 0x800000) != 0 )
    {
      _xsave(_RCX, (unsigned int)v9);
    }
    else
    {
      _fxsave(_RCX);
    }
  }
  _RCX[6] = _mm_getcsr();
  *(_QWORD *)(v2 + 88) = v27;
  if ( *(char *)(v2 + 3) < 0 )
  {
    v10 = __readmsr(0xC0000102);
    if ( v10 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    *(_QWORD *)(*(_QWORD *)(v2 + 496) + 128LL) = v10;
  }
  if ( *(_QWORD *)(v3 + 544) != *(_QWORD *)(v2 + 544) )
    KiUpdateSpeculationControl();
  v11 = *(_QWORD *)(v3 + 184);
  if ( v11 != *(_QWORD *)(v2 + 184) )
  {
    _interlockedbittestandset64(
      (volatile signed __int32 *)(v11 + 8LL * *(unsigned __int8 *)(v1 + 1616) + 280),
      *(unsigned __int8 *)(v1 + 1617));
    v12 = *(_QWORD *)(v11 + 40);
    if ( (KiKvaShadow & 1) != 0 )
    {
      _disable();
      if ( (v12 & 2) != 0 )
      {
        v12 |= 0x8000000000000000uLL;
        *(_DWORD *)(v1 + 28312) |= 1u;
      }
      *(_QWORD *)(v1 + 28288) = v12;
      v12 &= ~0x8000000000000000uLL;
      *(_DWORD *)(v1 + 28312) &= ~2u;
      if ( _bittest((const signed __int32 *)(v11 + 703), 0) )
        *(_DWORD *)(v1 + 28312) ^= 3u;
      _enable();
    }
    if ( (HvlEnlightenments & 1) != 0 )
    {
      HvlSwitchVirtualAddressSpace(v12);
    }
    else
    {
      __writecr3(v12);
      if ( (KiKvaShadow & 1) != 0 && (v12 & 2) == 0 )
      {
        v13 = __readcr4();
        v13 ^= 0x80uLL;
        __writecr4(v13);
        __writecr4(v13 ^ 0x80);
      }
    }
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(v2 + 184) + 8LL * *(unsigned __int8 *)(v1 + 1616) + 280),
      *(unsigned __int8 *)(v1 + 1617));
  }
  v14 = *(_QWORD *)(v3 + 40);
  if ( (KiKvaShadow & 1) != 0 )
    *(_QWORD *)(v1 + 28296) = v14;
  else
    *(_QWORD *)(*(_QWORD *)(v1 - 376) + 4LL) = v14;
  *(_QWORD *)(v1 + 40) = v14;
  if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
    EtwTraceContextSwap(v2, v3);
  v15 = *(_QWORD *)(v3 + 592) | MEMORY[0xFFFFF780000005F0] & *(_QWORD *)(v2 + 592);
  *(_BYTE *)(v2 + 113) = 0;
  _RCX = *(unsigned int **)(v3 + 96);
  v17 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v17 )
  {
    if ( (v7 & 0x20000000000LL) != 0 && (v17 & 1) != 0 )
      __asm { fninit }
    if ( (v7 & 0x4000000000LL) != 0 )
    {
      __asm { xrstors byte ptr [rcx] }
    }
    else if ( (v7 & 0x800000) != 0 )
    {
      _xrstor(_RCX, (unsigned int)v17);
    }
    else
    {
      _fxrstor(_RCX);
    }
  }
  _mm_setcsr(_RCX[6]);
  if ( !_bittest((const signed __int32 *)(v3 + 116), 0xAu) )
  {
    v18 = *(_DWORD *)(v3 + 240) + 0x2000;
    v19 = *(_QWORD *)(v1 - 384);
    *(_WORD *)(v19 + 82) = v18;
    v18 >>= 16;
    *(_BYTE *)(v19 + 84) = v18;
    *(_BYTE *)(v19 + 87) = BYTE1(v18);
    if ( (__GS__ & (unsigned __int16)(__ES__ & __DS__)) != 43 )
    {
      __DS__ = 43;
      _disable();
      __asm { swapgs }
      __asm { swapgs }
      _enable();
    }
    v20 = *(_QWORD *)(v3 + 240);
    v21 = *(_DWORD *)(v3 + 244);
    *(_QWORD *)(v1 - 336) = v20;
    if ( (*(_BYTE *)(v3 + 3) & 0x84) != 0 )
    {
      if ( *(char *)(v3 + 3) >= 0 )
      {
        __writemsr(0xC0000100, *(_QWORD *)(v3 + 1944));
        LODWORD(v20) = *(_DWORD *)(v3 + 1952);
        v21 = *(_DWORD *)(v3 + 1956);
      }
      else
      {
        v22 = *(_QWORD *)(v3 + 496);
        LODWORD(v20) = *(_DWORD *)(v22 + 128);
        v21 = *(_DWORD *)(v22 + 132);
      }
    }
    __writemsr(0xC0000102, __PAIR64__(v21, v20));
  }
  if ( (*(_DWORD *)(v1 + 11756) & 0x10001) != 0 )
    KeBugCheckEx(0xB8u, v2, v3, 0LL, 0LL);
  ++*(_DWORD *)(v3 + 340);
  v23 = *(_BYTE *)(v3 + 193) == 1;
  if ( *(_BYTE *)(v3 + 193) == 1 )
  {
    v23 = (*(_WORD *)(v3 + 486) | v28) == 0;
    if ( *(_WORD *)(v3 + 486) | v28 )
    {
      HalRequestSoftwareInterrupt(1LL);
      return ((unsigned __int64)v27 | v24) == 0;
    }
  }
  return v23;
}
