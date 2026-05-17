/*
 * XREFs of LdrpCaptureCriticalThunks @ 0x18008619C
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 */

__int64 LdrpCaptureCriticalThunks()
{
  __int64 *v0; // rdi
  __int64 v1; // r8
  __int64 (__fastcall **v2)(int, int, int, int, ULONG, ULONG); // rdx
  _QWORD *v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 result; // rax
  _OWORD *v7; // rdx
  char *v8; // rcx
  _BYTE v9[8]; // [rsp+30h] [rbp-68h] BYREF
  char v10; // [rsp+38h] [rbp-60h] BYREF

  v0 = (__int64 *)&LdrpCritialLoaderFunctions;
  v1 = 5LL;
  v2 = &LdrpCritialLoaderFunctions;
  v3 = v9;
  do
  {
    v4 = (__int64)*v2++;
    *v3 = v4;
    v3 += 2;
    --v1;
  }
  while ( v1 );
  v5 = 0;
  result = ZwQueryVirtualMemory(-1LL, 0LL, 4LL, v9);
  if ( (int)result >= 0 )
  {
    v7 = &LdrpThunkSignature;
    v8 = &v10;
    while ( 1 )
    {
      result = *(unsigned int *)v8;
      if ( (result & 0x40000000) == 0 )
        break;
      result = *v0;
      ++v5;
      v8 += 16;
      ++v0;
      *v7++ = *(_OWORD *)result;
      if ( v5 >= 5 )
        return result;
    }
  }
  LdrpDetourExist = 1;
  return result;
}
