/*
 * XREFs of sub_14000FE88 @ 0x14000FE88
 * Callers:
 *     sub_140009228 @ 0x140009228 (sub_140009228.c)
 * Callees:
 *     sub_14000FC70 @ 0x14000FC70 (sub_14000FC70.c)
 *     sub_140010018 @ 0x140010018 (sub_140010018.c)
 */

__int64 __fastcall sub_14000FE88(__int64 a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // r10
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // r10

  sub_14000FC70();
  v2 = 3 * qword_140020480;
  if ( (unsigned __int64)(3 * qword_140020480) < 0x100000000LL )
    v2 = 0x100000000LL;
  sub_140010018(v2 >> 4);
  v4 = qword_140020490;
  v5 = 0x400000000LL;
  if ( !dword_140020468 )
    v4 = qword_140020498;
  if ( v4 < 0x4000000 )
    v4 = 0x4000000LL;
  v6 = v3 >> 4;
  if ( v6 < 0x400000000LL )
    v5 = v6;
  if ( v4 < v5 )
  {
    v4 = 0x400000000LL;
    if ( v6 < 0x400000000LL )
      v4 = v6;
  }
  v7 = sub_140010018(v4 >> 4);
  v11 = v10;
  if ( v7 > v10 )
    v11 = v7;
  result = ~(v11 - 1);
  v13 = result & (v11 + v8 - 1);
  if ( v13 > v9 )
    v13 = v9;
  if ( !dword_140020468 && v13 < qword_1400204A0 )
  {
    v14 = sub_140010018((unsigned __int64)qword_1400204A0 >> 4);
    v17 = v16;
    if ( v14 > v16 )
      v17 = v14;
    result = ~(v17 - 1);
    v13 = result & (v17 + v15 - 1);
    *(_DWORD *)(a1 + 92) |= 8u;
  }
  v18 = v13;
  if ( !dword_140020464 && v13 < qword_140020488 )
  {
    v19 = sub_140010018((unsigned __int64)qword_140020488 >> 4);
    if ( v19 > v20 )
      v20 = v19;
    result = ~(v20 - 1);
    v18 = result & (v20 + v21 - 1);
    if ( dword_140020478 != 1 )
      v13 = result & (v20 + v21 - 1);
    if ( byte_1400204A8 == 1 )
      *(_DWORD *)(a1 + 92) |= 8u;
  }
  *(_DWORD *)(a1 + 92) |= 2u;
  *(_QWORD *)(a1 + 48) = v13;
  *(_QWORD *)(a1 + 56) = v18;
  *(_QWORD *)(a1 + 64) = v9;
  return result;
}
