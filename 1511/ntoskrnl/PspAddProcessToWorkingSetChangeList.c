/*
 * XREFs of PspAddProcessToWorkingSetChangeList @ 0x140641D50
 * Callers:
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsProcessCallback @ 0x1406426CC (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     MmEnforceWorkingSetLimit @ 0x140021C18 (MmEnforceWorkingSetLimit.c)
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

char __fastcall PspAddProcessToWorkingSetChangeList(_KPROCESS *Object)
{
  __int64 PoolWithTag; // rax
  unsigned __int64 v3; // rdi
  __int64 **v4; // rcx

  LODWORD(PoolWithTag) = Object[1].DirectoryTableBase;
  if ( (PoolWithTag & 1) == 0 )
  {
    v3 = Object[1].Affinity.Bitmap[16];
    if ( (*(_DWORD *)(v3 + 856) & 1) != 0 )
    {
      LOBYTE(PoolWithTag) = ObReferenceObjectSafeWithTag((__int64)Object);
      if ( (_BYTE)PoolWithTag )
      {
        PoolWithTag = (__int64)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x72437350u);
        if ( PoolWithTag )
        {
          *(_QWORD *)(PoolWithTag + 16) = Object;
          *(_QWORD *)(PoolWithTag + 32) = *(_QWORD *)(v3 + 800);
          *(_QWORD *)(PoolWithTag + 24) = *(_QWORD *)(v3 + 792);
          v4 = (__int64 **)qword_1402D4948;
          *(_QWORD *)PoolWithTag = &PspWorkingSetChangeHead;
          *(_QWORD *)(PoolWithTag + 8) = v4;
          if ( *v4 != &PspWorkingSetChangeHead )
            __fastfail(3u);
          *v4 = (__int64 *)PoolWithTag;
          qword_1402D4948 = PoolWithTag;
        }
        else
        {
          LOBYTE(PoolWithTag) = ObfDereferenceObjectWithTag(Object, 0x624A7350u);
        }
      }
    }
    else
    {
      LOBYTE(PoolWithTag) = MmEnforceWorkingSetLimit(Object, 2);
    }
  }
  return PoolWithTag;
}
