/*
 * XREFs of EtwpAllocGuidEntry @ 0x1404CEEAC
 * Callers:
 *     EtwpAddGuidEntry @ 0x1404CED18 (EtwpAddGuidEntry.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 *     EtwpFreeSecurityDescriptor @ 0x14046D564 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14046E010 (EtwpGetSecurityDescriptorByGuid.c)
 */

char *__fastcall EtwpAllocGuidEntry(unsigned int *a1)
{
  char *PoolWithTag; // rax
  char *v3; // rbx
  void *Src; // [rsp+38h] [rbp+10h] BYREF

  if ( EtwpCounters >= 0x8000 )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x190uLL, 0x47777445u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x190uLL);
  *((_QWORD *)v3 + 2) = 1LL;
  *(_OWORD *)(v3 + 24) = *(_OWORD *)a1;
  *((_QWORD *)v3 + 6) = v3 + 40;
  *((_QWORD *)v3 + 5) = v3 + 40;
  *((_QWORD *)v3 + 49) = 0LL;
  *((_QWORD *)v3 + 48) = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &Src);
  if ( (int)ObLogSecurityDescriptor((char *)Src, (_QWORD *)v3 + 7, 1u) < 0 )
  {
    ExFreePoolWithTag(v3, 0);
    v3 = 0LL;
  }
  EtwpFreeSecurityDescriptor(&Src);
  if ( v3 )
    _InterlockedIncrement(&EtwpCounters);
  return v3;
}
