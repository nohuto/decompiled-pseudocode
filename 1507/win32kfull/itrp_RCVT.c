/*
 * XREFs of itrp_RCVT @ 0x1C00B4D20
 * Callers:
 *     <none>
 * Callees:
 *     FixMul @ 0x1C00B6E4C (FixMul.c)
 *     itrp_GetCVTScale @ 0x1C00B806C (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_RCVT(__int64 a1)
{
  int *v2; // rdx
  __int64 v3; // rdi
  int fixed; // ebx
  __int64 v5; // r9
  __int64 result; // rax
  unsigned int CVTScale; // eax
  __int64 v8; // r8

  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) != *(_QWORD *)(qword_1C0323160 + 432)
    || !((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) )
  {
    dword_1C03231B0 = 4368;
    return qword_1C03231B8;
  }
  v2 = (int *)(qword_1C0323148 - 4);
  qword_1C0323148 = (__int64)v2;
  v3 = *v2;
  if ( (int)v3 >= *(unsigned __int16 *)(qword_1C0323160 + 360) && (int)v3 > 255
    || (fixed = 0, (int)v3 < 0)
    || (v5 = *(_QWORD *)(qword_1C0323160 + 16),
        (qword_1C0323160 ^ v5 ^ MEMORY[0xFFFFF78000000330] ^ (unsigned __int64)*(unsigned __int16 *)(qword_1C0323160 + 360)) != *(_QWORD *)(qword_1C0323160 + 368)) )
  {
    dword_1C03231B0 = 4379;
    return qword_1C03231B8;
  }
  if ( dword_1C032319C == 2 )
  {
    fixed = *(_DWORD *)(v5 + 4 * v3);
  }
  else
  {
    if ( dword_1C032319C == 3 )
    {
      CVTScale = itrp_GetCVTScale();
      fixed = FixMul(*(unsigned int *)(*(_QWORD *)(qword_1C0323160 + 16) + 4 * v3), CVTScale, v8);
    }
    else
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    }
    v2 = (int *)qword_1C0323148;
  }
  *v2 = fixed;
  result = a1;
  qword_1C0323148 += 4LL;
  return result;
}
