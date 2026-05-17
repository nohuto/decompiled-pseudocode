/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x1800353E0
 * Callers:
 *     LdrpCorInitialize @ 0x1800032D8 (LdrpCorInitialize.c)
 *     RtlExpandEnvironmentStrings @ 0x1800385A0 (RtlExpandEnvironmentStrings.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180046AD0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpComputePath @ 0x180067D58 (RtlpComputePath.c)
 *     RtlGetExePath @ 0x180077210 (RtlGetExePath.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpCheckPseudoEnvironmentVariable @ 0x1800355E8 (RtlpCheckPseudoEnvironmentVariable.c)
 *     RtlpQueryEnvironmentCache @ 0x180035688 (RtlpQueryEnvironmentCache.c)
 *     RtlpScanEnvironment @ 0x180035B00 (RtlpScanEnvironment.c)
 */

__int64 __fastcall RtlQueryEnvironmentVariable(_WORD *a1, wchar_t *a2, size_t a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int v10; // ebx
  __int64 v11; // r15
  __int64 result; // rax
  __int64 v13; // rsi
  _PEB *ProcessEnvironmentBlock; // rdx
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  unsigned int v16; // [rsp+40h] [rbp-28h]
  struct _TEB *v17; // [rsp+48h] [rbp-20h]
  _WORD *Environment; // [rsp+80h] [rbp+18h] BYREF

  v17 = NtCurrentTeb();
  v10 = 0;
  v11 = (__int64)a6;
  *a6 = 0LL;
  if ( !a3 )
    return 3221225728LL;
  result = RtlpCheckPseudoEnvironmentVariable(a2, a3, v11);
  if ( (_DWORD)result == -1073741568 )
  {
    if ( a1 )
    {
      Environment = a1;
      if ( !*a1 )
        return 3221225728LL;
      ProcessEnvironmentBlock = v17->ProcessEnvironmentBlock;
      if ( ProcessEnvironmentBlock->ProcessParameters->Environment == a1 )
      {
        FastPebLock = ProcessEnvironmentBlock->FastPebLock;
        if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
        {
          result = RtlpQueryEnvironmentCache(&Environment, a2, a3, a4, a5, v11);
          if ( (_DWORD)result != -1073741568 )
            return result;
          v10 = 1;
        }
      }
      return RtlpScanEnvironment(Environment, a2, a3, a4, a5, v11, v10);
    }
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = v17->ProcessEnvironmentBlock->ProcessParameters->Environment;
    v13 = a5;
    v16 = RtlpQueryEnvironmentCache(&Environment, a2, a3, a4, a5, v11);
    if ( v16 == -1073741568 )
      v16 = RtlpScanEnvironment(Environment, a2, a3, a4, v13, v11, 1);
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    return v16;
  }
  return result;
}
