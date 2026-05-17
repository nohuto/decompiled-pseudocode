/*
 * XREFs of LdrpComputeLazyDllPath @ 0x180042FC0
 * Callers:
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpGetDllPath @ 0x180036A08 (LdrpGetDllPath.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpComputeLazyDllPath(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  int DllPath; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  bool v9; // zf
  char v11; // cl
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  RtlAcquireSRWLockExclusive(&LdrpPathLock, a2, a3, a4);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 24),
                &v12,
                &v13,
                (_DWORD *)(a1 + 120),
                (_OWORD *)(a1 + 40),
                &v14);
    v5 = DllPath;
    if ( DllPath < 0 )
    {
      v11 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1370,
          (unsigned int)"LdrpComputeLazyDllPath",
          0,
          "Lazy DLL search path computation failed with status: 0x%08lx.\n",
          DllPath);
        v11 = LdrpDebugFlags;
      }
      v9 = (v11 & 0x10) == 0;
    }
    else
    {
      v7 = v12;
      *(_QWORD *)(a1 + 8) = v13;
      v8 = v14;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 16) = v8;
      if ( v8 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            1388,
            (unsigned int)"LdrpComputeLazyDllPath",
            2,
            "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
            v8,
            v7);
      }
      else if ( (LdrpDebugFlags & 5) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1381,
          (unsigned int)"LdrpComputeLazyDllPath",
          2,
          "DLL search path computed: %ws\n",
          v7);
      }
      v9 = 1;
    }
    if ( !v9 )
      __debugbreak();
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v5;
}
