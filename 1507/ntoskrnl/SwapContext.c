// see https://github.com/nohuto/windbg-notes/blob/main/assets/SwapContext.c for a decompilation attempt

/*
 * XREFs of SwapContext @ 0x14018A640
 * Callers:
 *     KiIdleLoop @ 0x140186810 (KiIdleLoop.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x14018A480 (KxDispatchInterrupt.c)
 * Callees:
 *     EtwTraceContextSwap @ 0x140017470 (EtwTraceContextSwap.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiUpdateSpeculationControl @ 0x140208FA0 (KiUpdateSpeculationControl.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140270914 (HvlSwitchVirtualAddressSpace.c)
 */

bool __fastcall SwapContext(unsigned __int8 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rdx
  ULONG64 v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // r8
  unsigned int v20; // eax
  bool v21; // zf
  __int64 v22; // rcx
  unsigned int v24; // ebp
  _BYTE v25[32]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v26; // [rsp+28h] [rbp-10h]

  _m_prefetchw((const void *)(v3 + 113));
  v26 = a1;
  if ( *(_BYTE *)(v3 + 113) )
  {
    v24 = 0;
    do
    {
      if ( (++v24 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        HvlNotifyLongSpinWait(v24);
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
  if ( *(_BYTE *)(v1 + 6) )
  {
    *(_BYTE *)(v1 + 6) = 0;
    if ( *(_QWORD *)(v1 + 24) != v3 )
      HalRequestSoftwareInterrupt(2LL);
  }
  if ( (*(_BYTE *)(v3 + 2) & 0x36) != 0 )
  {
    KiBeginThreadAccountingPeriod(v1, (struct _KTHREAD *)v3);
  }
  else
  {
    --*(_BYTE *)(v1 + 32);
    _enable();
  }
  ++*(_DWORD *)(v1 + 11452);
  _RCX = *(_QWORD *)(v2 + 96);
  v7 = *(_QWORD *)(v2 + 592) & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v7 )
  {
    if ( _bittest64((const signed __int64 *)&KeFeatureBits, 0x26u) )
    {
      __asm { xsaves  byte ptr [rcx] }
    }
    else if ( _bittest64((const signed __int64 *)&KeFeatureBits, 0xFu) )
    {
      _xsaveopt((void *)_RCX, (unsigned int)v7);
    }
    else if ( _bittest64((const signed __int64 *)&KeFeatureBits, 0x17u) )
    {
      _xsave((void *)_RCX, (unsigned int)v7);
    }
    else
    {
      _fxsave((void *)_RCX);
    }
    if ( (v7 & 1) != 0 )
    {
      if ( (*(_WORD *)(_RCX + 2) & 0x80) != 0 )
        __asm { fnclex }
      __asm
      {
        ffree   st(7)
        fild    dword ptr [rcx]
      }
    }
  }
  *(_DWORD *)(_RCX + 24) = _mm_getcsr();
  *(_QWORD *)(v2 + 88) = v25;
  if ( *(char *)(v2 + 3) < 0 )
  {
    v8 = __readmsr(0xC0000102);
    if ( v8 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    *(_QWORD *)(*(_QWORD *)(v2 + 496) + 128LL) = v8;
  }
  if ( *(_QWORD *)(v3 + 544) != *(_QWORD *)(v2 + 544) )
    KiUpdateSpeculationControl();
  v9 = *(_QWORD *)(v3 + 184);
  if ( v9 != *(_QWORD *)(v2 + 184) )
  {
    _interlockedbittestandset64(
      (volatile signed __int32 *)(v9 + 8LL * *(unsigned __int8 *)(v1 + 1616) + 280),
      *(unsigned __int8 *)(v1 + 1617));
    v10 = *(_QWORD *)(v9 + 40);
    if ( (KiKvaShadow & 1) != 0 )
    {
      _disable();
      if ( (v10 & 2) != 0 )
      {
        v10 |= 0x8000000000000000uLL;
        *(_DWORD *)(v1 + 28312) |= 1u;
      }
      *(_QWORD *)(v1 + 28288) = v10;
      v10 &= ~0x8000000000000000uLL;
      *(_DWORD *)(v1 + 28312) &= ~2u;
      if ( _bittest((const signed __int32 *)(v9 + 640), 0) )
        *(_DWORD *)(v1 + 28312) ^= 3u;
      _enable();
    }
    if ( (HvlEnlightenments & 1) != 0 )
    {
      HvlSwitchVirtualAddressSpace(v10);
    }
    else
    {
      __writecr3(v10);
      if ( (KiKvaShadow & 1) != 0 && (v10 & 2) == 0 )
      {
        v11 = __readcr4();
        v11 ^= 0x80uLL;
        __writecr4(v11);
        __writecr4(v11 ^ 0x80);
      }
    }
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(v2 + 184) + 8LL * *(unsigned __int8 *)(v1 + 1616) + 280),
      *(unsigned __int8 *)(v1 + 1617));
  }
  v12 = *(_QWORD *)(v3 + 40);
  if ( (KiKvaShadow & 1) != 0 )
    *(_QWORD *)(v1 + 28296) = v12;
  else
    *(_QWORD *)(*(_QWORD *)(v1 - 376) + 4LL) = v12;
  *(_QWORD *)(v1 + 40) = v12;
  if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
    EtwTraceContextSwap(v2, v3);
  *(_BYTE *)(v2 + 113) = 0;
  _RCX = *(unsigned int **)(v3 + 96);
  v14 = *(_QWORD *)(v3 + 592) & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v14 )
  {
    if ( _bittest64((const signed __int64 *)&KeFeatureBits, 0x26u) )
    {
      __asm { xrstors byte ptr [rcx] }
    }
    else if ( _bittest64((const signed __int64 *)&KeFeatureBits, 0x17u) )
    {
      _xrstor(_RCX, (unsigned int)v14);
    }
    else
    {
      _fxrstor(_RCX);
    }
  }
  _mm_setcsr(_RCX[6]);
  if ( !_bittest((const signed __int32 *)(v3 + 116), 0xAu) )
  {
    v15 = *(_DWORD *)(v3 + 240) + 0x2000;
    v16 = *(_QWORD *)(v1 - 384);
    *(_WORD *)(v16 + 82) = v15;
    v15 >>= 16;
    *(_BYTE *)(v16 + 84) = v15;
    *(_BYTE *)(v16 + 87) = BYTE1(v15);
    if ( (__GS__ & (unsigned __int16)(__ES__ & __DS__)) != 43 )
    {
      __DS__ = 43;
      _disable();
      __asm { swapgs }
      __asm { swapgs }
      _enable();
    }
    v17 = *(_QWORD *)(v3 + 240);
    v18 = *(_DWORD *)(v3 + 244);
    *(_QWORD *)(v1 - 336) = v17;
    if ( (*(_BYTE *)(v3 + 3) & 0x84) != 0 )
    {
      if ( *(char *)(v3 + 3) >= 0 )
      {
        v20 = *(_DWORD *)(v3 + 1936);
        *(_WORD *)(v16 + 82) = v20;
        v20 >>= 16;
        *(_BYTE *)(v16 + 84) = v20;
        *(_BYTE *)(v16 + 87) = BYTE1(v20);
        LODWORD(v17) = *(_DWORD *)(v3 + 1944);
        v18 = *(_DWORD *)(v3 + 1948);
      }
      else
      {
        v19 = *(_QWORD *)(v3 + 496);
        LODWORD(v17) = *(_DWORD *)(v19 + 128);
        v18 = *(_DWORD *)(v19 + 132);
      }
    }
    __writemsr(0xC0000102, __PAIR64__(v18, v17));
  }
  if ( (*(_DWORD *)(v1 + 11756) & 0x10001) != 0 )
    KeBugCheckEx(0xB8u, v2, v3, 0LL, 0LL);
  ++*(_DWORD *)(v3 + 340);
  v21 = *(_BYTE *)(v3 + 193) == 1;
  if ( *(_BYTE *)(v3 + 193) == 1 )
  {
    v21 = (*(_WORD *)(v3 + 486) | v26) == 0;
    if ( *(_WORD *)(v3 + 486) | v26 )
    {
      HalRequestSoftwareInterrupt(1LL);
      return ((unsigned __int64)v25 | v22) == 0;
    }
  }
  return v21;
}
