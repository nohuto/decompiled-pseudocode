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

__int64 __fastcall RtlSetCurrentDirectory_U(__m128i *a1)
{
  struct _PEB *v1; // rax
  __int64 ProcessHeap; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  unsigned int MaximumLength; // ebp
  _WORD *Heap; // rax
  unsigned int FullPathName_Ustr; // eax
  int v9; // edi
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned int v12; // ebx
  __int16 v13; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int16 v14; // [rsp+32h] [rbp-26h]
  _WORD *v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  char v17; // [rsp+70h] [rbp+18h] BYREF

  v1 = NtCurrentPeb();
  ProcessHeap = (__int64)v1->ProcessHeap;
  ProcessParameters = v1->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir() )
    return 0LL;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr(a1) )
    return 3221225731LL;
  MaximumLength = ProcessParameters->CurrentDirectory.DosPath.MaximumLength;
  Heap = (_WORD *)RtlAllocateHeap(ProcessHeap, 0, ProcessParameters->CurrentDirectory.DosPath.MaximumLength);
  v15 = Heap;
  if ( !Heap )
    return 3221225495LL;
  v13 = 0;
  v14 = MaximumLength;
  FullPathName_Ustr = RtlGetFullPathName_Ustr((unsigned __int16 *)a1, MaximumLength, Heap, 0LL, 0LL, (__int64)&v17);
  if ( !FullPathName_Ustr )
  {
    v12 = -1073741773;
LABEL_16:
    RtlFreeHeap(ProcessHeap, 0, (unsigned __int64)v15);
    return v12;
  }
  if ( FullPathName_Ustr > v14 )
  {
    v12 = -1073741562;
    goto LABEL_16;
  }
  v13 = FullPathName_Ustr;
  v9 = RtlpCreateNewDirectoryReference(&v13, v14, &v16);
  RtlFreeHeap(ProcessHeap, 0, (unsigned __int64)v15);
  if ( v9 >= 0 )
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v10 = v16;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v16 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(unsigned __int16 **)(v10 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v10 + 24);
    v11 = RtlpCurDirRef;
    RtlpCurDirRef = v10;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v11 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      }
    }
  }
  return (unsigned int)v9;
}
