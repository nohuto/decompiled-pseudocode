/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x1800712C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18002F3A4 (LdrProtectMrdata.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800551A8 (LdrEnsureMrdataHeapExists.c)
 *     RtlProtectHeap @ 0x180055E30 (RtlProtectHeap.c)
 *     NtSetInformationProcess @ 0x1800A5440 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x1800A5C00 (ZwQuerySystemTime.c)
 */

DWORD __cdecl RtlAddGrowableFunctionTable(
        PVOID *DynamicTable,
        PRUNTIME_FUNCTION FunctionTable,
        DWORD EntryCount,
        DWORD MaximumEntryCount,
        ULONG_PTR RangeBase,
        ULONG_PTR RangeEnd)
{
  DWORD result; // eax
  int v10; // ebx
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 *v13; // rbx
  NTSTATUS v14; // ebp
  __int64 *i; // rax
  __int64 **v16; // rax
  int v17; // ecx
  PVOID v18; // rcx
  PVOID v19; // rcx
  int v20; // ecx
  int v21; // ecx
  __int64 *ProcessInformation; // [rsp+20h] [rbp-28h] BYREF
  char v23; // [rsp+28h] [rbp-20h]

  if ( EntryCount > MaximumEntryCount || RangeBase >= RangeEnd )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists();
  if ( (result & 0x80000000) == 0 )
  {
    if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9] )
      goto LABEL_26;
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v10 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v10 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v10 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
      ProcessHeap = LdrpMrdataHeap;
    else
LABEL_26:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x58uLL);
    v13 = (__int64 *)Heap;
    if ( Heap )
    {
      Heap[2].QuadPart = (__int64)FunctionTable;
      Heap[10].HighPart = EntryCount;
      ZwQuerySystemTime(Heap + 3);
      v13[4] = RangeBase;
      v13[5] = RangeEnd;
      v13[6] = RangeBase;
      *((_DWORD *)v13 + 20) = 3;
      ProcessInformation = v13;
      v23 = 0;
      v14 = NtSetInformationProcess(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              ProcessDynamicFunctionTableInformation,
              &ProcessInformation,
              0x10u);
      if ( v14 < 0 )
      {
        if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
          v18 = LdrpMrdataHeap;
        else
          v18 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v18, 0, v13);
        if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9] )
          return v14;
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v17 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
      }
      else
      {
        LdrProtectMrdata(0);
        RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
        for ( i = (__int64 *)RtlpDynamicFunctionTable; i != &RtlpDynamicFunctionTable; i = (__int64 *)*i )
        {
          if ( RangeBase < i[5] && RangeEnd > i[4] )
          {
            if ( i[4] != RangeBase || i[5] != RangeEnd )
            {
              RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
              LdrProtectMrdata(1);
              v23 = 1;
              NtSetInformationProcess(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                ProcessDynamicFunctionTableInformation,
                &ProcessInformation,
                0x10u);
              if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
                v19 = LdrpMrdataHeap;
              else
                v19 = NtCurrentPeb()->ProcessHeap;
              RtlFreeHeap(v19, 0, v13);
              if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
              {
                RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
                v20 = *(_DWORD *)LdrpMrdataHeapUnprotected;
                if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
                {
                  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
                  __fastfail(0xEu);
                }
                *(_DWORD *)LdrpMrdataHeapUnprotected = v20 - 1;
                if ( v20 == 1 )
                  RtlProtectHeap(LdrpMrdataHeap, 1u);
                RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
              }
              return -1073741800;
            }
            break;
          }
        }
        v16 = (__int64 **)qword_180155270;
        *v13 = (__int64)&RtlpDynamicFunctionTable;
        v13[1] = (__int64)v16;
        if ( *v16 != &RtlpDynamicFunctionTable )
          __fastfail(3u);
        *v16 = v13;
        qword_180155270 = (__int64)v13;
        RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
        LdrProtectMrdata(1);
        *DynamicTable = v13;
        if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9] )
          return v14;
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v17 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v17 - 1;
      if ( v17 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return v14;
    }
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v21 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v21 - 1;
      if ( v21 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return -1073741670;
  }
  return result;
}
