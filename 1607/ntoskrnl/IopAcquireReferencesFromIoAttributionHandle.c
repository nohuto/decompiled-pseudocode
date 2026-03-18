/*
 * XREFs of IopAcquireReferencesFromIoAttributionHandle @ 0x1400B610C
 * Callers:
 *     IoGetIoRateControl @ 0x1400B5FD8 (IoGetIoRateControl.c)
 *     IoNotifyQuotaState @ 0x1401CC084 (IoNotifyQuotaState.c)
 * Callees:
 *     IopFindDiskIoAttribution @ 0x14001F2F8 (IopFindDiskIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14001F3AC (IoDiskIoAttributionDereference.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall IopAcquireReferencesFromIoAttributionHandle(__int64 a1, __int64 *a2, _QWORD *a3)
{
  struct _EX_RUNDOWN_REF *DiskIoAttribution; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // edi

  DiskIoAttribution = (struct _EX_RUNDOWN_REF *)IopFindDiskIoAttribution(a1);
  v6 = (__int64)DiskIoAttribution;
  if ( DiskIoAttribution )
  {
    if ( ExAcquireRundownProtection(DiskIoAttribution + 19) )
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
