/*
 * XREFs of itrp_LSW @ 0x1C02E0E20
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C00C57D8 (InvokeGlobalGSScale.c)
 */

__int64 __fastcall itrp_LSW(__int64 a1)
{
  __int64 v1; // rbx
  int *v3; // rdx
  unsigned int v4; // eax
  __int64 result; // rax

  v1 = qword_1C03294E0;
  word_1C032952C = 0;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2 )
  {
    v3 = (int *)(qword_1C03294E0 + 296);
    qword_1C03294C8 -= 4LL;
    v4 = *(__int16 *)qword_1C03294C8;
    *(_WORD *)(qword_1C03294E0 + 154) = *(_WORD *)qword_1C03294C8;
    *(_DWORD *)(v1 + 112) = InvokeGlobalGSScale(*(_DWORD *)(v1 + 192), v3, v4);
    return a1;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
  }
  return result;
}
