/*
 * XREFs of ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00B5A24
 * Callers:
 *     GreSetupDCAttributes @ 0x1C0025D50 (GreSetupDCAttributes.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     HmgAllocateObjectAttr @ 0x1C005D650 (HmgAllocateObjectAttr.c)
 * Callees:
 *     <none>
 */

void __fastcall HmgFreeAllocateSecureUserMemory(void *a1, void *a2)
{
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+18h] BYREF

  BaseAddress = a1;
  RegionSize = 4096LL;
  MmUnsecureVirtualMemory(a2);
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
}
