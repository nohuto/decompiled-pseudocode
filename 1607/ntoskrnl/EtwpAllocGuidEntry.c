/*
 * XREFs of EtwpAllocGuidEntry @ 0x14048E200
 * Callers:
 *     EtwpAddGuidEntry @ 0x14048E090 (EtwpAddGuidEntry.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140406CC8 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x140406F58 (EtwpFreeSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 */

char *__fastcall EtwpAllocGuidEntry(unsigned int *a1)
{
  char *result; // rax
  char *v3; // rbx
  void *v4; // [rsp+38h] [rbp+10h] BYREF

  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x190uLL, 0x47777445u);
  v3 = result;
  if ( result )
  {
    memset(result, 0, 0x190uLL);
    *((_QWORD *)v3 + 2) = 1LL;
    *(_OWORD *)(v3 + 24) = *(_OWORD *)a1;
    *((_QWORD *)v3 + 6) = v3 + 40;
    *((_QWORD *)v3 + 5) = v3 + 40;
    *((_QWORD *)v3 + 49) = 0LL;
    *((_QWORD *)v3 + 48) = 0LL;
    EtwpGetSecurityDescriptorByGuid(a1, &v4);
    if ( (int)ObLogSecurityDescriptor(v4, (_QWORD *)v3 + 7, 1u) < 0 )
    {
      ExFreePoolWithTag(v3, 0);
      v3 = 0LL;
    }
    EtwpFreeSecurityDescriptor(&v4);
    if ( v3 )
      _InterlockedIncrement(&EtwpCounters);
    return v3;
  }
  return result;
}
