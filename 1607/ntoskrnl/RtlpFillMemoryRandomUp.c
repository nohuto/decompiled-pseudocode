/*
 * XREFs of RtlpFillMemoryRandomUp @ 0x1402166D0
 * Callers:
 *     RtlpGenericRandomPatternWorker @ 0x140216BEC (RtlpGenericRandomPatternWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpFillMemoryRandomUp(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 result; // rax
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // r11

  v4 = 0LL;
  result = a1 + 4096;
  v6 = (unsigned __int64 *)a1;
  v7 = 512LL;
  if ( a1 >= a1 + 4096 )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      *v6++ = a3;
      result = a3 >> 4;
      ++v4;
      a3 = (a3 >> 4) ^ *(_QWORD *)(a4 + 8 * (a3 & 0xF));
    }
    while ( v4 < v7 );
  }
  return result;
}
