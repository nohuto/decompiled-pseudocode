// see https://github.com/nohuto/windbg-notes/blob/main/assets/SwapContext.c for a decompilation attempt

/*
 * XREFs of SwapContext @ 0x14015ABD0
 * Callers:
 *     KiIdleLoop @ 0x140157220 (KiIdleLoop.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x14015AA10 (KxDispatchInterrupt.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     EtwTraceContextSwap @ 0x14011EA60 (EtwTraceContextSwap.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14022153C (HvlSwitchVirtualAddressSpace.c)
 */

bool __fastcall SwapContext(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  ULONG_PTR v4; // rdi
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  ULONG_PTR v9; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // r8
  unsigned int v23; // eax
  bool v24; // zf
  __int64 v25; // rcx
  unsigned int v27; // ebp
  _BYTE v28[32]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v29; // [rsp+28h] [rbp-10h]

  _m_prefetchw((const void *)(v5 + 113));
  v29 = a1;
  if ( *(_BYTE *)(v5 + 113) )
  {
    v27 = 0;
    do
    {
      if ( (++v27 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        HvlNotifyLongSpinWait(v27, a2, a3);
      _mm_pause();
    }
    while ( *(_BYTE *)(v5 + 113) );
  }
  *(_BYTE *)(v5 + 113) = 1;
  _disable();
  v6 = __rdtsc();
  v7 = (((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) - *(_QWORD *)(v3 + 23352);
  *(_QWORD *)(v3 + 23544) += v7;
  *(_QWORD *)(v3 + 23352) += v7;
  v8 = v7;
  if ( *(_BYTE *)(v3 + 6) )
  {
    *(_BYTE *)(v3 + 6) = 0;
    if ( *(_QWORD *)(v3 + 24) != v5 )
      HalRequestSoftwareInterrupt(2LL);
  }
  if ( (*(_BYTE *)(v5 + 2) & 0x36) != 0 )
  {
    KiBeginThreadAccountingPeriod(v3, (struct _KTHREAD *)v5, v8);
  }
  else
  {
    --*(_BYTE *)(v3 + 32);
    _enable();
  }
  ++*(_DWORD *)(v3 + 11452);
  v9 = KeFeatureBits;
  _RCX = *(_DWORD **)(v4 + 96);
  v11 = *(_QWORD *)(v4 + 592) & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v11 )
  {
    if ( (KeFeatureBits & 0x4000000000LL) != 0 )
    {
      __asm { xsaves  byte ptr [rcx] }
    }
    else if ( (KeFeatureBits & 0x8000) != 0 )
    {
      _xsaveopt(_RCX, (unsigned int)v11);
    }
    else if ( (KeFeatureBits & 0x800000) != 0 )
    {
      _xsave(_RCX, (unsigned int)v11);
    }
    else
    {
      _fxsave(_RCX);
    }
  }
  _RCX[6] = _mm_getcsr();
  *(_QWORD *)(v4 + 88) = v28;
  if ( *(char *)(v4 + 3) < 0 )
    *(_QWORD *)(*(_QWORD *)(v4 + 496) + 128LL) = __readmsr(0xC0000102);
  v12 = *(_QWORD *)(v5 + 184);
  if ( v12 != *(_QWORD *)(v4 + 184) )
  {
    _interlockedbittestandset64(
      (volatile signed __int32 *)(v12 + 8LL * *(unsigned __int8 *)(v3 + 1616) + 280),
      *(unsigned __int8 *)(v3 + 1617));
    v13 = *(_QWORD *)(v12 + 40);
    if ( (KiKvaShadow & 1) != 0 )
    {
      _disable();
      if ( (v13 & 2) != 0 )
      {
        v13 |= 0x8000000000000000uLL;
        *(_DWORD *)(v3 + 28312) |= 1u;
      }
      *(_QWORD *)(v3 + 28288) = v13;
      v13 &= ~0x8000000000000000uLL;
      *(_DWORD *)(v3 + 28312) &= ~2u;
      if ( _bittest((const signed __int32 *)(v12 + 640), 0) )
        *(_DWORD *)(v3 + 28312) ^= 3u;
      _enable();
    }
    if ( (HvlEnlightenments & 1) != 0 )
    {
      HvlSwitchVirtualAddressSpace(v13);
    }
    else
    {
      __writecr3(v13);
      if ( (KiKvaShadow & 1) != 0 && (v13 & 2) == 0 )
      {
        v14 = __readcr4();
        v14 ^= 0x80uLL;
        __writecr4(v14);
        __writecr4(v14 ^ 0x80);
      }
    }
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(v4 + 184) + 8LL * *(unsigned __int8 *)(v3 + 1616) + 280),
      *(unsigned __int8 *)(v3 + 1617));
  }
  v15 = *(_QWORD *)(v5 + 40);
  if ( (KiKvaShadow & 1) != 0 )
    *(_QWORD *)(v3 + 28296) = v15;
  else
    *(_QWORD *)(*(_QWORD *)(v3 - 376) + 4LL) = v15;
  *(_QWORD *)(v3 + 40) = v15;
  if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
    EtwTraceContextSwap(v4, v5);
  *(_BYTE *)(v4 + 113) = 0;
  _RCX = *(unsigned int **)(v5 + 96);
  v17 = (*(_QWORD *)(v5 + 592) | MEMORY[0xFFFFF780000005F0] & *(_QWORD *)(v4 + 592)) & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v17 )
  {
    if ( (v9 & 0x20000000000LL) != 0 && (v17 & 1) != 0 )
      __asm { fninit }
    if ( (v9 & 0x4000000000LL) != 0 )
    {
      __asm { xrstors byte ptr [rcx] }
    }
    else if ( (v9 & 0x800000) != 0 )
    {
      _xrstor(_RCX, (unsigned int)v17);
    }
    else
    {
      _fxrstor(_RCX);
    }
  }
  _mm_setcsr(_RCX[6]);
  if ( !_bittest((const signed __int32 *)(v5 + 116), 0xAu) )
  {
    v18 = *(_DWORD *)(v5 + 240) + 0x2000;
    v19 = *(_QWORD *)(v3 - 384);
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
    v20 = *(_QWORD *)(v5 + 240);
    v21 = *(_DWORD *)(v5 + 244);
    *(_QWORD *)(v3 - 336) = v20;
    if ( (*(_BYTE *)(v5 + 3) & 0x84) != 0 )
    {
      if ( *(char *)(v5 + 3) >= 0 )
      {
        v23 = *(_DWORD *)(v5 + 1936);
        *(_WORD *)(v19 + 82) = v23;
        v23 >>= 16;
        *(_BYTE *)(v19 + 84) = v23;
        *(_BYTE *)(v19 + 87) = BYTE1(v23);
        LODWORD(v20) = *(_DWORD *)(v5 + 1944);
        v21 = *(_DWORD *)(v5 + 1948);
      }
      else
      {
        v22 = *(_QWORD *)(v5 + 496);
        LODWORD(v20) = *(_DWORD *)(v22 + 128);
        v21 = *(_DWORD *)(v22 + 132);
      }
    }
    __writemsr(0xC0000102, __PAIR64__(v21, v20));
  }
  if ( (*(_DWORD *)(v3 + 11756) & 0x10001) != 0 )
    KeBugCheckEx(0xB8u, v4, v5, 0LL, 0LL);
  ++*(_DWORD *)(v5 + 340);
  v24 = *(_BYTE *)(v5 + 193) == 1;
  if ( *(_BYTE *)(v5 + 193) == 1 )
  {
    v24 = (*(_WORD *)(v5 + 486) | v29) == 0;
    if ( *(_WORD *)(v5 + 486) | v29 )
    {
      HalRequestSoftwareInterrupt(1LL);
      return ((unsigned __int64)v28 | v25) == 0;
    }
  }
  return v24;
}
