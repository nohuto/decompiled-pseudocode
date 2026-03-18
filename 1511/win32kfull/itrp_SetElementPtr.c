/*
 * XREFs of itrp_SetElementPtr @ 0x1C00F4490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SetElementPtr(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // edx
  int v5; // edx

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2 )
  {
    qword_1C0323E18 -= 4LL;
    v2 = *(int *)qword_1C0323E18;
    if ( (unsigned int)v2 <= 1 )
    {
      v3 = a2 - 19;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( !v4 )
        {
          qword_1C0323DF8 = qword_1C0323E28 + 112 * v2;
          goto LABEL_10;
        }
        v5 = v4 - 1;
        if ( !v5 )
        {
          qword_1C0323E00 = qword_1C0323E28 + 112 * v2;
          goto LABEL_10;
        }
        if ( v5 != 1 )
        {
LABEL_10:
          word_1C0323E7C = 0;
          return a1;
        }
        qword_1C0323E00 = qword_1C0323E28 + 112 * v2;
        qword_1C0323DF8 = qword_1C0323E28 + 112 * v2;
      }
      LocalGS = qword_1C0323E28 + 112 * v2;
      goto LABEL_10;
    }
    dword_1C0323E80 = 4374;
  }
  else
  {
    dword_1C0323E80 = 4368;
  }
  return qword_1C0323E88;
}
