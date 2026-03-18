/*
 * XREFs of SetLogSize @ 0x1C0007724
 * Callers:
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x1C002C1C0 (memset.c)
 */

char SetLogSize()
{
  char v0; // bl
  PVOID PoolWithTag; // rax

  v0 = 0;
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    qword_1C0074668 = 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3960uLL, 0x474F4C45u);
  P = PoolWithTag;
  if ( PoolWithTag )
  {
    qword_1C0074668 = 204LL;
    memset(PoolWithTag, 0, 0x3960uLL);
    return 1;
  }
  return v0;
}
