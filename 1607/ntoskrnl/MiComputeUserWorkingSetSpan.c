/*
 * XREFs of MiComputeUserWorkingSetSpan @ 0x14078F94C
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 MiComputeUserWorkingSetSpan()
{
  __int64 v0; // r8
  unsigned __int64 v1; // rcx
  __int64 v2; // r9
  __int64 result; // rax

  v0 = 0LL;
  v1 = 512LL;
  v2 = 3LL;
  do
  {
    v0 += 0x80000FFF0LL / v1 + 1;
    v1 *= v1;
    --v2;
  }
  while ( v2 );
  qword_140326D50 = (16 * (v0 + 0x80000FFF0LL) + qword_140327FD0 + 1350583151) & 0xFFFFFFFFC0000000uLL | 1;
  qword_140326D40 = ((16 * (v0 + 0x80000FFF0LL) + qword_140327FD0 + 1350583151) & 0xFFFFFFFFC0000000uLL) + 4096;
  result = qword_140326D40 + 8 * (v0 + 0x80000FFF0LL);
  qword_140326D48 = result;
  return result;
}
