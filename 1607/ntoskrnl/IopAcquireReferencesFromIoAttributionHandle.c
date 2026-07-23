/*
 * XREFs of IopAcquireReferencesFromIoAttributionHandle @ 0x1400B3F34
 * Callers:
 *     IoGetIoRateControl @ 0x1400B3E00 (IoGetIoRateControl.c)
 *     IoNotifyQuotaState @ 0x1401CBF68 (IoNotifyQuotaState.c)
 * Callees:
 *     IopFindDiskIoAttribution @ 0x14001EE78 (IopFindDiskIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall IopAcquireReferencesFromIoAttributionHandle(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _RTL_BALANCED_NODE *DiskIoAttribution; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // edi

  DiskIoAttribution = IopFindDiskIoAttribution(a1);
  v6 = (__int64)DiskIoAttribution;
  if ( DiskIoAttribution )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&DiskIoAttribution[6].Right) )
    {
      v7 = *(_QWORD *)(v6 + 144);
      *a2 = v6;
      v6 = 0LL;
      *a3 = v7;
      v8 = 0;
    }
    else
    {
      v8 = -1073741431;
    }
    if ( v6 )
      IoDiskIoAttributionDereference(v6);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v8;
}
