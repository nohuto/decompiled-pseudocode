/*
 * XREFs of DoHorizDropout @ 0x1C0104D54
 * Callers:
 *     LookForDropouts @ 0x1C00A6F04 (LookForDropouts.c)
 * Callees:
 *     HorizCrossings @ 0x1C00A728C (HorizCrossings.c)
 *     VertCrossings @ 0x1C00A7304 (VertCrossings.c)
 *     GetBitAbs @ 0x1C00A737C (GetBitAbs.c)
 *     SetBitAbs @ 0x1C00A73FC (SetBitAbs.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoHorizDropout(__int16 *a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  int v6; // esi
  int v10; // ebx
  int v11; // edi
  int v12; // edi
  int v13; // ebx
  int v14; // ebx
  int v15; // r11d
  int v16; // r10d
  int v17; // esi
  int v19; // esi
  int v20; // eax

  v6 = *a1;
  if ( (a5 & 1) != 0 )
  {
    v10 = a3 + 1;
    v11 = VertCrossings(v6 - 1, (unsigned __int16)a3 + 1);
    v12 = VertCrossings(v6, v10) + v11;
    if ( (int)(HorizCrossings(v6, v10) + v12) < 2 )
      return 0LL;
    v13 = HorizCrossings(v6, a3 - 1);
    v14 = VertCrossings(v6 - 1, a3) + v13;
    if ( (int)(VertCrossings(v6, a3) + v14) < 2 )
      return 0LL;
  }
  v15 = dword_1C0323C08;
  if ( v6 > dword_1C0323C08 )
  {
    if ( (unsigned int)GetBitAbs(a4, v6 - 1, a3) )
      return 0LL;
  }
  v16 = dword_1C0323C0C;
  if ( v6 < dword_1C0323C0C )
  {
    if ( (unsigned int)GetBitAbs(a4, v6, a3) )
      return 0LL;
  }
  if ( (a5 & 4) != 0 )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))&State[2 * (a1[1] & 3) + 54])(
            a3,
            qword_1C0323CF8 + 4LL * ((unsigned __int16)a1[1] >> 2),
            qword_1C0323D00 + 4LL * ((unsigned __int16)a1[1] >> 2))
        - 1;
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))&State[2 * (*(_WORD *)(a2 + 2) & 3) + 54])(
            a3,
            qword_1C0323CF8 + 4LL * (*(_WORD *)(a2 + 2) >> 2),
            qword_1C0323D00 + 4LL * (*(_WORD *)(a2 + 2) >> 2));
    v16 = dword_1C0323C0C;
    v15 = dword_1C0323C08;
    v17 = (v20 + v19) >> 7;
  }
  else
  {
    v17 = v6 - 1;
  }
  if ( v17 < v15 )
    v17 = v15;
  if ( v17 >= v16 )
    v17 = v16 - 1;
  return SetBitAbs(a4, v17, a3);
}
