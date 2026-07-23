/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x180079050
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D820 (RtlGetFullPathName_Ustr.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001E280 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpCheckForSameCurdir @ 0x1800791AC (RtlpCheckForSameCurdir.c)
 *     RtlpCreateNewDirectoryReference @ 0x180079458 (RtlpCreateNewDirectoryReference.c)
 *     RtlAreLongPathsEnabled @ 0x180082FE0 (RtlAreLongPathsEnabled.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

NTSTATUS __cdecl RtlSetCurrentDirectory_U(PUNICODE_STRING PathName)
{
  struct _PEB *v1; // rax
  void *ProcessHeap; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  unsigned int MaximumLength; // edi
  PVOID Heap; // rax
  NTSTATUS v8; // edi
  __int64 v9; // rdx
  HANDLE *v10; // rbx
  __int16 v11; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v12; // [rsp+32h] [rbp-Eh]
  PVOID BaseAddress; // [rsp+38h] [rbp-8h]
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF
  char v15; // [rsp+80h] [rbp+40h] BYREF

  v1 = NtCurrentPeb();
  ProcessHeap = v1->ProcessHeap;
  ProcessParameters = v1->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir(PathName) )
    return 0;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr((__int64)PathName) )
    return -1073741565;
  MaximumLength = ProcessParameters->CurrentDirectory.DosPath.MaximumLength;
  while ( 1 )
  {
    Heap = RtlAllocateHeap(ProcessHeap, 0, MaximumLength);
    BaseAddress = Heap;
    if ( !Heap )
      return -1073741801;
    v11 = 0;
    v12 = MaximumLength;
    MaximumLength = RtlGetFullPathName_Ustr(&PathName->Length, MaximumLength, (wchar_t *)Heap, 0LL, 0LL, (__int64)&v15);
    if ( !MaximumLength )
    {
      RtlFreeHeap(ProcessHeap, 0, BaseAddress);
      return -1073741773;
    }
    if ( MaximumLength <= v12 )
      break;
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    if ( !RtlAreLongPathsEnabled() )
      return -1073741562;
  }
  v11 = MaximumLength;
  v8 = RtlpCreateNewDirectoryReference(&v11, v12, &v14);
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  if ( v8 >= 0 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v9 = v14;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v14 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v9 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v9 + 24);
    v10 = (HANDLE *)RtlpCurDirRef;
    RtlpCurDirRef = (PVOID)v9;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
      {
        NtClose(v10[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      }
    }
  }
  return v8;
}
