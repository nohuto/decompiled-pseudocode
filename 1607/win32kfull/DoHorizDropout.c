/*
 * XREFs of DoHorizDropout @ 0x1C00BD3C4
 * Callers:
 *     LookForDropouts @ 0x1C00BEDA0 (LookForDropouts.c)
 * Callees:
 *     HorizCrossings @ 0x1C00BF120 (HorizCrossings.c)
 *     VertCrossings @ 0x1C00BF198 (VertCrossings.c)
 *     GetBitAbs @ 0x1C00BF210 (GetBitAbs.c)
 *     SetBitAbs @ 0x1C00BF288 (SetBitAbs.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoHorizDropout(__int16 *a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v6; // esi
  unsigned int v10; // ebx
  int v11; // edi
  int v12; // edi
  int v14; // ebx
  int v15; // ebx
  int v16; // r11d
  int v17; // r10d
  int v18; // esi
  int v19; // esi
  int v20; // eax

  v6 = *a1;
  if ( (a5 & 1) != 0 )
  {
    v10 = a3 + 1;
    v11 = VertCrossings(v6 - 1, a3 + 1);
    v12 = VertCrossings(v6, v10) + v11;
    if ( (int)(HorizCrossings(v6, v10) + v12) < 2 )
      return 0LL;
    v14 = HorizCrossings(v6, a3 - 1);
    v15 = VertCrossings(v6 - 1, a3) + v14;
    if ( (int)(VertCrossings(v6, a3) + v15) < 2 )
      return 0LL;
  }
  v16 = dword_1C0329308;
  if ( (int)v6 > dword_1C0329308 )
  {
    if ( (unsigned int)GetBitAbs(a4, v6 - 1, a3) )
      return 0LL;
  }
  v17 = dword_1C032930C;
  if ( (int)v6 < dword_1C032930C )
  {
    if ( (unsigned int)GetBitAbs(a4, v6, a3) )
      return 0LL;
  }
  if ( (a5 & 4) != 0 )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))&State[2 * (a1[1] & 3) + 54])(
            a3,
            qword_1C03293F8 + 4LL * ((unsigned __int16)a1[1] >> 2),
            qword_1C0329400 + 4LL * ((unsigned __int16)a1[1] >> 2))
        - 1;
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))&State[2 * (*(_WORD *)(a2 + 2) & 3) + 54])(
            a3,
            qword_1C03293F8 + 4LL * (*(_WORD *)(a2 + 2) >> 2),
            qword_1C0329400 + 4LL * (*(_WORD *)(a2 + 2) >> 2));
    v17 = dword_1C032930C;
    v16 = dword_1C0329308;
    v18 = (v20 + v19) >> 7;
  }
  else
  {
    v18 = v6 - 1;
  }
  if ( v18 < v16 )
    v18 = v16;
  if ( v18 >= v17 )
    v18 = v17 - 1;
  return SetBitAbs(a4, (unsigned int)v18, a3);
}
