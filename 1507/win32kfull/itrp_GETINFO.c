/*
 * XREFs of itrp_GETINFO @ 0x1C00E1DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_GETINFO(__int64 a1)
{
  int *v2; // r9
  int v3; // ecx
  int v4; // edx
  __int64 result; // rax

  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) == *(_QWORD *)(qword_1C0323160 + 432)
    && (qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2 )
  {
    v2 = (int *)(qword_1C0323148 - 4);
    v3 = 0;
    qword_1C0323148 = (__int64)v2;
    v4 = *v2;
    if ( (*v2 & 1) != 0 )
      v3 = 37;
    if ( (v4 & 2) != 0 && (*(_BYTE *)(qword_1C0323160 + 321) & 1) != 0 )
      v3 |= 0x100u;
    if ( (v4 & 4) != 0 && (*(_BYTE *)(qword_1C0323160 + 321) & 2) != 0 )
      v3 |= 0x200u;
    if ( (v4 & 0x20) != 0 && *(_DWORD *)(qword_1C0323160 + 392) )
      v3 |= 0x1000u;
    if ( (v4 & 0x40) != 0 && (*(_BYTE *)(qword_1C0323160 + 452) & 1) != 0 )
      v3 |= 0x2000u;
    if ( (v4 & 0x80u) != 0 && (*(_BYTE *)(qword_1C0323160 + 452) & 2) != 0 )
      v3 |= 0x4000u;
    if ( (v4 & 0x100) != 0 && (*(_BYTE *)(qword_1C0323160 + 452) & 4) != 0 )
      v3 |= 0x8000u;
    if ( (v4 & 0x200) != 0 && (*(_BYTE *)(qword_1C0323160 + 452) & 8) != 0 )
      v3 |= 0x10000u;
    *v2 = v3;
    result = a1;
    qword_1C0323148 += 4LL;
  }
  else
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4368;
  }
  return result;
}
