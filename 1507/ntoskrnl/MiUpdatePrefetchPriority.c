/*
 * XREFs of MiUpdatePrefetchPriority @ 0x140124004
 * Callers:
 *     MiValidFault @ 0x14005B5E0 (MiValidFault.c)
 *     MiPrefetchJumpVad @ 0x140219414 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiUpdatePfnPriority @ 0x140080A64 (MiUpdatePfnPriority.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall MiUpdatePrefetchPriority(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // esi
  unsigned __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r11
  unsigned int v10; // edi
  ULONG_PTR v11; // rbx
  int v12; // eax
  unsigned __int8 v13; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned int v15; // edi
  char v16; // al
  int v17; // eax
  unsigned __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  v18 = a3;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 80) & 7;
  if ( (a3 & 1) == 0 )
  {
    v11 = 48 * (((unsigned __int64)MiReverseSwizzleInvalidPte(a3, a2, a3, a4) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v15 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
      while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
    }
    v16 = *(_BYTE *)(v11 + 35);
    v13 = CurrentIrql;
    if ( (v16 & 8) != 0 )
      v17 = 5;
    else
      v17 = v16 & 7;
    if ( v17 == v5 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = CurrentIrql;
      goto LABEL_21;
    }
LABEL_20:
    MiUpdatePfnPriority(v11, v5, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = v13;
LABEL_21:
    __writecr8(result);
    return result;
  }
  if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8 )
    v4 = MiReadPteShadow(&v18, a3);
  result = MI_IS_PFN((v4 >> 12) & 0xFFFFFFFFFLL);
  v10 = 0;
  if ( (_DWORD)result )
  {
    v11 = 48 * v8 - 0x58000000000LL;
    result = *(_BYTE *)(v11 + 35) & 7;
    if ( (_DWORD)result != v5 )
    {
      if ( v7 )
      {
        v12 = *(_DWORD *)(v7 + 48);
      }
      else
      {
        if ( !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[3] && !MEMORY[0xFFFFF58010804220] )
        {
LABEL_13:
          v13 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v10);
            }
            while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
          }
          goto LABEL_20;
        }
        result = (unsigned __int64)MiLocateAddress(v9);
        if ( !result )
          return result;
        v12 = *(_DWORD *)(result + 48);
      }
      result = (v12 & 7u) - 1;
      if ( (result & 0xFFFFFFFD) == 0 )
        return result;
      goto LABEL_13;
    }
  }
  return result;
}
