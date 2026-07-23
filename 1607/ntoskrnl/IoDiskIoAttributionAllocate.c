/*
 * XREFs of IoDiskIoAttributionAllocate @ 0x1404D4AC4
 * Callers:
 *     PspIoRateEntryActivate @ 0x1404D4244 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x1404D4800 (PspSetJobIoAttribution.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IoDiskIoAttributionReference @ 0x1401C892C (IoDiskIoAttributionReference.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

struct _EX_RUNDOWN_REF *__fastcall IoDiskIoAttributionAllocate(unsigned __int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *result; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax

  result = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x41446F49u);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0xA8uLL);
    v5[5].Count = 0LL;
    v5[2].Count = -1LL;
    v5[4].Count = 1LL;
    do
    {
      v6 = _InterlockedExchangeAdd64(&IopDiskIoAttributionKey, 1uLL);
      v5[3].Count = v6 + 1;
    }
    while ( v6 == -1 );
    v5[19].Count = 0LL;
    if ( a1 )
      v5[18].Count = a1;
    else
      ExWaitForRundownProtectionRelease(v5 + 19);
    if ( a2 )
    {
      IoDiskIoAttributionReference(a2);
      v5[20].Count = a2;
    }
    return v5;
  }
  return result;
}
