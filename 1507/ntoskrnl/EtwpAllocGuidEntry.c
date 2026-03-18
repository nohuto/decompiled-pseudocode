/*
 * XREFs of EtwpAllocGuidEntry @ 0x1404D4290
 * Callers:
 *     EtwpAddGuidEntry @ 0x1404D4348 (EtwpAddGuidEntry.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1404D2714 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x1404D3424 (EtwpFreeSecurityDescriptor.c)
 */

char *__fastcall EtwpAllocGuidEntry(unsigned int *a1)
{
  char *PoolWithTag; // rax
  char *v3; // rbx
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( EtwpCounters >= 0x8000 )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x180uLL, 0x47777445u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x180uLL);
  *((_QWORD *)v3 + 2) = 1LL;
  *(_OWORD *)(v3 + 24) = *(_OWORD *)a1;
  *((_QWORD *)v3 + 6) = v3 + 40;
  *((_QWORD *)v3 + 5) = v3 + 40;
  EtwpGetSecurityDescriptorByGuid(a1, &v5);
  if ( (int)ObLogSecurityDescriptor(v5, (_QWORD *)v3 + 7, 1u) < 0 )
  {
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
  }
  EtwpFreeSecurityDescriptor(&v5);
  if ( v3 )
    _InterlockedIncrement(&EtwpCounters);
  return v3;
}
