/*
 * XREFs of RtlpHpVsChunkFree @ 0x180050C3C
 * Callers:
 *     RtlpHpVsContextFree @ 0x180050AE0 (RtlpHpVsContextFree.c)
 * Callees:
 *     RtlpHpVsChunkCoalesce @ 0x18001EE20 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsFreeChunkInsert @ 0x18002ACD0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkDecommit @ 0x180050CDC (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180050E64 (RtlpHpVsSubsegmentCleanup.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int i; // r14d
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  for ( i = 0; ; i = v10 )
  {
    a3 = RtlpHpVsChunkCoalesce((__int64)a1, a2, a3, &v10);
    if ( v10 == *(unsigned __int16 *)(a2 + 32) )
      break;
    if ( v10 <= i || !(unsigned int)RtlpHpVsChunkDecommit(a1, a2, a3, a4) )
    {
      RtlpHpVsFreeChunkInsert(a1, a2, a3);
      return 0LL;
    }
  }
  RtlpHpVsSubsegmentCleanup(a1, a2);
  return a2;
}
