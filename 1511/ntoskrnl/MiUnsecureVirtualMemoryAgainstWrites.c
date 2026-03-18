/*
 * XREFs of MiUnsecureVirtualMemoryAgainstWrites @ 0x1404ABF3C
 * Callers:
 *     MiRemoveSecureEntry @ 0x1400383F0 (MiRemoveSecureEntry.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B7F8 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 */

__int64 __fastcall MiUnsecureVirtualMemoryAgainstWrites(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _DWORD v4[6]; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  return MiSetProtectionOnSection((__int64)KeGetCurrentThread()->ApcState.Process, a1, a2, a3, 4u, 0, v4, &v5);
}
