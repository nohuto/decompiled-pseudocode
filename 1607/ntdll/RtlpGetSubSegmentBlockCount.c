/*
 * XREFs of RtlpGetSubSegmentBlockCount @ 0x180042500
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x180041EFC (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetSubSegmentBlockCount(unsigned int a1, unsigned int a2, char a3, int a4)
{
  unsigned int v4; // r10d

  v4 = a2;
  if ( a1 < 0x100 )
    --a3;
  if ( a4 )
    --a3;
  if ( a2 < 1 << (3 - a3) )
    v4 = 1 << (3 - a3);
  if ( v4 < 4 )
    v4 = 4;
  if ( v4 > 0x400 )
    return 1024;
  return v4;
}
