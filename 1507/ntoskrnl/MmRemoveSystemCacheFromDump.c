/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x140218A3C
 * Callers:
 *     MmGetDumpRange @ 0x140218834 (MmGetDumpRange.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403FFB28 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MmRemoveSystemCacheFromDump(__int64 Process)
{
  __int64 result; // rax
  ULONG_PTR v2; // rbp
  __int64 v3; // r14
  unsigned __int8 CurrentIrql; // di
  signed __int32 v5; // ett
  unsigned __int64 v6; // rsi
  unsigned __int64 i; // rbx
  __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 *v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  result = (unsigned int)KiBugCheckActive;
  v2 = BugCheckParameter2;
  v3 = Process;
  if ( (KiBugCheckActive & 3) != 0 || (result = (__int64)KeGetCurrentThread(), qword_14034F148 == result) )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      result = ExpAcquireSpinLockSharedAtDpcLevelInstrumented(dword_14034FD40);
    }
    else
    {
      _m_prefetchw(dword_14034FD40);
      Process = (dword_14034FD40[0] & 0x7FFFFFFFu) + 1;
      v5 = dword_14034FD40[0] & 0x7FFFFFFF;
      result = (unsigned int)_InterlockedCompareExchange(dword_14034FD40, Process, dword_14034FD40[0] & 0x7FFFFFFF);
      if ( v5 != (_DWORD)result )
        result = ExpWaitForSpinLockSharedAndAcquire(dword_14034FD40);
    }
  }
  v6 = *(_QWORD *)(v2 + 16);
  for ( i = 1LL; i <= v6; ++i )
  {
    result = *(_QWORD *)(v2 + 496) + i * *(unsigned int *)(v2 + 64);
    v8 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 1) != 0 )
    {
      if ( (v8 & 0x800000000000LL) != 0 )
        v9 = v8 | 0xFFFF000000000000uLL;
      else
        v9 = v8 & 0xFFFFFFFFFFFFLL;
      v10 = (unsigned __int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v11 = *v10;
      result = (__int64)(v10 + 0x12090482600LL);
      if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8 )
      {
        result = MiPteHasShadow(Process, v11);
        if ( (_DWORD)result )
        {
          if ( (v11 & 1) != 0 && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            result = *(_QWORD *)(Process + 1520);
            if ( result )
            {
              result = *(_QWORD *)(result + 8 * ((v12 >> 3) & 0x1FF));
              if ( (result & 0x20) != 0 )
                v11 |= 0x20uLL;
              if ( (result & 0x42) != 0 )
                v11 |= 0x42uLL;
            }
          }
        }
      }
      v15 = v11;
      if ( (v11 & 1) != 0 )
      {
        if ( (unsigned __int64)&STACK[0x90482413058] <= 0x7F8 )
          v11 = MiReadPteShadow(&v15, v11);
        v13 = (v11 >> 12) & 0xFFFFFFFFFLL;
        result = 0x3FFFFFFFFFFFFFFFLL;
        Process = *(_QWORD *)(48 * v13 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL;
        if ( Process == 1 )
          result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v3 + 8))(v3, v13, 1LL, 2LL);
      }
    }
  }
  if ( CurrentIrql != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(dword_14034FD40, retaddr);
    }
    else
    {
      _InterlockedAnd(dword_14034FD40, 0xBFFFFFFF);
      _InterlockedDecrement(dword_14034FD40);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
