/*
 * XREFs of RtlValidateProcessHeaps @ 0x1800D8750
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x18003776C (RtlpSecMemFreeVirtualMemory.c)
 *     RtlValidateHeap @ 0x180038730 (RtlValidateHeap.c)
 *     RtlGetProcessHeaps @ 0x18007F020 (RtlGetProcessHeaps.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     _alloca_probe @ 0x180096610 (_alloca_probe.c)
 */

char RtlValidateProcessHeaps()
{
  char v0; // si
  unsigned int ProcessHeaps; // eax
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  _BYTE *v6; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v8[4096]; // [rsp+40h] [rbp-C0h] BYREF

  v6 = v8;
  v0 = 1;
  ProcessHeaps = RtlGetProcessHeaps(0x200u, (__int64)v8);
  v3 = 0LL;
  v4 = ProcessHeaps;
  if ( ProcessHeaps > 0x200 )
  {
    v7 = 8LL * ProcessHeaps;
    v6 = 0LL;
    if ( (int)ZwAllocateVirtualMemory() < 0 )
      return 0;
    v4 = (unsigned int)RtlGetProcessHeaps(v4, (__int64)v6);
  }
  if ( (_DWORD)v4 )
  {
    do
    {
      v3 += 8LL;
      LOBYTE(v2) = -((unsigned __int8)RtlValidateHeap() != 0);
      v0 &= v2;
      --v4;
    }
    while ( v4 );
  }
  if ( v6 != v8 )
    RtlpSecMemFreeVirtualMemory(v2, &v6, &v7, 0x8000LL);
  return v0;
}
