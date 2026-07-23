/*
 * XREFs of RtlpComputeDllPathWithOptions @ 0x18000CC20
 * Callers:
 *     RtlpGetCachedPath @ 0x18000CAE0 (RtlpGetCachedPath.c)
 * Callees:
 *     RtlpComputePath @ 0x18000CD74 (RtlpComputePath.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpComputeDllPathWithOptions(__int16 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  _DWORD v13[10]; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(v3) = 0;
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  if ( (a1 & 0x100) != 0 )
  {
    v13[0] = 5;
    LODWORD(v3) = 1;
  }
  if ( (a1 & 0x200) != 0 )
  {
    v10 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    v13[v10] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v11 = (unsigned int)v3;
    v3 = (unsigned int)(v3 + 1);
    v12 = LdrpDllDirectory.Length == 0;
    v13[v11] = 6;
    if ( !v12 )
    {
      v13[v3] = 0;
      LODWORD(v3) = v3 + 1;
    }
  }
  if ( (a1 & 0x4800) != 0 )
  {
    v6 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    v13[v6] = 7;
  }
  LOBYTE(v5) = (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) != 0 && (a1 & 0x800) != 0;
  if ( LdrpAppPackagesPath.Length )
  {
    v9 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    v13[v9] = 8;
  }
  v7 = RtlpComputePath(v13, (unsigned int)v3, a2, v5);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v7 )
  {
    *(_BYTE *)(v7 + 100) = 1;
    if ( !LdrpAppPackagesPath.Length )
      *(_QWORD *)(v7 + 88) = 0LL;
  }
  return v7;
}
