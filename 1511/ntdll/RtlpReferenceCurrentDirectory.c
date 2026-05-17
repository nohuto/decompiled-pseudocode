/*
 * XREFs of RtlpReferenceCurrentDirectory @ 0x180077EEC
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180016F00 (RtlGetFullPathName_Ustr.c)
 *     RtlpCheckForSameCurdir @ 0x180077D40 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x180077E00 (RtlGetCurrentDirectory_U.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpResetDriveEnvironment @ 0x18004CFD8 (RtlpResetDriveEnvironment.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078040 (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwFsControlFile @ 0x1800A57E0 (ZwFsControlFile.c)
 */

unsigned __int64 __fastcall RtlpReferenceCurrentDirectory(char a1)
{
  unsigned __int64 v2; // rbx
  int v3; // esi
  int v5; // edi
  int v6; // eax
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rdi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  volatile signed __int32 *v11; // rcx
  __int16 v12; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp-40h]
  _BYTE v14[16]; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+A8h] [rbp+10h] BYREF

  while ( 1 )
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    v2 = RtlpCurDirRef;
    if ( !RtlpCurDirRef )
      return 0LL;
    _InterlockedIncrement((volatile signed __int32 *)RtlpCurDirRef);
    v3 = *(_DWORD *)(v2 + 16);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( !a1 )
      return v2;
    v5 = MEMORY[0x7FFE02DC];
    if ( (*(_BYTE *)(v2 + 40) & 1) == 0 && MEMORY[0x7FFE02DC] == v3 )
      return v2;
    v6 = ZwFsControlFile(*(_QWORD *)(v2 + 8), 0LL, 0LL, 0LL, v14, 589864, 0LL, 0, 0LL, 0);
    if ( v6 >= 0 )
    {
      if ( (*(_BYTE *)(v2 + 40) & 1) == 0 )
      {
        RtlEnterCriticalSection((__int64)&FastPebLock);
        *(_DWORD *)(v2 + 16) = v5;
        RtlLeaveCriticalSection((__int64)&FastPebLock);
      }
      return v2;
    }
    if ( v6 != -1073741806 && v6 != -1073741202 )
      return v2;
    v7 = 0;
    if ( (int)RtlpCreateNewDirectoryReference(v2 + 24, *(unsigned __int16 *)(v2 + 26), &v15) < 0 )
    {
      v8 = *(unsigned __int16 *)(v2 + 26);
      v13 = *(_QWORD *)(v2 + 32);
      v12 = 6;
      if ( (int)RtlpCreateNewDirectoryReference(&v12, v8, &v15) < 0 )
        return v2;
      v7 = 1;
    }
    v9 = v15;
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    *(_DWORD *)v15 = 2;
    RtlEnterCriticalSection((__int64)&FastPebLock);
    if ( RtlpCurDirRef == v2 )
      break;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v2 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
    }
    v11 = (volatile signed __int32 *)v15;
    *(_DWORD *)v15 = 1;
    if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v15 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
    }
  }
  RtlpCurDirRef = v9;
  ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v9 + 24);
  ProcessParameters->CurrentDirectory.DosPath.Buffer = *(unsigned __int16 **)(v9 + 32);
  ProcessParameters->CurrentDirectory.Handle = *(void **)(v9 + 8);
  if ( v7 )
    RtlpResetDriveEnvironment(**(_WORD **)(v2 + 32));
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*(HANDLE *)(v2 + 8));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*(HANDLE *)(v2 + 8));
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  return v15;
}
