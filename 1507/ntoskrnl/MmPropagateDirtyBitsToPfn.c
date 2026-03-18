/*
 * XREFs of MmPropagateDirtyBitsToPfn @ 0x140086C80
 * Callers:
 *     CcUnmapVacbArray @ 0x140086690 (CcUnmapVacbArray.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MmPropagateDirtyBitsToPfn(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // r8
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // rbp
  unsigned __int8 CurrentIrql; // r15
  unsigned int v17; // esi
  __int16 *v18; // rsi
  unsigned __int64 v19; // r10
  __int64 PteShadow; // rax
  __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  v2 = 0x7FFFFFFFF8LL;
  result = 0x98000000000LL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = (((a1 + 0x3FFFF) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFFFFFFLL;
  v7 = v4 + 0x90482413000LL;
  do
  {
    v8 = *(_QWORD *)v4;
    if ( v7 <= 0x7F8 )
    {
      result = MiPteHasShadow(0x90482413000LL, v2);
      if ( (_DWORD)result )
      {
        if ( (v8 & 1) != 0 && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
        {
          result = (__int64)KeGetCurrentThread();
          v2 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1520LL);
          if ( v2 )
          {
            result = *(_QWORD *)(v2 + 8 * ((v4 >> 3) & 0x1FF));
            if ( (result & 0x20) != 0 )
              v8 |= 0x20uLL;
            if ( (result & 0x42) != 0 )
              v8 |= 0x42uLL;
          }
        }
      }
    }
    v21 = v8;
    if ( (v8 & 1) == 0 || (v8 & 0x42) == 0 )
      goto LABEL_39;
    v9 = 0LL;
    v10 = v8;
    if ( (unsigned __int64)&STACK[0x90482413058] <= 0x7F8 )
    {
      if ( (unsigned int)MiPteHasShadow(0x90482413000LL, v2) )
      {
        if ( (v8 & 0x20) == 0 )
        {
          v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v11 )
          {
            v12 = *(_QWORD *)(v11 + 8 * (((unsigned __int64)&v21 >> 3) & 0x1FF));
            if ( (v12 & 0x20) != 0 )
              v10 |= 0x20uLL;
            if ( (v12 & 0x42) != 0 )
              v10 |= 0x42uLL;
          }
        }
      }
    }
    result = MI_IS_PFN(v6 & (v10 >> 12));
    if ( (_DWORD)result )
    {
      v15 = 48 * v13 - v14;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v17 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v17);
        }
        while ( (*(_QWORD *)(v15 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
      }
      v18 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v15 + 40)) >> 8) & 0x3FF);
      PteShadow = *(_QWORD *)v4;
      if ( v7 <= 0x7F8 )
        PteShadow = MiReadPteShadow(v4, *(_QWORD *)v4);
      if ( PteShadow != v8 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), v19);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        goto LABEL_40;
      }
      if ( (*(_BYTE *)(v15 + 34) & 0x10) == 0 || (*(_DWORD *)(v15 + 16) & 0x400LL) == 0 )
      {
        v9 = MiCaptureDirtyBitToPfn(v15);
        v19 = 0x7FFFFFFFFFFFFFFFLL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), v19);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      if ( v9 )
        result = MiReleasePageFileInfo(v18, v9, 0LL);
LABEL_39:
      v4 += 8LL;
      v7 += 8LL;
    }
LABEL_40:
    v6 = 0xFFFFFFFFFLL;
  }
  while ( v4 <= v5 );
  return result;
}
