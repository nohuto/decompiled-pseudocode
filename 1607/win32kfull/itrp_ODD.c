/*
 * XREFs of itrp_ODD @ 0x1C01441E0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_RoundToGrid @ 0x1C0144254 (itrp_RoundToGrid.c)
 */

__int64 itrp_ODD()
{
  int v0; // eax
  __int64 v1; // r9
  __int64 v2; // r11
  __int64 result; // rax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2 )
  {
    v0 = itrp_RoundToGrid(*(unsigned int *)(qword_1C03294C8 - 4), 0LL);
    *(_DWORD *)(v1 - 4) = (v0 >> 6) & 1;
    return v2;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
  }
  return result;
}
