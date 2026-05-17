/*
 * XREFs of RtlpComputeDllPathWithOptions @ 0x180067C30
 * Callers:
 *     RtlpGetCachedPath @ 0x180036C64 (RtlpGetCachedPath.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlpComputePath @ 0x180067D58 (RtlpComputePath.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpComputeDllPathWithOptions(__int16 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // zf
  _DWORD v14[10]; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(v5) = 0;
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, a2, a3, a4);
  if ( (a1 & 0x100) != 0 )
  {
    v14[0] = 5;
    LODWORD(v5) = 1;
  }
  if ( (a1 & 0x200) != 0 )
  {
    v11 = (unsigned int)v5;
    LODWORD(v5) = v5 + 1;
    v14[v11] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v12 = (unsigned int)v5;
    v5 = (unsigned int)(v5 + 1);
    v13 = (_WORD)LdrpDllDirectory == 0;
    v14[v12] = 6;
    if ( !v13 )
    {
      v14[v5] = 0;
      LODWORD(v5) = v5 + 1;
    }
  }
  if ( (a1 & 0x800) != 0 )
  {
    v7 = (unsigned int)v5;
    LODWORD(v5) = v5 + 1;
    v14[v7] = 7;
  }
  if ( LdrpAppPackagesPath.Buffer )
  {
    v10 = (unsigned int)v5;
    LODWORD(v5) = v5 + 1;
    v14[v10] = 8;
  }
  v8 = RtlpComputePath(v14, (unsigned int)v5, a2);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v8 )
  {
    *(_BYTE *)(v8 + 100) = 1;
    if ( !LdrpAppPackagesPath.Buffer )
      *(_QWORD *)(v8 + 88) = 0LL;
  }
  return v8;
}
