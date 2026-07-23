/*
 * XREFs of LdrpComputeLazyDllPath @ 0x18000D36C
 * Callers:
 *     LdrpSearchPath @ 0x18000EBE0 (LdrpSearchPath.c)
 * Callees:
 *     LdrpGetDllPath @ 0x18000C7F8 (LdrpGetDllPath.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpComputeLazyDllPath(__int64 a1)
{
  unsigned int v2; // edi
  int DllPath; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  char v7; // cl
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpPathLock);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 24),
                &v8,
                &v9,
                (_DWORD *)(a1 + 120),
                (_OWORD *)(a1 + 40),
                &v10);
    v2 = DllPath;
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
          (__int64)"Lazy DLL search path computation failed with status: 0x%08lx.\n",
          DllPath);
        v7 = LdrpDebugFlags;
      }
      if ( (v7 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v4 = v8;
      *(_QWORD *)(a1 + 8) = v9;
      v5 = v10;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 16) = v5;
      if ( v5 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            1388,
            (unsigned int)"LdrpComputeLazyDllPath",
            2,
            (__int64)"Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
            v5,
            v4);
      }
      else if ( (LdrpDebugFlags & 5) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1381,
          (unsigned int)"LdrpComputeLazyDllPath",
          2,
          (__int64)"DLL search path computed: %ws\n",
          v4);
      }
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v2;
}
