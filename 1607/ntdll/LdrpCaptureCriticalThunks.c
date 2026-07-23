/*
 * XREFs of LdrpCaptureCriticalThunks @ 0x18008A024
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 */

int LdrpCaptureCriticalThunks()
{
  __int64 (__fastcall **v0)(int, int, int, int, ULONG, ULONG); // rdi
  __int64 v1; // r8
  __int64 (__fastcall **v2)(int, int, int, int, ULONG, ULONG); // rdx
  _QWORD *v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(int, int, int, int, ULONG, ULONG); // rax
  char *v7; // rcx
  _OWORD *v8; // rdx
  _BYTE MemoryInformation[8]; // [rsp+30h] [rbp-68h] BYREF
  char v11; // [rsp+38h] [rbp-60h] BYREF

  v0 = &LdrpCritialLoaderFunctions;
  v1 = 5LL;
  v2 = &LdrpCritialLoaderFunctions;
  v3 = MemoryInformation;
  do
  {
    v4 = (__int64)*v2++;
    *v3 = v4;
    v3 += 2;
    --v1;
  }
  while ( v1 );
  v5 = 0;
  LODWORD(v6) = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  0LL,
                  MemoryWorkingSetExInformation,
                  MemoryInformation,
                  0x50uLL,
                  0LL);
  if ( (int)v6 >= 0 )
  {
    v8 = &LdrpThunkSignature;
    v7 = &v11;
    while ( 1 )
    {
      LODWORD(v6) = *(_DWORD *)v7;
      if ( (*(_DWORD *)v7 & 0x40000000) == 0 )
        break;
      v6 = *v0;
      ++v5;
      v7 += 16;
      ++v0;
      *v8++ = *(_OWORD *)v6;
      if ( v5 >= 5 )
        return (int)v6;
    }
  }
  LdrpDetourExist = 1;
  return (int)v6;
}
