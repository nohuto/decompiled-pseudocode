/*
 * XREFs of MiTrimSystemImagePages @ 0x1400D41D4
 * Callers:
 *     MiSetPagingOfDriver @ 0x1400D3E3C (MiSetPagingOfDriver.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x140225C38 (MiMakePrototypePteDirect.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // r13
  __int64 *v4; // r15
  __int64 v5; // r11
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v13; // r10
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  volatile signed __int32 *v16; // r14
  unsigned int v17; // edi
  unsigned __int64 v18; // r9
  __int64 v19; // r10
  unsigned __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // r8
  unsigned int v23; // esi
  __int64 v24; // rdi
  __int64 v25; // r8
  ULONG_PTR PteShadow; // rax
  unsigned __int64 v28; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = a2;
  v4 = a1;
  if ( (unsigned __int64)a1 <= a2 )
  {
    v5 = 0x58000000000LL;
    v6 = 0x8000000000000000uLL;
    do
    {
      v7 = *v4;
      if ( (unsigned __int64)(v4 + 0x12090482600LL) <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, a2)
        && (v7 & 1) != 0
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        a2 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( a2 )
        {
          v8 = *(_QWORD *)(a2 + 8 * (((unsigned __int64)v4 >> 3) & 0x1FF));
          if ( (v8 & 0x20) != 0 )
            v7 |= 0x20uLL;
          if ( (v8 & 0x42) != 0 )
            v7 |= 0x42uLL;
        }
      }
      if ( (v7 & 1) == 0 && (v7 & 0x400) != 0 )
      {
        v9 = v7 & 0xFFFFFFFFFFFFFBFEuLL | 1;
        v28 = v9;
        v10 = v9;
        if ( (unsigned __int64)&STACK[0x90482413060] <= 0x7F8 )
        {
          v10 = MiReadPteShadow(&v28, v9);
          v6 = 0x8000000000000000uLL;
        }
        v11 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - v5;
        if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
        {
          PrototypePteDirect = MiMakePrototypePteDirect(v6 | *(_QWORD *)(v11 + 8));
          if ( (v14 & *(_QWORD *)(v11 + 8)) == 0 )
            PrototypePteDirect |= 0x800uLL;
        }
        else
        {
          if ( (unsigned __int64)&STACK[0x90482413060] <= 0x7F8 )
            v9 = MiReadPteShadow(&v28, v9);
          PrototypePteDirect = MiMakeTransitionPte((v9 >> 12) & 0xFFFFFFFFFLL, (*(_DWORD *)(v11 + 16) >> 5) & 0x1F);
        }
        *v4 = PrototypePteDirect;
        if ( v13 <= 0x7F8 )
          MiWritePteShadow(v4, PrototypePteDirect);
        v15 = 0LL;
        v16 = (volatile signed __int32 *)(v11 + 24);
        v17 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v17);
          }
          while ( (*(_QWORD *)v16 & 0x8000000000000000uLL) != 0 || _interlockedbittestandset64(v16, 0x3FuLL) );
        }
        *(_BYTE *)(v11 + 35) &= ~8u;
        if ( (v28 & 0x42) != 0 )
          v15 = MiCaptureDirtyBitToPfn(v11);
        if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
        {
          v18 = 2040LL;
          v19 = (((unsigned __int64)v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v20 = *(_QWORD *)v19;
          if ( (*(_QWORD *)v19 & 1) == 0 )
          {
            PteShadow = *(_QWORD *)v19;
            if ( (unsigned __int64)(v19 + 0x90482413000LL) <= 0x7F8 )
              PteShadow = MiReadPteShadow((((unsigned __int64)v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v20);
            KeBugCheckEx(0x1Au, 0x61940uLL, v19 << 25 >> 16, PteShadow, 0LL);
          }
          if ( (unsigned __int64)(v19 + 0x90482413000LL) <= 0x7F8 )
            v20 = MiReadPteShadow((((unsigned __int64)v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *(_QWORD *)v19);
          v28 = v20;
          if ( (unsigned __int64)&STACK[0x90482413060] <= v18 )
            v20 = MiReadPteShadow(&v28, v20);
          v21 = (v20 >> 12) & 0xFFFFFFFFFLL;
        }
        else
        {
          v21 = -1LL;
        }
        *(_BYTE *)(v11 + 35) = *(_BYTE *)(v11 + 35) & 0xF8 | 2;
        if ( (*(_BYTE *)(v11 + 34) & 7) != 6 )
          KeBugCheckEx(
            0x4Eu,
            0x99uLL,
            (v11 + 0x58000000000LL) / 48,
            *(_BYTE *)(v11 + 34) & 7,
            *(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        a2 = *(_QWORD *)v16;
        v22 = (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) - 1;
        *(_QWORD *)v16 ^= (v22 ^ *(_QWORD *)v16) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v22 )
          MiPfnShareCountIsZero(v11, 0LL);
        if ( v21 != -1 )
        {
          _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
          v23 = 0;
          v24 = 48 * v21 - 0x58000000000LL;
          v16 = (volatile signed __int32 *)(v24 + 24);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v23);
            }
            while ( (*(_QWORD *)v16 & 0x8000000000000000uLL) != 0 || _interlockedbittestandset64(v16, 0x3FuLL) );
          }
          if ( (*(_BYTE *)(v24 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v24 + 0x58000000000LL) / 48,
              *(_BYTE *)(v24 + 34) & 7,
              *(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          a2 = *(_QWORD *)v16;
          v25 = (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) - 1;
          *(_QWORD *)v16 ^= (v25 ^ *(_QWORD *)v16) & 0x3FFFFFFFFFFFFFFFLL;
          if ( !v25 )
            MiPfnShareCountIsZero(v24, 0LL);
        }
        _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
        if ( v15 )
          MiReleasePageFileInfo(MiSystemPartition, v15, 1LL);
        ++v2;
        v5 = 0x58000000000LL;
        v6 = 0x8000000000000000uLL;
      }
      ++v4;
    }
    while ( (unsigned __int64)v4 <= v3 );
  }
  return v2;
}
