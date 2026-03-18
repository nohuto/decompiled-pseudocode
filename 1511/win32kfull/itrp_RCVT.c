/*
 * XREFs of itrp_RCVT @ 0x1C00AE760
 * Callers:
 *     <none>
 * Callees:
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     itrp_GetCVTScale @ 0x1C00B0D08 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_RCVT(__int64 a1)
{
  int *v2; // rdx
  __int64 v3; // rdi
  int fixed; // ebx
  __int64 v5; // r9
  __int64 result; // rax
  unsigned int CVTScale; // eax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || !((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  v2 = (int *)(qword_1C0323E18 - 4);
  qword_1C0323E18 = (__int64)v2;
  v3 = *v2;
  if ( (int)v3 >= *(unsigned __int16 *)(qword_1C0323E30 + 360) && (int)v3 > 255
    || (fixed = 0, (int)v3 < 0)
    || (v5 = *(_QWORD *)(qword_1C0323E30 + 16),
        (qword_1C0323E30 ^ v5 ^ MEMORY[0xFFFFF78000000330] ^ (unsigned __int64)*(unsigned __int16 *)(qword_1C0323E30 + 360)) != *(_QWORD *)(qword_1C0323E30 + 368)) )
  {
    dword_1C0323E80 = 4379;
    return qword_1C0323E88;
  }
  if ( dword_1C0323E6C == 2 )
  {
    fixed = *(_DWORD *)(v5 + 4 * v3);
  }
  else
  {
    if ( dword_1C0323E6C == 3 )
    {
      CVTScale = itrp_GetCVTScale();
      fixed = FixMul(*(unsigned int *)(*(_QWORD *)(qword_1C0323E30 + 16) + 4 * v3), CVTScale);
    }
    else
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    }
    v2 = (int *)qword_1C0323E18;
  }
  *v2 = fixed;
  result = a1;
  qword_1C0323E18 += 4LL;
  return result;
}
