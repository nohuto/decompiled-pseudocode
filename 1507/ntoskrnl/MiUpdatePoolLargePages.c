/*
 * XREFs of MiUpdatePoolLargePages @ 0x1407D4E20
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 MiUpdatePoolLargePages()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // rdx
  __int64 v2; // rax

  v0 = 0xFFFFF6F000000000uLL;
  v1 = (((unsigned __int64)((qword_14034FC60 << 12) - 0x200000000001LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 3LL;
  do
  {
    v0 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v2;
  }
  while ( v2 );
  return MiMarkLargeNonPagedPool(v0, v1);
}
