/*
 * XREFs of SetLogSize @ 0x1C0005248
 * Callers:
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x1C0023B40 (memset.c)
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
    qword_1C005A1E8 = 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3960uLL, 0x474F4C45u);
  P = PoolWithTag;
  if ( PoolWithTag )
  {
    qword_1C005A1E8 = 204LL;
    memset(PoolWithTag, 0, 0x3960uLL);
    return 1;
  }
  return v0;
}
