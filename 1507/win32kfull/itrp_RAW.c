/*
 * XREFs of itrp_RAW @ 0x1C02DD2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RAW(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r11d
  __int64 result; // rax

  if ( *(_BYTE *)(qword_1C0323160 + 333) == 2 )
  {
    v2 = *(_QWORD *)(qword_1C0323160 + 424);
    if ( (qword_1C0323160 ^ v2 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323160 + 432)
      && (v2 - qword_1C0323148) >> 2 )
    {
      result = a1;
      v3 = *(__int16 *)(*(_QWORD *)(qword_1C0323158 + 176) + 2LL * *(__int16 *)(qword_1C0323158 + 192) - 2) + 1;
      *(_DWORD *)qword_1C0323148 = *(_DWORD *)(*(_QWORD *)(qword_1C0323158 + 128) + 4LL * v3 + 4)
                                 - *(_DWORD *)(*(_QWORD *)(qword_1C0323158 + 128) + 4LL * v3);
      qword_1C0323148 += 4LL;
      return result;
    }
    dword_1C03231B0 = 4369;
  }
  else
  {
    dword_1C03231B0 = 4365;
  }
  return qword_1C03231B8;
}
