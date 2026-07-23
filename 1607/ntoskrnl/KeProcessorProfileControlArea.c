/*
 * XREFs of KeProcessorProfileControlArea @ 0x1401D2760
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KeProcessorProfileControlArea(__int64 a1, int a2, char a3)
{
  char v5; // si
  _PROCESSOR_PROFILE_CONTROL_AREA *v6; // rbx
  _PROCESSOR_PROFILE_CONTROL_AREA *PoolWithTag; // rax
  unsigned __int8 CurrentIrql; // r9
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v10; // rax
  _PROCESSOR_PROFILE_CONTROL_AREA *v11; // rax
  unsigned int v12; // edi
  _PROCESSOR_PROFILE_CONTROL_AREA *ProcessorProfileControlArea; // rax

  if ( a3 )
    return 3221225506LL;
  if ( a2 != 16 )
    return 3221225476LL;
  v5 = *(_BYTE *)(a1 + 8);
  v6 = 0LL;
  if ( v5 )
  {
    PoolWithTag = (_PROCESSOR_PROFILE_CONTROL_AREA *)ExAllocatePoolWithTag(
                                                       NonPagedPoolNxCacheAligned,
                                                       0x60uLL,
                                                       0x41435050u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
      *(_QWORD *)a1 = 0LL;
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, sizeof(_PROCESSOR_PROFILE_CONTROL_AREA));
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor != 2 || (v10 = __readmsr(0x1A0u), (v10 & 0x1080) != 0x80) )
  {
    *(_QWORD *)a1 = 0LL;
    v12 = -1073741637;
    goto LABEL_20;
  }
  if ( !v5 )
  {
    *(_QWORD *)a1 = 0LL;
    ProcessorProfileControlArea = CurrentPrcb->ProcessorProfileControlArea;
    if ( !ProcessorProfileControlArea )
    {
      v12 = -1073741664;
      goto LABEL_20;
    }
    CurrentPrcb->ProcessorProfileControlArea = 0LL;
    v6 = ProcessorProfileControlArea;
    CurrentPrcb->ProfileEventIndexAddress = &CurrentPrcb->ProfileEventIndexAddress;
LABEL_18:
    v12 = 0;
    goto LABEL_20;
  }
  v11 = CurrentPrcb->ProcessorProfileControlArea;
  if ( !v11 )
  {
    CurrentPrcb->ProcessorProfileControlArea = v6;
    CurrentPrcb->ProfileEventIndexAddress = &v6->PebsDsSaveArea.PebsIndex;
    *(_QWORD *)a1 = v6;
    v6 = 0LL;
    goto LABEL_18;
  }
  *(_QWORD *)a1 = v11;
  v12 = -1073741302;
LABEL_20:
  __writecr8(CurrentIrql);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v12;
}
