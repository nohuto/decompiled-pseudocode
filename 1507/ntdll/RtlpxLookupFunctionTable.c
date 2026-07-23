/*
 * XREFs of RtlpxLookupFunctionTable @ 0x180015180
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1800136F0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x180014E40 (RtlLookupFunctionEntry.c)
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x180016020 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveForwarder @ 0x18001664C (LdrpResolveForwarder.c)
 *     RtlPcToFileHeader @ 0x180018580 (RtlPcToFileHeader.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800CAD74 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlLookupFunctionTable @ 0x1800CAF40 (RtlLookupFunctionTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180015594 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpWaitCouldDeadlock @ 0x1800360D0 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18005D560 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x18005F9DC (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x18005FA44 (RtlpWakeSRWLock.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x180095430 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpxLookupFunctionTable(PVOID BaseAddress, __int64 a2)
{
  bool v3; // zf
  __int64 v5; // rsi
  unsigned __int64 Value; // rbx
  int v7; // r10d
  int v8; // r9d
  int v9; // eax
  PS_MITIGATION_OPTIONS_MAP *v10; // r8
  unsigned __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rdx
  PVOID v15; // rbx
  signed __int64 v16; // rcx
  signed __int64 v17; // rcx
  signed __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  signed __int64 v22; // rax
  bool v23; // cl
  char *v24; // rdx
  signed __int64 v25; // rax
  int j; // ecx
  _QWORD *v28; // rax
  __int64 i; // rcx
  PVOID MemoryInformation; // [rsp+30h] [rbp-29h] BYREF
  int v31; // [rsp+38h] [rbp-21h]
  int v32; // [rsp+40h] [rbp-19h]
  unsigned __int64 v33; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int64 *v34; // [rsp+58h] [rbp-1h]
  __int64 v35; // [rsp+60h] [rbp+7h]
  void *UniqueThread; // [rsp+68h] [rbp+Fh]
  int v37; // [rsp+70h] [rbp+17h]
  signed __int32 v38[3]; // [rsp+74h] [rbp+1Bh] BYREF
  int v39; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v40; // [rsp+D0h] [rbp+77h] BYREF

  v3 = LdrInitState == 3;
  v5 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v3 )
  {
    v39 = 0;
    Value = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 17LL, 0LL);
    if ( !Value )
    {
LABEL_3:
      if ( LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) != 1 )
      {
        v7 = 1;
        v8 = LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) - 1;
        while ( v8 >= v7 )
        {
          v9 = (v8 + v7) >> 1;
          v10 = &LdrSystemDllInitBlock.MitigationOptionsMap + v9;
          v11 = v10->Map[1];
          if ( (unsigned __int64)BaseAddress < v11 )
          {
            if ( !v9 )
              break;
            v8 = v9 - 1;
          }
          else
          {
            if ( (unsigned __int64)BaseAddress < v11 + LODWORD(v10->Map[2]) )
            {
              *(_OWORD *)a2 = *(_OWORD *)v10->Map;
              *(_QWORD *)(a2 + 16) = v10->Map[2];
              v5 = *(_QWORD *)a2;
              break;
            }
            v7 = v9 + 1;
          }
        }
      }
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 0LL, 17LL);
      v13 = v12;
      if ( v12 != 17 )
      {
        if ( (v12 & 1) == 0 )
          RtlRaiseStatus(-1073741212);
        if ( (v12 & 2) != 0 )
        {
LABEL_39:
          if ( (v13 & 8) != 0 )
          {
            v28 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( i = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v28[1] )
              v28 = (_QWORD *)*v28;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_14;
            v19 = -9LL;
          }
          else
          {
            v19 = -1LL;
          }
          while ( 1 )
          {
            v20 = (v13 & 6) == 2 ? v19 + 4 : v19;
            v21 = v20 + v13;
            v22 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock,
                    v20 + v13,
                    v13);
            if ( v13 == v22 )
              break;
            v13 = v22;
          }
          if ( (v13 & 6) == 2 )
            RtlpWakeSRWLock(&LdrpInvertedFunctionTableSRWLock, v21, 0LL);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v17 = v13 - 16;
          if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
            v17 = 0LL;
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, v17, v13);
          v3 = v13 == v18;
          v13 = v18;
          if ( v3 )
            break;
          if ( (v18 & 2) != 0 )
            goto LABEL_39;
        }
      }
LABEL_14:
      if ( v5 || !LOBYTE(LdrSystemDllInitBlock.Flags) )
        return v5;
      goto LABEL_16;
    }
    while ( 1 )
    {
      if ( (Value & 1) != 0 && (((Value >> 1) & 1) != 0 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock() )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v23 = 0;
        v38[0] = 2;
        v35 = 0LL;
        if ( ((Value >> 1) & 1) != 0 )
        {
          v34 = 0LL;
          v37 = -1;
          v33 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          v24 = (char *)((unsigned __int64)&v33 | Value & 8 | 7);
          v23 = (Value & 4) == 0;
        }
        else
        {
          v37 = -2;
          v34 = &v33;
          v24 = (char *)&v33 + 3;
        }
        v25 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock,
                (signed __int64)v24,
                Value);
        v3 = Value == v25;
        Value = v25;
        if ( !v3 )
          goto LABEL_51;
        if ( v23 )
          RtlpOptimizeSRWLockList(&LdrpInvertedFunctionTableSRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( j = SRWLockSpinCount; j; --j )
          {
            if ( (v38[0] & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(v38, 1u) )
        {
          do
            NtWaitForAlertByThreadId(&LdrpInvertedFunctionTableSRWLock, 0LL);
          while ( (v38[0] & 4) == 0 );
        }
      }
      else
      {
        v16 = Value | 1;
        if ( (Value & 2) == 0 )
          v16 += 16LL;
        if ( Value == _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock,
                        v16,
                        Value) )
          goto LABEL_3;
LABEL_51:
        RtlBackoff(&v39);
        _m_prefetchw(&LdrpInvertedFunctionTableSRWLock);
        Value = LdrpInvertedFunctionTableSRWLock.Value;
      }
    }
  }
LABEL_16:
  if ( ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         &MemoryInformation,
         0x18uLL,
         0LL) >= 0 )
  {
    v15 = MemoryInformation;
    if ( MemoryInformation )
    {
      if ( (v32 & 2) == 0 && (v32 & 1) == 0 && BaseAddress >= MemoryInformation )
      {
        if ( (int)RtlpImageDirectoryEntryToDataEx(MemoryInformation, (__int64)&v40) < 0 )
          v5 = 0LL;
        else
          v5 = v40;
        *(_DWORD *)(a2 + 16) = v31;
        *(_QWORD *)a2 = v5;
        *(_QWORD *)(a2 + 8) = v15;
      }
    }
  }
  return v5;
}
