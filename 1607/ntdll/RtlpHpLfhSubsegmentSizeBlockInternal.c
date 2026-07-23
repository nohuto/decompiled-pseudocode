/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlockInternal @ 0x18004455C
 * Callers:
 *     RtlpHpSegAllocSizeInternal @ 0x1800445FC (RtlpHpSegAllocSizeInternal.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x18004E850 (RtlpHpLfhSubsegmentWalk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlockInternal(__int64 a1, __int64 a2, int a3, int *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // edx
  int v6; // edx

  v4 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned int)a1 >> 12) ^ *(unsigned __int16 *)(a1 + 40);
  if ( ((*(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)(2 * a3) >> 6) + 48) >> ((2 * a3) & 0x3F)) & 2) != 0 )
  {
    v5 = *(unsigned __int16 *)(((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned int)a1 >> 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 40))
                             + a2
                             - 2);
    if ( (v5 & 0x8000u) != 0 )
      --v4;
    else
      v4 -= v5 & 0x3FFF;
    v6 = (v5 >> 14) & 1;
  }
  else
  {
    v6 = 0;
  }
  if ( a4 )
    *a4 = v6;
  return v4;
}
