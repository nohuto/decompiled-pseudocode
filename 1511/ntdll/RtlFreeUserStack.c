/*
 * XREFs of RtlFreeUserStack @ 0x180085C50
 * Callers:
 *     RtlCreateUserStack @ 0x1800832E0 (RtlCreateUserStack.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __cdecl RtlFreeUserStack(PVOID AllocationBase)
{
  PVOID v2; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = AllocationBase;
  v3 = 0LL;
  return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v2, &v3, 0x8000u);
}
