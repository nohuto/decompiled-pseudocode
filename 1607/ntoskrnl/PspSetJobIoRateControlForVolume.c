/*
 * XREFs of PspSetJobIoRateControlForVolume @ 0x1406809FC
 * Callers:
 *     PspSetJobIoRateControl @ 0x1404D4610 (PspSetJobIoRateControl.c)
 * Callees:
 *     PspIoRateControlInfoIsAnySet @ 0x1400B4F90 (PspIoRateControlInfoIsAnySet.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x14020F79C (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x14020F8E0 (PspJobIoRateVolumeEntryRemove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PspIoRateEntryDeactivate @ 0x1404D3B2C (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryActivate @ 0x1404D4244 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryInitialize @ 0x14051A7D0 (PspIoRateEntryInitialize.c)
 */

__int64 __fastcall PspSetJobIoRateControlForVolume(__int64 a1, _QWORD *a2, _BYTE *a3, _BYTE *a4, unsigned __int64 *a5)
{
  char v9; // si
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx
  int v12; // edi
  _RTL_BALANCED_NODE *v13; // rax
  _RTL_BALANCED_NODE *v14; // rdi

  *a3 = 0;
  *a4 = 0;
  *a5 = 0LL;
  v9 = 0;
  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x694A7350u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    PspIoRateEntryInitialize(PoolWithTag);
    v12 = PspIoRateEntryActivate(v11, a1, (__int64)a2, 0LL);
    if ( v12 >= 0 )
    {
      v9 = 1;
      v13 = PspJobIoRateVolumeEntryRemove(a1, v11[3].Count);
      v14 = v13;
      if ( v13 )
      {
        PspIoRateEntryDeactivate((struct _EX_RUNDOWN_REF *)v13);
        ExFreePoolWithTag(v14, 0);
        *a3 = 1;
      }
      if ( (unsigned __int8)PspIoRateControlInfoIsAnySet(a2) )
      {
        *a5 = v11[5].Count;
        PspJobIoRateVolumeEntryInsert(a1, (_RTL_BALANCED_NODE *)v11);
        v11 = 0LL;
        *a4 = 1;
      }
      v12 = 0;
    }
    if ( v11 )
    {
      if ( v9 )
        PspIoRateEntryDeactivate(v11);
      ExFreePoolWithTag(v11, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v12;
}
