/*
 * XREFs of RawSetInformation @ 0x1406C7008
 * Callers:
 *     RawDispatch @ 0x14040B7FC (RawDispatch.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 */

__int64 __fastcall RawSetInformation(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v7; // ebx
  struct _IRP *MasterIrp; // rbx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = *(_QWORD *)(a1 + 200);
  if ( v3 && *(_QWORD *)(a3 + 48) == v3
    || ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u) )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    v9 = *(_QWORD *)(a3 + 48);
    if ( *(_DWORD *)(a3 + 16) == 14 )
    {
      if ( (IoGetRelatedDeviceObject(*(PFILE_OBJECT *)(a3 + 48))->AlignmentRequirement & *(_DWORD *)&MasterIrp->Type) != 0 )
      {
        v7 = -1073741811;
      }
      else
      {
        v10 = *(_QWORD *)&MasterIrp->Type;
        v7 = 0;
        *(_QWORD *)(v9 + 104) = v10;
      }
    }
    else
    {
      v7 = -1073741808;
    }
    v11 = *(_QWORD *)(a1 + 200);
    if ( !v11 || *(_QWORD *)(a3 + 48) != v11 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
  }
  else
  {
    v7 = -1073741202;
  }
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 1);
  return v7;
}
