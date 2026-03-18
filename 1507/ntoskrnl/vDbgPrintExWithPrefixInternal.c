/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x140131F0C
 * Callers:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     vDbgPrintEx @ 0x140131EE4 (vDbgPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x14015C894 (vDbgPrintExWithPrefix.c)
 *     IopDebugPrint @ 0x1401FB284 (IopDebugPrint.c)
 *     DbgPrintReturnControlC @ 0x1402465C0 (DbgPrintReturnControlC.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     NtQueryDebugFilterState @ 0x14013204C (NtQueryDebugFilterState.c)
 *     RtlStringCbVPrintfA @ 0x140153E70 (RtlStringCbVPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x14018B3C0 (DbgBreakPointWithStatus.c)
 *     DebugPrint @ 0x14018B3D0 (DebugPrint.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternal(
        _BYTE *Src,
        ULONG ComponentId,
        ULONG Level,
        NTSTRSAFE_PCSTR pszFormat,
        va_list argList,
        char a6)
{
  __int64 result; // rax
  char *v11; // rbx
  NTSTATUS v12; // eax
  unsigned int v13; // edi
  size_t v14; // rsi
  __int64 v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rdi
  unsigned __int8 CurrentIrql; // r14
  int v18; // ett
  _UNKNOWN **v19; // rbx
  struct _EX_RUNDOWN_REF *v20; // rsi
  struct _EX_RUNDOWN_REF *v21; // rcx
  unsigned __int64 v22; // rtt
  void (__fastcall *Count)(__int16 *, _QWORD, _QWORD); // rbx
  unsigned __int64 v24; // rtt
  int v25; // ett
  unsigned __int64 v26; // rtt
  char v27[96]; // [rsp+0h] [rbp-80h] BYREF
  NTSTATUS v28; // [rsp+80h] [rbp+0h]
  __int16 v29; // [rsp+90h] [rbp+10h] BYREF
  char *v30; // [rsp+98h] [rbp+18h]
  size_t v31; // [rsp+A0h] [rbp+20h]
  void *retaddr; // [rsp+D8h] [rbp+58h]

  if ( !NtQueryDebugFilterState(ComponentId, Level) )
    return 0LL;
  v11 = 0LL;
  v12 = 0;
  v28 = 0;
  v13 = 0;
  do
  {
    if ( v13 >= 0x200 )
      break;
    v11 = v27;
    v13 += 128;
    v14 = -1LL;
    do
      ++v14;
    while ( Src[v14] );
    if ( v14 > v13 - 1 )
      v14 = v13 - 1;
    v31 = v14;
    memmove(v27, Src, v14);
    v12 = RtlStringCbVPrintfA(&v27[v14], v13 - v14, pszFormat, argList);
    v28 = v12;
    if ( v12 >= 0 )
      break;
  }
  while ( v12 == -2147483643 );
  if ( v12 == -2147483643 )
  {
    v11[v13 - 2] = 10;
    LOWORD(v15) = v13 - 1;
    v11[v13 - 1] = 0;
  }
  else
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v11[v15] );
  }
  v30 = v11;
  v29 = v15;
  if ( (KiBugCheckActive & 3) == 0 && RtlpDebugPrintCallbacksActive == 1 )
  {
    v16 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 0xCu )
      __writecr8(0xCuLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&RtlpDebugPrintCallbackLock);
    }
    else
    {
      _m_prefetchw(&RtlpDebugPrintCallbackLock);
      v18 = RtlpDebugPrintCallbackLock & 0x7FFFFFFF;
      if ( v18 != _InterlockedCompareExchange(
                    &RtlpDebugPrintCallbackLock,
                    (RtlpDebugPrintCallbackLock & 0x7FFFFFFF) + 1,
                    RtlpDebugPrintCallbackLock & 0x7FFFFFFF) )
        ExpWaitForSpinLockSharedAndAcquire(&RtlpDebugPrintCallbackLock);
    }
    v19 = (_UNKNOWN **)RtlpDebugPrintCallbackList;
    if ( RtlpDebugPrintCallbackList != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    {
      do
      {
        v20 = (struct _EX_RUNDOWN_REF *)(v19 - 3);
        v21 = (struct _EX_RUNDOWN_REF *)(v19 - 2);
        _m_prefetchw(v21);
        v22 = v21->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v22 == _InterlockedCompareExchange64((volatile signed __int64 *)v21, v22 + 2, v22)
          || ExfAcquireRundownProtection(v21) )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&RtlpDebugPrintCallbackLock, retaddr);
          }
          else
          {
            _InterlockedAnd(&RtlpDebugPrintCallbackLock, 0xBFFFFFFF);
            _InterlockedDecrement(&RtlpDebugPrintCallbackLock);
          }
          Count = (void (__fastcall *)(__int16 *, _QWORD, _QWORD))v20[2].Count;
          if ( v16 )
          {
            _m_prefetchw(&v16[1]);
            v24 = v16[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&v16[1], v24 - 2, v24) )
              ExfReleaseRundownProtection(v16 + 1);
          }
          v16 = v20;
          Count(&v29, ComponentId, Level);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&RtlpDebugPrintCallbackLock);
          }
          else
          {
            _m_prefetchw(&RtlpDebugPrintCallbackLock);
            v25 = RtlpDebugPrintCallbackLock & 0x7FFFFFFF;
            if ( v25 != _InterlockedCompareExchange(
                          &RtlpDebugPrintCallbackLock,
                          (RtlpDebugPrintCallbackLock & 0x7FFFFFFF) + 1,
                          RtlpDebugPrintCallbackLock & 0x7FFFFFFF) )
              ExpWaitForSpinLockSharedAndAcquire(&RtlpDebugPrintCallbackLock);
          }
          v19 = (_UNKNOWN **)v20[3].Count;
        }
        else
        {
          v19 = (_UNKNOWN **)*v19;
        }
      }
      while ( v19 != &RtlpDebugPrintCallbackList );
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&RtlpDebugPrintCallbackLock, retaddr);
    }
    else
    {
      _InterlockedAnd(&RtlpDebugPrintCallbackLock, 0xBFFFFFFF);
      _InterlockedDecrement(&RtlpDebugPrintCallbackLock);
    }
    if ( v16 )
    {
      _m_prefetchw(&v16[1]);
      v26 = v16[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v26 != _InterlockedCompareExchange64((volatile signed __int64 *)&v16[1], v26 - 2, v26) )
        ExfReleaseRundownProtection(v16 + 1);
    }
    if ( CurrentIrql < 0xCu )
      __writecr8(CurrentIrql);
  }
  result = DebugPrint(&v29, ComponentId, Level);
  if ( (_DWORD)result == -2147483645 && a6 == 1 )
  {
    DbgBreakPointWithStatus(1u);
    return 0LL;
  }
  return result;
}
