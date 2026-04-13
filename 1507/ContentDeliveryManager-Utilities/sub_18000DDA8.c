/*
 * XREFs of sub_18000DDA8 @ 0x18000DDA8
 * Callers:
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 * Callees:
 *     sub_18000DAA8 @ 0x18000DAA8 (sub_18000DAA8.c)
 *     sub_180011ED8 @ 0x180011ED8 (sub_180011ED8.c)
 *     sub_18001393C @ 0x18001393C (sub_18001393C.c)
 *     sub_1800139BC @ 0x1800139BC (sub_1800139BC.c)
 *     sub_180013CE8 @ 0x180013CE8 (sub_180013CE8.c)
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 *     sub_18002185C @ 0x18002185C (sub_18002185C.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18000DDA8(_WORD *Src)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v5; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v6[5]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v7[144]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v8[12]; // [rsp+E8h] [rbp-20h] BYREF
  void *v9[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v10; // [rsp+158h] [rbp+50h]
  unsigned __int64 v11; // [rsp+160h] [rbp+58h]
  void *v12[2]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v13; // [rsp+178h] [rbp+70h]
  unsigned __int64 v14; // [rsp+180h] [rbp+78h]

  v6[3] = -2LL;
  LODWORD(v5) = 86400;
  v14 = 7LL;
  v13 = 0LL;
  LOWORD(v12[0]) = 0;
  sub_180015E80(v12, L"`");
  v11 = 7LL;
  v10 = 0LL;
  LOWORD(v9[0]) = 0;
  if ( *Src )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( Src[v2] );
  }
  sub_180015E80(v9, Src);
  sub_18000DAA8(v6, v9, v12);
  if ( v11 >= 8 )
    operator delete(v9[0]);
  v11 = 7LL;
  v10 = 0LL;
  LOWORD(v9[0]) = 0;
  if ( v14 >= 8 )
    operator delete(v12[0]);
  v14 = 7LL;
  v13 = 0LL;
  LOWORD(v12[0]) = 0;
  if ( (unsigned __int64)((__int64)(v6[1] - v6[0]) >> 5) >= 5 )
  {
    sub_1800139BC(v7, v6[0] + 128LL);
    sub_180011ED8(v7, &v5);
    sub_180013CE8(v8);
    v8[0] = off_18002E178;
    sub_18002185C(v8);
  }
  v3 = v5;
  sub_18001393C(v6);
  return (unsigned int)(v3 + 600);
}
