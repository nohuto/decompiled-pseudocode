/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x180079060
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D830 (RtlGetFullPathName_Ustr.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001E290 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpCheckForSameCurdir @ 0x1800791BC (RtlpCheckForSameCurdir.c)
 *     RtlpCreateNewDirectoryReference @ 0x180079468 (RtlpCreateNewDirectoryReference.c)
 *     RtlAreLongPathsEnabled @ 0x180082FF0 (RtlAreLongPathsEnabled.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

__int64 __fastcall RtlSetCurrentDirectory_U(unsigned __int16 *a1)
{
  struct _PEB *v1; // rax
  __int64 ProcessHeap; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  unsigned int MaximumLength; // edi
  _WORD *Heap; // rax
  int v8; // edi
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int16 v11; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v12; // [rsp+32h] [rbp-Eh]
  _WORD *v13; // [rsp+38h] [rbp-8h]
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF
  char v15; // [rsp+80h] [rbp+40h] BYREF

  v1 = NtCurrentPeb();
  ProcessHeap = (__int64)v1->ProcessHeap;
  ProcessParameters = v1->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir() )
    return 0LL;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr((__int64)a1) )
    return 3221225731LL;
  MaximumLength = ProcessParameters->CurrentDirectory.DosPath.MaximumLength;
  while ( 1 )
  {
    Heap = (_WORD *)RtlAllocateHeap(ProcessHeap, 0, MaximumLength);
    v13 = Heap;
    if ( !Heap )
      return 3221225495LL;
    v11 = 0;
    v12 = MaximumLength;
    MaximumLength = RtlGetFullPathName_Ustr(a1, MaximumLength, Heap, 0LL, 0LL, (__int64)&v15);
    if ( !MaximumLength )
    {
      RtlFreeHeap(ProcessHeap, 0, (unsigned __int64)v13);
      return 3221225523LL;
    }
    if ( MaximumLength <= v12 )
      break;
    RtlFreeHeap(ProcessHeap, 0, (unsigned __int64)v13);
    if ( !(unsigned __int8)RtlAreLongPathsEnabled() )
      return 3221225734LL;
  }
  v11 = MaximumLength;
  v8 = RtlpCreateNewDirectoryReference(&v11, v12, &v14);
  RtlFreeHeap(ProcessHeap, 0, (unsigned __int64)v13);
  if ( v8 >= 0 )
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v9 = v14;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v14 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v9 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v9 + 24);
    v10 = RtlpCurDirRef;
    RtlpCurDirRef = v9;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v10 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
      }
    }
  }
  return (unsigned int)v8;
}
