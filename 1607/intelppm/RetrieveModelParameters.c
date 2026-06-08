/*
 * XREFs of RetrieveModelParameters @ 0x1C001A17C
 * Callers:
 *     InitEnergyCounters @ 0x1C0019D60 (InitEnergyCounters.c)
 * Callees:
 *     memset @ 0x1C0002DC0 (memset.c)
 */

__int64 __fastcall RetrieveModelParameters(unsigned int *a1)
{
  unsigned int v2; // r9d
  unsigned int v3; // r10d
  float *v4; // rcx
  __int64 v5; // rdx
  double v6; // xmm0_8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 result; // rax

  memset(a1, 0, 0x98uLL);
  v2 = 0;
  a1[1] = dword_1C000F258[0] / 0x3E8u;
  v3 = dword_1C000F25C;
  if ( dword_1C000F25C )
  {
    v4 = (float *)&unk_1C000F268;
    do
    {
      if ( (*(_DWORD *)(v4 - 1) & 1) != 0 )
      {
        v5 = *((unsigned int *)v4 - 2);
        v6 = *v4;
        if ( *((_WORD *)v4 - 1) )
        {
          if ( *((_WORD *)v4 - 1) == 1 )
          {
            v8 = a1[2];
            if ( (_DWORD)v8 == 4 )
              goto LABEL_16;
            a1[v8 + 3] = v5;
            *(double *)&a1[2 * v8 + 22] = v6;
            a1[2] = v8 + 1;
          }
          else if ( *((_WORD *)v4 - 1) == 2 )
          {
            v7 = a1[7];
            if ( (_DWORD)v7 == 4 )
              goto LABEL_16;
            a1[v7 + 8] = v5;
            *(double *)&a1[2 * v7 + 30] = v6;
            a1[7] = v7 + 1;
          }
        }
        else
        {
          if ( (unsigned int)v5 >= 5 )
            goto LABEL_16;
          *(double *)&a1[2 * v5 + 12] = v6;
        }
      }
      ++v2;
      v4 += 3;
    }
    while ( v2 < v3 );
  }
  if ( a1[2] )
    *a1 |= 1u;
LABEL_16:
  result = *a1;
  if ( (result & 1) == 0 )
  {
    result = (__int64)memset(a1, 0, 0x98uLL);
    *a1 &= ~1u;
    a1[2] = 1;
    a1[3] = 1593;
  }
  return result;
}
