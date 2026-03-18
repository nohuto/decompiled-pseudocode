/*
 * XREFs of itrp_JMPR @ 0x1C010BB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_JMPR(__int64 a1)
{
  unsigned __int64 v1; // rcx

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || !((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  qword_1C03294C8 -= 4LL;
  v1 = *(_DWORD *)qword_1C03294C8 - 1 + a1;
  if ( !--dword_1C0329548 )
  {
    dword_1C0329530 = 4359;
    return qword_1C0329538;
  }
  if ( v1 < qword_1C0329540 )
  {
    dword_1C0329530 = 4363;
    return qword_1C0329538;
  }
  if ( v1 > qword_1C0329538 )
    return qword_1C0329538;
  return v1;
}
