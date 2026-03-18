/*
 * XREFs of itrp_INSTCTRL @ 0x1C00F7C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_INSTCTRL(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // rcx
  int v4; // eax
  int v5; // edx
  __int64 result; // rax

  v1 = qword_1C0323160;
  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) == *(_QWORD *)(qword_1C0323160 + 432)
    && (v3 = qword_1C0323148, (unsigned __int64)((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) >= 2) )
  {
    qword_1C0323148 -= 4LL;
    v4 = *(_DWORD *)(v3 - 4);
    qword_1C0323148 = v3 - 8;
    v5 = *(_DWORD *)(v3 - 8);
    if ( *(_BYTE *)(qword_1C0323160 + 332) )
    {
      switch ( v4 )
      {
        case 1:
          *(_DWORD *)(qword_1C0323160 + 120) &= ~1u;
          break;
        case 2:
          *(_DWORD *)(qword_1C0323160 + 120) &= ~2u;
          break;
        case 3:
          *(_DWORD *)(qword_1C0323160 + 120) &= ~4u;
          break;
      }
      *(_DWORD *)(v1 + 120) |= v5;
    }
    return a1;
  }
  else
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4368;
  }
  return result;
}
