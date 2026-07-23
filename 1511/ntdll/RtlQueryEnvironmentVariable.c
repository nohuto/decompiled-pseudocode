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

NTSTATUS __cdecl RtlQueryEnvironmentVariable(
        PVOID Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PWSTR Value,
        SIZE_T ValueLength,
        PSIZE_T ReturnLength)
{
  const wchar_t *v7; // r10
  int v9; // edi
  PSIZE_T v10; // r13
  NTSTATUS PseudoEnvironmentVariable; // ebx
  __int64 v12; // r14
  PWSTR v13; // r14
  SIZE_T v14; // r12
  _PEB *ProcessEnvironmentBlock; // rdx
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  NTSTATUS v18; // [rsp+40h] [rbp-58h]
  struct _TEB *v19; // [rsp+50h] [rbp-48h]
  PVOID v21; // [rsp+B0h] [rbp+18h] BYREF
  PWSTR v22; // [rsp+B8h] [rbp+20h]

  v22 = Value;
  v7 = Name;
  v19 = NtCurrentTeb();
  v9 = 0;
  v10 = ReturnLength;
  *ReturnLength = 0LL;
  if ( NameLength )
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
          ReturnLength = (PSIZE_T)(3 * v12);
          if ( NameLength <= *((_QWORD *)&unk_180100D20 + 3 * v12) )
            continue;
        }
        v13 = v22;
        goto LABEL_8;
      }
      while ( NameLength != *((_QWORD *)&unk_180100D20 + 3 * v12) );
      if ( !wcsnicmp(v7, *((const wchar_t **)&unk_180100D20 + 3 * v12 + 1), NameLength) )
        break;
      v7 = Name;
    }
    v13 = v22;
    PseudoEnvironmentVariable = RtlpQueryPseudoEnvironmentVariable(
                                  *((unsigned int *)&unk_180100D20 + 2 * (_QWORD)ReturnLength + 4),
                                  v22,
                                  ValueLength,
                                  v10);
    v7 = Name;
LABEL_8:
    if ( PseudoEnvironmentVariable != -1073741568 )
      return PseudoEnvironmentVariable;
    if ( !Environment )
    {
      RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
      v21 = v19->ProcessEnvironmentBlock->ProcessParameters->Environment;
      v14 = ValueLength;
      v18 = RtlpQueryEnvironmentCache(&v21, Name, NameLength, v13, ValueLength, v10);
      if ( v18 == -1073741568 )
        v18 = RtlpScanEnvironment(v21, Name, NameLength, v13, v14, v10, 1);
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
      return v18;
    }
    v21 = Environment;
    if ( !*(_WORD *)Environment )
      return -1073741568;
    ProcessEnvironmentBlock = v19->ProcessEnvironmentBlock;
    if ( ProcessEnvironmentBlock->ProcessParameters->Environment == Environment )
    {
      FastPebLock = ProcessEnvironmentBlock->FastPebLock;
      if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        PseudoEnvironmentVariable = RtlpQueryEnvironmentCache(&v21, v7, NameLength, v13, ValueLength, v10);
        if ( PseudoEnvironmentVariable != -1073741568 )
          return PseudoEnvironmentVariable;
        v9 = 1;
      }
    }
    return RtlpScanEnvironment(v21, Name, NameLength, v13, ValueLength, v10, v9);
  }
  return -1073741568;
}
