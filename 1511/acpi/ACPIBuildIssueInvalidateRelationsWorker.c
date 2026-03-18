/*
 * XREFs of ACPIBuildIssueInvalidateRelationsWorker @ 0x1C00203C4
 * Callers:
 *     ACPIBuildIssueInvalidateRelations @ 0x1C0020390 (ACPIBuildIssueInvalidateRelations.c)
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x1C00203C4 (ACPIBuildIssueInvalidateRelationsWorker.c)
 * Callees:
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x1C00203C4 (ACPIBuildIssueInvalidateRelationsWorker.c)
 *     ACPIPendingInvalidate @ 0x1C00204D0 (ACPIPendingInvalidate.c)
 */

void __fastcall ACPIBuildIssueInvalidateRelationsWorker(__int64 a1)
{
  volatile signed __int64 v2; // rcx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  _DWORD *v5; // rcx
  __int64 v6; // r10

  v2 = *(_QWORD *)a1;
  if ( (v2 & 0x208) == 0x200 )
  {
    if ( (v2 & 0x40000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)a1, 0xFFFFFBFFFFFFFFFFuLL);
      if ( !(unsigned __int8)ACPIPendingInvalidate(a1) )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v6 + 728), BusRelations);
    }
    else
    {
      v3 = (_QWORD *)(a1 + 744);
      v4 = *(_QWORD **)(a1 + 744);
      while ( v4 != v3 )
      {
        v5 = v4 - 95;
        v4 = (_QWORD *)*v4;
        if ( (*v5 & 0x208) == 0x200LL )
          ACPIBuildIssueInvalidateRelationsWorker(v5);
      }
    }
  }
}
