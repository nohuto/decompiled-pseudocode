/*
 * XREFs of itrp_RPV @ 0x1C00E7CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RPV(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C0323160 + 424);
  if ( (qword_1C0323160 ^ v1 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323160 + 432)
    && (unsigned __int64)((v1 - qword_1C0323148) >> 2) >= 2 )
  {
    *(_DWORD *)qword_1C0323148 = (__int16)dword_1C0323138;
    qword_1C0323148 += 4LL;
    *(_DWORD *)qword_1C0323148 = SHIWORD(dword_1C0323138);
    result = a1;
    qword_1C0323148 += 4LL;
  }
  else
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4369;
  }
  return result;
}
