/*
 * XREFs of RtlpComputeDllPath @ 0x18000BB30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLookupCurDirSetting @ 0x1800093F0 (RtlpLookupCurDirSetting.c)
 *     RtlpComputePath @ 0x18000CD84 (RtlpComputePath.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 */

__int64 __fastcall RtlpComputeDllPath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  int v3; // eax
  __int64 v4; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( *((_QWORD *)&LdrpDllDirectory + 1) )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( *((_QWORD *)&LdrpDllDirectory + 1) )
    {
      v4 = RtlpComputePath(&unk_18010C060, 4LL, a1, 0LL);
      RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v3 = dword_180153350;
  if ( !dword_180153350 )
    v3 = RtlpLookupCurDirSetting((__int64)L"\"$", 1u, &dword_180153350);
  v4 = RtlpComputePath((char *)&unk_18010C030 + 16 * v3, 4LL, a1, 0LL);
LABEL_5:
  if ( v4 )
  {
    *(_QWORD *)(v4 + 88) = EnvironmentVersion;
    *(_BYTE *)(v4 + 100) = 0;
  }
  return v4;
}
