/*
 * XREFs of itrp_WCVT @ 0x1C00B9F30
 * Callers:
 *     <none>
 * Callees:
 *     itrp_GetCVTScale @ 0x1C00B806C (itrp_GetCVTScale.c)
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
 */

__int64 __fastcall itrp_WCVT(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 CVTScale; // rcx
  int v9; // eax

  v1 = qword_1C0323160;
  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) != *(_QWORD *)(qword_1C0323160 + 432)
    || (v3 = qword_1C0323148, (unsigned __int64)((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) < 2) )
  {
    dword_1C03231B0 = 4368;
    return qword_1C03231B8;
  }
  qword_1C0323148 -= 4LL;
  v4 = *(_DWORD *)(v3 - 4);
  qword_1C0323148 = v3 - 8;
  v5 = *(unsigned __int16 *)(qword_1C0323160 + 360);
  v6 = *(int *)(v3 - 8);
  if ( (int)v6 >= (int)v5
    || (int)v6 < 0
    || (qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ v5 ^ *(_QWORD *)(qword_1C0323160 + 16)) != *(_QWORD *)(qword_1C0323160 + 368) )
  {
    dword_1C03231B0 = 4379;
    return qword_1C03231B8;
  }
  if ( v4 )
  {
    if ( dword_1C032319C != 2 )
    {
      CVTScale = (unsigned int)itrp_GetCVTScale();
      v9 = CompDiv(CVTScale, (__int64)v4 << 16);
      v1 = qword_1C0323160;
      v4 = v9;
    }
  }
  result = a1;
  *(_DWORD *)(*(_QWORD *)(v1 + 16) + 4 * v6) = v4;
  return result;
}
