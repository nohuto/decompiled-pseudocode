/*
 * XREFs of PsspFreeLinkedHandleList @ 0x1800833F8
 * Callers:
 *     PsspCaptureThreadInformation @ 0x180082EEC (PsspCaptureThreadInformation.c)
 * Callees:
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 */

void __fastcall PsspFreeLinkedHandleList(unsigned __int16 *a1)
{
  unsigned int *v1; // rbx
  unsigned __int16 *v2; // rsi
  __int64 v3; // rdi
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    BaseAddress = a1;
    do
    {
      v1 = (unsigned int *)(a1 + 6);
      v2 = *(unsigned __int16 **)a1;
      if ( a1[5] )
      {
        v3 = a1[5];
        do
        {
          NtClose((HANDLE)*v1++);
          --v3;
        }
        while ( v3 );
      }
      RegionSize = 1LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      a1 = v2;
      BaseAddress = v2;
    }
    while ( v2 );
  }
}
