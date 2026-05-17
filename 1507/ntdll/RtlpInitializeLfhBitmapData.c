/*
 * XREFs of RtlpInitializeLfhBitmapData @ 0x1800EA4E4
 * Callers:
 *     RtlpSubSegmentDebugInitialize @ 0x1800F08C4 (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpInitializeLfhBitmapData(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  void *v2; // rdi
  __int64 result; // rax

  v1 = *a1;
  v2 = (void *)a1[1];
  result = (__int64)memset(v2, 0, (*a1 + 7) >> 3);
  if ( (v1 & 0x3F) != 0 )
  {
    result = ~((1LL << (v1 & 0x3F)) - 1);
    *((_QWORD *)v2 + (v1 >> 6)) |= result;
  }
  return result;
}
