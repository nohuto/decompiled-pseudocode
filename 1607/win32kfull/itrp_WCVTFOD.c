/*
 * XREFs of itrp_WCVTFOD @ 0x1C010E310
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C00C57D8 (InvokeGlobalGSScale.c)
 */

__int64 __fastcall itrp_WCVTFOD(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi

  v1 = qword_1C03294E0;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (v3 = qword_1C03294C8, (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) >= 2) )
  {
    qword_1C03294C8 -= 4LL;
    v4 = *(unsigned int *)(v3 - 4);
    qword_1C03294C8 = v3 - 8;
    v5 = *(int *)(v3 - 8);
    if ( (int)v5 < *(unsigned __int16 *)(qword_1C03294E0 + 360)
      && (int)v5 >= 0
      && (qword_1C03294E0 ^ *(_QWORD *)(qword_1C03294E0 + 16) ^ MEMORY[0xFFFFF78000000330] ^ (unsigned __int64)*(unsigned __int16 *)(qword_1C03294E0 + 360)) == *(_QWORD *)(qword_1C03294E0 + 368) )
    {
      *(_DWORD *)(*(_QWORD *)(v1 + 16) + 4 * v5) = InvokeGlobalGSScale(
                                                     *(_DWORD *)(qword_1C03294E0 + 192),
                                                     (int *)(qword_1C03294E0 + 296),
                                                     v4);
      return a1;
    }
    dword_1C0329530 = 4379;
  }
  else
  {
    dword_1C0329530 = 4368;
  }
  return qword_1C0329538;
}
