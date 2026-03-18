/*
 * XREFs of itrp_SetElementPtr @ 0x1C011DE50
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

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2 )
  {
    qword_1C03294C8 -= 4LL;
    v2 = *(int *)qword_1C03294C8;
    if ( (unsigned int)v2 <= 1 )
    {
      v3 = a2 - 19;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( !v4 )
        {
          qword_1C03294A8 = qword_1C03294D8 + 112 * v2;
          goto LABEL_10;
        }
        v5 = v4 - 1;
        if ( !v5 )
        {
          qword_1C03294B0 = qword_1C03294D8 + 112 * v2;
          goto LABEL_10;
        }
        if ( v5 != 1 )
        {
LABEL_10:
          word_1C032952C = 0;
          return a1;
        }
        qword_1C03294B0 = qword_1C03294D8 + 112 * v2;
        qword_1C03294A8 = qword_1C03294D8 + 112 * v2;
      }
      LocalGS = qword_1C03294D8 + 112 * v2;
      goto LABEL_10;
    }
    dword_1C0329530 = 4374;
  }
  else
  {
    dword_1C0329530 = 4368;
  }
  return qword_1C0329538;
}
