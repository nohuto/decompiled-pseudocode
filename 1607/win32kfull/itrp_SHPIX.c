/*
 * XREFs of itrp_SHPIX @ 0x1C00D0490
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SHP_Common @ 0x1C00CDC94 (itrp_SHP_Common.c)
 */

__int64 __fastcall itrp_SHPIX(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  int v3; // edx
  int v4; // r9d
  __int64 result; // rax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (v1 = qword_1C03294C8,
        dword_1C0329500 + 2LL <= (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2)) )
  {
    qword_1C03294C8 -= 4LL;
    v2 = *(int *)(v1 - 4);
    v3 = 0;
    if ( (_WORD)dword_1C03294BC )
      v4 = ((unsigned __int64)(v2 * (__int16)dword_1C03294BC) >> 32 << 18)
         + ((((unsigned int)(v2 * (__int16)dword_1C03294BC) >> 13) + 1) >> 1);
    else
      v4 = 0;
    if ( HIWORD(dword_1C03294BC) )
      v3 = ((unsigned __int64)(v2 * SHIWORD(dword_1C03294BC)) >> 32 << 18)
         + ((((unsigned int)(v2 * SHIWORD(dword_1C03294BC)) >> 13) + 1) >> 1);
    return itrp_SHP_Common(a1, -1, 1, v4, v3);
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
  }
  return result;
}
