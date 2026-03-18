/*
 * XREFs of MmIsDriverVerifyingByAddress @ 0x14050C124
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseResourceLite @ 0x14001A338 (MiReleaseResourceLite.c)
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     MiAcquireResourceSharedLite @ 0x1400EF804 (MiAcquireResourceSharedLite.c)
 */

LOGICAL __stdcall MmIsDriverVerifyingByAddress(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rsi
  LOGICAL v3; // edi
  PVOID *v4; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 1;
  MiAcquireResourceSharedLite((__int64)CurrentThread);
  v4 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 1);
  if ( !v4 || ((_DWORD)v4[13] & 0x2000000) == 0 )
    v3 = 0;
  MiReleaseResourceLite((__int64)CurrentThread);
  return v3;
}
