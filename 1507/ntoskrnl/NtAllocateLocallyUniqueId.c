/*
 * XREFs of NtAllocateLocallyUniqueId @ 0x140529090
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAllocateLocallyUniqueId(LUID *LocallyUniqueId)
{
  _BYTE *v1; // rdx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v1 = LocallyUniqueId;
    if ( ((unsigned __int8)LocallyUniqueId & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)LocallyUniqueId >= MmUserProbeAddress )
      v1 = (_BYTE *)MmUserProbeAddress;
    *v1 = *v1;
    v1[7] = v1[7];
  }
  *LocallyUniqueId = (LUID)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
  return 0;
}
