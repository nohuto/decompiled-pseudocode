/*
 * XREFs of itrp_LSW @ 0x1C0143810
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C00ADCB0 (InvokeGlobalGSScale.c)
 */

__int64 __fastcall itrp_LSW(__int64 a1)
{
  __int64 v1; // rbx
  int *v3; // rdx
  int v4; // eax
  __int64 result; // rax

  v1 = qword_1C0323E30;
  word_1C0323E7C = 0;
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2 )
  {
    v3 = (int *)(qword_1C0323E30 + 296);
    qword_1C0323E18 -= 4LL;
    v4 = *(__int16 *)qword_1C0323E18;
    *(_WORD *)(qword_1C0323E30 + 154) = *(_WORD *)qword_1C0323E18;
    *(_DWORD *)(v1 + 112) = InvokeGlobalGSScale(*(_DWORD *)(v1 + 192), v3, v4);
    return a1;
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
  }
  return result;
}
