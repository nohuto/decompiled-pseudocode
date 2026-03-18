/*
 * XREFs of PspAddProcessToWorkingSetChangeList @ 0x1406C42F8
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsProcessCallback @ 0x1406C4C14 (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     MmEnforceWorkingSetLimit @ 0x14000961C (MmEnforceWorkingSetLimit.c)
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
          v4 = (__int64 **)qword_140323A68;
          *(_QWORD *)PoolWithTag = &PspWorkingSetChangeHead;
          *(_QWORD *)(PoolWithTag + 8) = v4;
          if ( *v4 != &PspWorkingSetChangeHead )
            __fastfail(3u);
          *v4 = (__int64 *)PoolWithTag;
          qword_140323A68 = PoolWithTag;
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
