/*
 * XREFs of itrp_EVEN @ 0x1C02E0590
 * Callers:
 *     <none>
 * Callees:
 *     itrp_RoundToGrid @ 0x1C0144254 (itrp_RoundToGrid.c)
 */

__int64 itrp_EVEN()
{
  int v0; // eax
  __int64 v1; // r9
  __int64 v2; // r11
  __int64 result; // rax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2 )
  {
    v0 = itrp_RoundToGrid(*(_DWORD *)(qword_1C03294C8 - 4), 0);
    *(_DWORD *)(v1 - 4) = ((unsigned __int8)(v0 >> 6) - 1) & 1;
    return v2;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
  }
  return result;
}
