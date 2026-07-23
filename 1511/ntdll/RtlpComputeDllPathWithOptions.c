/*
 * XREFs of RtlpComputeDllPathWithOptions @ 0x180072E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlpComputePath @ 0x180072FAC (RtlpComputePath.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpComputeDllPathWithOptions(__int16 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  bool v11; // zf
  _DWORD v12[10]; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(v3) = 0;
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  if ( (a1 & 0x100) != 0 )
  {
    v12[0] = 5;
    LODWORD(v3) = 1;
  }
  if ( (a1 & 0x200) != 0 )
  {
    v9 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    v12[v9] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v10 = (unsigned int)v3;
    v3 = (unsigned int)(v3 + 1);
    v11 = LdrpDllDirectory.Length == 0;
    v12[v10] = 6;
    if ( !v11 )
    {
      v12[v3] = 0;
      LODWORD(v3) = v3 + 1;
    }
  }
  if ( (a1 & 0x800) != 0 )
  {
    v5 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    v12[v5] = 7;
  }
  if ( LdrpAppPackagesPath.Buffer )
  {
    v8 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    v12[v8] = 8;
  }
  v6 = RtlpComputePath(v12, (unsigned int)v3, a2);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v6 )
  {
    *(_BYTE *)(v6 + 100) = 1;
    if ( !LdrpAppPackagesPath.Buffer )
      *(_QWORD *)(v6 + 88) = 0LL;
  }
  return v6;
}
