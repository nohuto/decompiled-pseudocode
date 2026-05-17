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

__int64 __fastcall LdrpComputeLazyDllPath(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int DllPath; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  char v10; // cl
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  DllPath = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpPathLock, a2, a3, a4);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 24),
                &v11,
                &v12,
                (_DWORD *)(a1 + 120),
                (_OWORD *)(a1 + 40),
                &v13);
    if ( DllPath < 0 )
    {
      v10 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1370,
          (unsigned int)"LdrpComputeLazyDllPath",
          0,
          (__int64)"Lazy DLL search path computation failed with status: 0x%08lx.\n");
        v10 = LdrpDebugFlags;
      }
      v8 = (v10 & 0x10) == 0;
    }
    else
    {
      v6 = v11;
      *(_QWORD *)(a1 + 8) = v12;
      v7 = v13;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 16) = v7;
      if ( v7 )
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
      v8 = 1;
    }
    if ( !v8 )
      __debugbreak();
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return (unsigned int)DllPath;
}
