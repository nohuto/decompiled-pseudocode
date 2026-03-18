/*
 * XREFs of rimAllocUserMemInternal @ 0x1C00D258C
 * Callers:
 *     RIMAllocUserMem @ 0x1C00D24F0 (RIMAllocUserMem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimAllocUserMemInternal(__int64 a1, ULONG_PTR a2, PVOID *a3)
{
  NTSTATUS v6; // edi
  HANDLE v7; // rax
  void *v8; // rsi
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int8 NewElement; // [rsp+90h] [rbp+40h] BYREF

  RegionSize = a2;
  *a3 = 0LL;
  if ( !a2 )
    return 3221225473LL;
  v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v6 >= 0 )
  {
    v7 = MmSecureVirtualMemory(*a3, RegionSize, 4u);
    v8 = v7;
    if ( v7 )
    {
      Buffer[0] = *a3;
      Buffer[1] = RegionSize;
      NewElement = 0;
      Buffer[2] = v7;
      if ( RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 848), Buffer, 0x18u, &NewElement) && NewElement )
        return (unsigned int)v6;
      MmUnsecureVirtualMemory(v8);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
      v6 = -1073741801;
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
      v6 = -2143354876;
    }
    *a3 = 0LL;
  }
  return (unsigned int)v6;
}
