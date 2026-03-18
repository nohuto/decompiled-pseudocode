/*
 * XREFs of itrp_SHPIX @ 0x1C00B4560
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SHP_Common @ 0x1C00B5688 (itrp_SHP_Common.c)
 */

__int64 __fastcall itrp_SHPIX(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  int v3; // edx
  int v4; // r9d
  __int64 result; // rax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (v1 = qword_1C0323E18,
        dword_1C0323E50 + 2LL <= (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2)) )
  {
    qword_1C0323E18 -= 4LL;
    v2 = *(int *)(v1 - 4);
    v3 = 0;
    if ( (_WORD)dword_1C0323E0C )
      v4 = ((unsigned __int64)(v2 * (__int16)dword_1C0323E0C) >> 32 << 18)
         + ((((unsigned int)(v2 * (__int16)dword_1C0323E0C) >> 13) + 1) >> 1);
    else
      v4 = 0;
    if ( HIWORD(dword_1C0323E0C) )
      v3 = ((unsigned __int64)(v2 * SHIWORD(dword_1C0323E0C)) >> 32 << 18)
         + ((((unsigned int)(v2 * SHIWORD(dword_1C0323E0C)) >> 13) + 1) >> 1);
    LOBYTE(v2) = 1;
    return itrp_SHP_Common(a1, -1, v2, v4, v3);
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
  }
  return result;
}
