/*
 * XREFs of LdrpComputeLazyDllPath @ 0x18007B364
 * Callers:
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpGetDllPath @ 0x18002F8D8 (LdrpGetDllPath.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpComputeLazyDllPath(__int64 a1)
{
  int DllPath; // edi
  __int64 v3; // rcx
  __int64 v4; // rax
  bool v5; // zf
  char v7; // cl
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  DllPath = 0;
  RtlAcquireSRWLockExclusive(&LdrpPathLock);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(
                *(PCWSTR *)(a1 + 32),
                *(_DWORD *)(a1 + 24),
                &v8,
                &v9,
                (_DWORD *)(a1 + 120),
                (_OWORD *)(a1 + 40),
                &v10);
    if ( DllPath < 0 )
    {
      v7 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1370,
          (unsigned int)"LdrpComputeLazyDllPath",
          0,
          (__int64)"Lazy DLL search path computation failed with status: 0x%08lx.\n");
        v7 = LdrpDebugFlags;
      }
      v5 = (v7 & 0x10) == 0;
    }
    else
    {
      v3 = v8;
      *(_QWORD *)(a1 + 8) = v9;
      v4 = v10;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v3;
      *(_QWORD *)(a1 + 16) = v4;
      if ( v4 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            1388,
            (unsigned int)"LdrpComputeLazyDllPath",
            2,
            (__int64)"Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n");
      }
      else if ( (LdrpDebugFlags & 5) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1381,
          (unsigned int)"LdrpComputeLazyDllPath",
          2,
          (__int64)"DLL search path computed: %ws\n");
      }
      v5 = 1;
    }
    if ( !v5 )
      __debugbreak();
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return (unsigned int)DllPath;
}
