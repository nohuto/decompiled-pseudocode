/*
 * XREFs of HvlpCountFlushVaList @ 0x1401C1574
 * Callers:
 *     HvlpFlushRangeListTb @ 0x1401C17FC (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x1401C1880 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpCountFlushVaList(unsigned int a1, _QWORD *a2)
{
  __int64 v2; // r8
  unsigned int v4; // ecx
  __int64 v5; // r9

  v2 = a1;
  if ( (HvlpFlags & 0x2000) == 0 )
    return a1;
  v4 = 0;
  if ( (_DWORD)v2 )
  {
    v5 = v2;
    do
    {
      ++v4;
      if ( (*a2 & 0xC00LL) != 0 )
        v4 += *a2 & 0x3FF;
      ++a2;
      --v5;
    }
    while ( v5 );
  }
  return v4;
}
