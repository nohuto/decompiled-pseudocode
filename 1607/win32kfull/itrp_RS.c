/*
 * XREFs of itrp_RS @ 0x1C00CC430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RS(__int64 a1)
{
  int *v2; // rdx
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r10
  __int16 v7; // ax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || !((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  v2 = (int *)(qword_1C03294C8 - 4);
  qword_1C03294C8 = (__int64)v2;
  v3 = *(_QWORD *)(qword_1C03294E0 + 344);
  v4 = *v2;
  if ( (int)v4 >= *(unsigned __int16 *)(v3 + 18)
    || (int)v4 < 0
    || (v5 = *(_QWORD *)(qword_1C03294E0 + 8),
        (qword_1C03294E0 ^ v3 ^ v5 ^ MEMORY[0xFFFFF78000000330]) != *(_QWORD *)(qword_1C03294E0 + 352)) )
  {
    dword_1C0329530 = 4377;
    return qword_1C0329538;
  }
  if ( (_DWORD)v4 == 8
    && (*(_BYTE *)(qword_1C03294E0 + 452) & 1) != 0
    && (*(_BYTE *)(qword_1C03294E0 + 120) & 4) == 0
    && (v7 = *(_WORD *)(qword_1C03294E0 + 454), (v7 & 0x400) != 0) )
  {
    *(_WORD *)(qword_1C03294E0 + 454) = v7 | 8;
    *(_DWORD *)qword_1C03294C8 = 0;
  }
  else
  {
    *v2 = *(_DWORD *)(v5 + 4 * v4);
  }
  qword_1C03294C8 += 4LL;
  return a1;
}
