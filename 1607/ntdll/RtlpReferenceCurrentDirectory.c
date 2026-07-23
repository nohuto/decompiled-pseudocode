/*
 * XREFs of RtlpReferenceCurrentDirectory @ 0x18007935C
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18001D820 (RtlGetFullPathName_Ustr.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x1800222A0 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlpCheckForSameCurdir @ 0x1800791AC (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x180079270 (RtlGetCurrentDirectory_U.c)
 * Callees:
 *     RtlpResetDriveEnvironment @ 0x18000189C (RtlpResetDriveEnvironment.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpCreateNewDirectoryReference @ 0x180079458 (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwFsControlFile @ 0x1800A6B40 (ZwFsControlFile.c)
 */

unsigned __int16 *__fastcall RtlpReferenceCurrentDirectory(char a1)
{
  unsigned __int16 *v2; // rbx
  int v3; // esi
  int v5; // edi
  NTSTATUS v6; // eax
  char v7; // bp
  __int64 v8; // rdx
  PVOID v9; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  volatile signed __int32 *v11; // rcx
  __int16 v12; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp-40h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+10h] BYREF

  while ( 1 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v2 = (unsigned __int16 *)RtlpCurDirRef;
    if ( !RtlpCurDirRef )
      return 0LL;
    _InterlockedIncrement((volatile signed __int32 *)RtlpCurDirRef);
    v3 = *((_DWORD *)v2 + 4);
    RtlLeaveCriticalSection(&FastPebLock);
    if ( !a1 )
      return v2;
    v5 = MEMORY[0x7FFE02DC];
    if ( (v2[20] & 1) == 0 && MEMORY[0x7FFE02DC] == v3 )
      return v2;
    v6 = ZwFsControlFile(*((HANDLE *)v2 + 1), 0LL, 0LL, 0LL, &IoStatusBlock, 0x90028u, 0LL, 0, 0LL, 0);
    if ( v6 >= 0 )
    {
      if ( (v2[20] & 1) == 0 )
      {
        RtlEnterCriticalSection(&FastPebLock);
        *((_DWORD *)v2 + 4) = v5;
        RtlLeaveCriticalSection(&FastPebLock);
      }
      return v2;
    }
    if ( v6 != -1073741806 && v6 != -1073741202 )
      return v2;
    v7 = 0;
    if ( (int)RtlpCreateNewDirectoryReference(v2 + 12, v2[13], &BaseAddress) < 0 )
    {
      v8 = v2[13];
      v13 = *((_QWORD *)v2 + 4);
      v12 = 6;
      if ( (int)RtlpCreateNewDirectoryReference(&v12, v8, &BaseAddress) < 0 )
        return v2;
      v7 = 1;
    }
    v9 = BaseAddress;
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    *(_DWORD *)BaseAddress = 2;
    RtlEnterCriticalSection(&FastPebLock);
    if ( RtlpCurDirRef == v2 )
      break;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      NtClose(*((HANDLE *)v2 + 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    }
    v11 = (volatile signed __int32 *)BaseAddress;
    *(_DWORD *)BaseAddress = 1;
    if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
    {
      NtClose(*((HANDLE *)BaseAddress + 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
  }
  RtlpCurDirRef = v9;
  ProcessParameters->CurrentDirectory.DosPath.Length = *((_WORD *)v9 + 12);
  ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)*((_QWORD *)v9 + 4);
  ProcessParameters->CurrentDirectory.Handle = (void *)*((_QWORD *)v9 + 1);
  if ( v7 )
    RtlpResetDriveEnvironment(**((_WORD **)v2 + 4));
  RtlLeaveCriticalSection(&FastPebLock);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*((HANDLE *)v2 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*((HANDLE *)v2 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  return (unsigned __int16 *)BaseAddress;
}
