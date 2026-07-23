/*
 * XREFs of MmIsDriverVerifyingByAddress @ 0x140547980
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MiReleaseResourceLite @ 0x140082D74 (MiReleaseResourceLite.c)
 *     MiAcquireResourceSharedLite @ 0x1400883F0 (MiAcquireResourceSharedLite.c)
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
