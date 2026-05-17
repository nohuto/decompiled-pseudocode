/*
 * XREFs of RtlpComputeDllPath @ 0x180067B60
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlpComputePath @ 0x180067D58 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x180068300 (RtlpLookupCurDirSetting.c)
 */

__int64 __fastcall RtlpComputeDllPath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int64 EnvironmentVersion; // rdi
  int v7; // eax
  __int64 v8; // rbx

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  EnvironmentVersion = ProcessParameters->EnvironmentVersion;
  if ( *((_QWORD *)&LdrpDllDirectory + 1) )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, (char *)ProcessParameters, a3, a4);
    if ( *((_QWORD *)&LdrpDllDirectory + 1) )
    {
      v8 = RtlpComputePath(&unk_1801026D0, 4LL, a1);
      RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v7 = dword_180147150;
  if ( !dword_180147150 )
    v7 = RtlpLookupCurDirSetting(L"\"$", 1LL, &dword_180147150);
  v8 = RtlpComputePath((char *)&unk_1801026A0 + 16 * v7, 4LL, a1);
LABEL_5:
  if ( v8 )
  {
    *(_QWORD *)(v8 + 88) = EnvironmentVersion;
    *(_BYTE *)(v8 + 100) = 0;
  }
  return v8;
}
