/*
 * XREFs of SmpDisposeSubSysSynch @ 0x140013364
 * Callers:
 *     SmpCompleteSubSysStatusChange @ 0x140005440 (SmpCompleteSubSysStatusChange.c)
 *     SmpDereferenceKnownSubSys @ 0x140007B10 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForStatusChange @ 0x1400134C8 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

void __fastcall SmpDisposeSubSysSynch(HANDLE *BaseAddress)
{
  HANDLE *v1; // rbx

  if ( BaseAddress )
  {
    v1 = BaseAddress;
    if ( (unsigned int)SmpSubSysSynchCacheSize >= 0x10 )
      goto LABEL_6;
    NtClearEvent(BaseAddress[1]);
    RtlAcquireSRWLockExclusive(&SmpSubSysSynchLock);
    if ( (unsigned int)SmpSubSysSynchCacheSize < 0x10 )
    {
      ++SmpSubSysSynchCacheSize;
      *v1 = (HANDLE)SmpSubSysSynchCache;
      SmpSubSysSynchCache = (__int64)v1;
      v1 = 0LL;
    }
    RtlReleaseSRWLockExclusive(&SmpSubSysSynchLock);
    if ( v1 )
    {
LABEL_6:
      NtClose(v1[1]);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v1);
    }
  }
}
