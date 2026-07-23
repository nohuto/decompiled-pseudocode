/*
 * XREFs of NtAllocateLocallyUniqueId @ 0x1404A8750
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAllocateLocallyUniqueId(LUID *LocallyUniqueId)
{
  __int64 v1; // rdx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v1 = (__int64)LocallyUniqueId;
    if ( ((unsigned __int8)LocallyUniqueId & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)LocallyUniqueId >= 0x7FFFFFFF0000LL )
      v1 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v1 = *(_BYTE *)v1;
    *(_BYTE *)(v1 + 7) = *(_BYTE *)(v1 + 7);
  }
  *LocallyUniqueId = (LUID)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
  return 0;
}
