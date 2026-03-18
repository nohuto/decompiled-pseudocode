/*
 * XREFs of ClientFrame @ 0x14030280C
 * Callers:
 *     ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x140247D80 (-DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z.c)
 * Callees:
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     ?GetSignFromMappingMode@@YAHPEAUHDC__@@PEAUtagPOINT@@@Z @ 0x140302774 (-GetSignFromMappingMode@@YAHPEAUHDC__@@PEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall ClientFrame(HDC a1, int *a2, __int64 a3)
{
  int v6; // r10d
  int v7; // r11d
  int v8; // r8d
  int v9; // edi
  int v10; // ebx
  struct tagPOINT v12; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v13[4]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v14; // [rsp+58h] [rbp-9h]
  int v15; // [rsp+60h] [rbp-1h]
  int v16; // [rsp+64h] [rbp+3h]
  int v17; // [rsp+68h] [rbp+7h]
  LONG y; // [rsp+6Ch] [rbp+Bh]
  __int64 v19; // [rsp+70h] [rbp+Fh]
  int v20; // [rsp+78h] [rbp+17h]
  int v21; // [rsp+7Ch] [rbp+1Bh]
  LONG x; // [rsp+80h] [rbp+1Fh]
  int v23; // [rsp+84h] [rbp+23h]
  __int64 v24; // [rsp+88h] [rbp+27h]
  int v25; // [rsp+90h] [rbp+2Fh]
  int v26; // [rsp+94h] [rbp+33h]
  LONG v27; // [rsp+98h] [rbp+37h]
  int v28; // [rsp+9Ch] [rbp+3Bh]
  __int64 v29; // [rsp+A0h] [rbp+3Fh]

  v12 = 0LL;
  if ( !(unsigned int)GetSignFromMappingMode(a1, &v12) )
    return 0LL;
  v6 = a2[3];
  v7 = a2[1];
  v8 = v6 - v7;
  if ( v6 - v7 < 0 )
    return 0LL;
  v9 = *a2;
  v10 = a2[2];
  if ( (v12.x ^ (v10 - v9)) < 0 || (v12.y ^ v8) < 0 )
    return 0LL;
  v13[2] = v10 - v9;
  v17 = v10 - v9;
  v23 = v8 - 2 * v12.y;
  v28 = v23;
  v13[3] = v12.y;
  y = v12.y;
  v21 = v7 + v12.y;
  v26 = v7 + v12.y;
  v13[0] = v9;
  v13[1] = v7;
  v14 = a3;
  v15 = v9;
  v16 = v6 - v12.y;
  v19 = a3;
  v20 = v9;
  x = v12.x;
  v24 = a3;
  v25 = v10 - v12.x;
  v27 = v12.x;
  v29 = a3;
  return GrePolyPatBlt(a1, 5898313, (struct _POLYPATBLT *)v13, 4);
}
