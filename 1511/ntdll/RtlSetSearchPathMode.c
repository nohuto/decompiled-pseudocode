/*
 * XREFs of RtlSetSearchPathMode @ 0x1800844C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x180084570 (RtlpInvalidatePathCache.c)
 */

NTSTATUS __cdecl RtlSetSearchPathMode(ULONG Flags)
{
  NTSTATUS v2; // ebx
  void *v3; // rdi

  if ( (Flags & 0xFFFE7FFE) != 0 )
    return -1073741811;
  if ( (Flags & 1) == 0 )
  {
    if ( (Flags & 0x18000) == 0x10000 )
      goto LABEL_4;
    return -1073741811;
  }
  if ( (Flags & 0x10000) != 0 )
    return -1073741811;
LABEL_4:
  RtlAcquireSRWLockExclusive(&SRWLock);
  if ( (_bittest(&RtlpSearchPathMode, 0xFu) & ((Flags & 0x8000) == 0)) != 0 )
  {
    v2 = -1073741790;
  }
  else
  {
    RtlpSearchPathMode = Flags;
    v2 = 0;
  }
  RtlReleaseSRWLockExclusive(&SRWLock);
  if ( v2 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v3 = (void *)RtlpInvalidatePathCache(&RtlpSearchPath);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return v2;
}
