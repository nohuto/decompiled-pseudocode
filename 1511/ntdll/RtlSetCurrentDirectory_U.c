/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x180077BE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180016F00 (RtlGetFullPathName_Ustr.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180017960 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpCheckForSameCurdir @ 0x180077D40 (RtlpCheckForSameCurdir.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078040 (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

NTSTATUS __cdecl RtlSetCurrentDirectory_U(PUNICODE_STRING PathName)
{
  struct _PEB *v1; // rax
  void *ProcessHeap; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  unsigned int MaximumLength; // ebp
  PVOID Heap; // rax
  unsigned int FullPathName_Ustr; // eax
  NTSTATUS v9; // edi
  __int64 v10; // rdx
  HANDLE *v11; // rbx
  NTSTATUS v12; // ebx
  __int16 v13; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int16 v14; // [rsp+32h] [rbp-26h]
  PVOID BaseAddress; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  char v17; // [rsp+70h] [rbp+18h] BYREF

  v1 = NtCurrentPeb();
  ProcessHeap = v1->ProcessHeap;
  ProcessParameters = v1->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir(PathName) )
    return 0;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr((__m128i *)PathName) )
    return -1073741565;
  MaximumLength = ProcessParameters->CurrentDirectory.DosPath.MaximumLength;
  Heap = RtlAllocateHeap(ProcessHeap, 0, ProcessParameters->CurrentDirectory.DosPath.MaximumLength);
  BaseAddress = Heap;
  if ( !Heap )
    return -1073741801;
  v13 = 0;
  v14 = MaximumLength;
  FullPathName_Ustr = RtlGetFullPathName_Ustr(
                        &PathName->Length,
                        MaximumLength,
                        (unsigned __int16 *)Heap,
                        0LL,
                        0LL,
                        (__int64)&v17);
  if ( !FullPathName_Ustr )
  {
    v12 = -1073741773;
LABEL_16:
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    return v12;
  }
  if ( FullPathName_Ustr > v14 )
  {
    v12 = -1073741562;
    goto LABEL_16;
  }
  v13 = FullPathName_Ustr;
  v9 = RtlpCreateNewDirectoryReference(&v13, v14, &v16);
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  if ( v9 >= 0 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v10 = v16;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v16 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(unsigned __int16 **)(v10 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v10 + 24);
    v11 = (HANDLE *)RtlpCurDirRef;
    RtlpCurDirRef = (PVOID)v10;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
      {
        NtClose(v11[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      }
    }
  }
  return v9;
}
