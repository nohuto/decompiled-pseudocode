/*
 * XREFs of DoVertDropout @ 0x1C00AE834
 * Callers:
 *     LookForDropouts @ 0x1C00AE6A0 (LookForDropouts.c)
 * Callees:
 *     HorizCrossings @ 0x1C00AEA20 (HorizCrossings.c)
 *     VertCrossings @ 0x1C00AEA98 (VertCrossings.c)
 *     GetBitAbs @ 0x1C00AEB10 (GetBitAbs.c)
 *     SetBitAbs @ 0x1C00AEB90 (SetBitAbs.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoVertDropout(__int16 *a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // esi
  int v7; // r12d
  __int64 v9; // rdi
  int v11; // r15d
  int v12; // ebx
  int v13; // ebx
  int v14; // edi
  int v15; // edi
  int v16; // r11d
  int v17; // r10d
  int v18; // esi
  int v20; // ebx
  int v21; // eax

  v5 = *a1;
  v7 = dword_1C0322F08;
  v9 = a2;
  if ( (int)v5 < dword_1C0322F08 )
    return 0LL;
  v11 = dword_1C0322F04;
  if ( (int)v5 > dword_1C0322F04 )
    return 0LL;
  if ( (a5 & 1) != 0 )
  {
    v12 = VertCrossings(a3 - 1, v5);
    v13 = HorizCrossings(a3, v5 - 1) + v12;
    if ( (int)(HorizCrossings(a3, v5) + v13) < 2 )
      return 0LL;
    v14 = HorizCrossings(a3 + 1, v5 - 1);
    v15 = HorizCrossings(a3 + 1, v5) + v14;
    if ( (int)(VertCrossings(a3 + 1, v5) + v15) < 2 )
      return 0LL;
    v9 = a2;
  }
  v16 = dword_1C0322EF4;
  if ( (int)v5 <= dword_1C0322EF4 || !(unsigned int)GetBitAbs(a4, a3, v5 - 1) )
  {
    v17 = dword_1C0322EF0;
    if ( (int)v5 >= dword_1C0322EF0 || !(unsigned int)GetBitAbs(a4, a3, v5) )
    {
      if ( (a5 & 4) != 0 )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))&State[2 * (a1[1] & 3) + 60])(
                a3,
                qword_1C0322FD8 + 4LL * ((unsigned __int16)a1[1] >> 2),
                qword_1C0322FE0 + 4LL * ((unsigned __int16)a1[1] >> 2));
        v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))&State[2 * (*(_WORD *)(v9 + 2) & 3) + 60])(
                a3,
                qword_1C0322FD8 + 4LL * (*(_WORD *)(v9 + 2) >> 2),
                qword_1C0322FE0 + 4LL * (*(_WORD *)(v9 + 2) >> 2));
        v7 = dword_1C0322F08;
        v11 = dword_1C0322F04;
        v16 = dword_1C0322EF4;
        v17 = dword_1C0322EF0;
        v18 = (v21 + v20 - 1) >> 7;
      }
      else
      {
        v18 = v5 - 1;
      }
      if ( v18 < v16 )
        v18 = v16;
      if ( v18 >= v17 )
        v18 = v17 - 1;
      if ( v18 >= v7 && v18 < v11 )
        return SetBitAbs(a4, a3, (unsigned int)v18);
    }
  }
  return 0LL;
}
