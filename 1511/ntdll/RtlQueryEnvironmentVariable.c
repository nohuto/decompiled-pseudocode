/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x18002EB50
 * Callers:
 *     RtlExpandEnvironmentStrings @ 0x180049050 (RtlExpandEnvironmentStrings.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004DB80 (RtlQueryEnvironmentVariable_U.c)
 *     LdrpCorInitialize @ 0x18004EBB0 (LdrpCorInitialize.c)
 *     RtlpComputePath @ 0x180072FAC (RtlpComputePath.c)
 *     RtlGetExePath @ 0x180082CC0 (RtlGetExePath.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpQueryEnvironmentCache @ 0x18002EE74 (RtlpQueryEnvironmentCache.c)
 *     RtlpScanEnvironment @ 0x18002F490 (RtlpScanEnvironment.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18004C1F0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     _wcsnicmp @ 0x1800970B0 (_wcsnicmp.c)
 */

__int64 __fastcall RtlQueryEnvironmentVariable(
        _WORD *a1,
        const wchar_t *a2,
        size_t a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const wchar_t *v7; // r10
  int v9; // edi
  __int64 v10; // r13
  unsigned int PseudoEnvironmentVariable; // ebx
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // r12
  _PEB *ProcessEnvironmentBlock; // rdx
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  unsigned int v18; // [rsp+40h] [rbp-58h]
  struct _TEB *v19; // [rsp+50h] [rbp-48h]
  _WORD *Environment; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+20h]

  v22 = a4;
  v7 = a2;
  v19 = NtCurrentTeb();
  v9 = 0;
  v10 = a6;
  *(_QWORD *)a6 = 0LL;
  if ( a3 )
  {
    PseudoEnvironmentVariable = -1073741568;
    LODWORD(v12) = 4;
    while ( 1 )
    {
      do
      {
        if ( (_DWORD)v12 )
        {
          v12 = (unsigned int)(v12 - 1);
          a6 = 3 * v12;
          if ( a3 <= *((_QWORD *)&unk_180100D20 + 3 * v12) )
            continue;
        }
        v13 = v22;
        goto LABEL_8;
      }
      while ( a3 != *((_QWORD *)&unk_180100D20 + 3 * v12) );
      if ( !wcsnicmp(v7, *((const wchar_t **)&unk_180100D20 + 3 * v12 + 1), a3) )
        break;
      v7 = a2;
    }
    v13 = v22;
    PseudoEnvironmentVariable = RtlpQueryPseudoEnvironmentVariable(
                                  *((unsigned int *)&unk_180100D20 + 2 * a6 + 4),
                                  v22,
                                  a5,
                                  v10);
    v7 = a2;
LABEL_8:
    if ( PseudoEnvironmentVariable != -1073741568 )
      return PseudoEnvironmentVariable;
    if ( !a1 )
    {
      RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
      Environment = v19->ProcessEnvironmentBlock->ProcessParameters->Environment;
      v14 = a5;
      v18 = RtlpQueryEnvironmentCache(&Environment, a2, a3, v13, a5, v10);
      if ( v18 == -1073741568 )
        v18 = RtlpScanEnvironment(Environment, a2, a3, v13, v14, v10, 1);
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
      return v18;
    }
    Environment = a1;
    if ( *a1 )
    {
      ProcessEnvironmentBlock = v19->ProcessEnvironmentBlock;
      if ( ProcessEnvironmentBlock->ProcessParameters->Environment == a1 )
      {
        FastPebLock = ProcessEnvironmentBlock->FastPebLock;
        if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
        {
          PseudoEnvironmentVariable = RtlpQueryEnvironmentCache(&Environment, v7, a3, v13, a5, v10);
          if ( PseudoEnvironmentVariable != -1073741568 )
            return PseudoEnvironmentVariable;
          v9 = 1;
        }
      }
      return (unsigned int)RtlpScanEnvironment(Environment, a2, a3, v13, a5, v10, v9);
    }
    else
    {
      return (unsigned int)-1073741568;
    }
  }
  return 3221225728LL;
}
