/*
 * XREFs of itrp_WCVTFOD @ 0x1C00EE530
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C00ADCB0 (InvokeGlobalGSScale.c)
 */

__int64 __fastcall itrp_WCVTFOD(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rdi

  v1 = qword_1C0323E30;
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (v3 = qword_1C0323E18, (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) >= 2) )
  {
    qword_1C0323E18 -= 4LL;
    v4 = *(_DWORD *)(v3 - 4);
    qword_1C0323E18 = v3 - 8;
    v5 = *(int *)(v3 - 8);
    if ( (int)v5 < *(unsigned __int16 *)(qword_1C0323E30 + 360)
      && (int)v5 >= 0
      && (qword_1C0323E30 ^ *(_QWORD *)(qword_1C0323E30 + 16) ^ MEMORY[0xFFFFF78000000330] ^ (unsigned __int64)*(unsigned __int16 *)(qword_1C0323E30 + 360)) == *(_QWORD *)(qword_1C0323E30 + 368) )
    {
      *(_DWORD *)(*(_QWORD *)(v1 + 16) + 4 * v5) = InvokeGlobalGSScale(
                                                     *(_DWORD *)(qword_1C0323E30 + 192),
                                                     (int *)(qword_1C0323E30 + 296),
                                                     v4);
      return a1;
    }
    dword_1C0323E80 = 4379;
  }
  else
  {
    dword_1C0323E80 = 4368;
  }
  return qword_1C0323E88;
}
