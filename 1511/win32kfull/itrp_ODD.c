/*
 * XREFs of itrp_ODD @ 0x1C00E75E0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_RoundToGrid @ 0x1C00E7654 (itrp_RoundToGrid.c)
 */

__int64 itrp_ODD()
{
  int v0; // eax
  __int64 v1; // r9
  __int64 v2; // r11
  __int64 result; // rax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2 )
  {
    v0 = itrp_RoundToGrid(*(unsigned int *)(qword_1C0323E18 - 4), 0LL);
    *(_DWORD *)(v1 - 4) = (v0 >> 6) & 1;
    return v2;
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
  }
  return result;
}
