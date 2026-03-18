/*
 * XREFs of ?ulIndexToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C0026F90
 * Callers:
 *     ulIndexToRGB @ 0x1C00804E0 (ulIndexToRGB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::ulIndexToRGB(XEPALOBJ *this, unsigned int a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  unsigned int v4; // eax
  int v5; // eax
  _DWORD *v6; // rdx
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // r11d
  unsigned int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // r10d
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned int v16; // [rsp+18h] [rbp+10h]

  v2 = a2;
  v3 = *(_QWORD *)this;
  v4 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( v4 )
  {
    if ( v4 <= (unsigned int)v2 )
      return 0LL;
    else
      return *(_DWORD *)(*(_QWORD *)(v3 + 120) + 4 * v2) & 0xFFFFFF;
  }
  else
  {
    v5 = *(_DWORD *)(v3 + 24);
    if ( (v5 & 2) != 0 )
    {
      v6 = *(_DWORD **)(v3 + 120);
      v7 = v6[9];
      v8 = ((unsigned int)v2 & *v6) >> v6[6];
      if ( v7 < 8 )
        v8 = (v8 << (8 - v7) >> v7) | (v8 << (8 - v7));
      v9 = v6[10];
      v10 = ((unsigned int)v2 & v6[1]) >> v6[7];
      if ( v9 < 8 )
        v10 = (v10 << (8 - v9) >> v9) | (v10 << (8 - v9));
      v11 = v2 & v6[2];
      v12 = v6[11];
      v13 = v11 >> v6[8];
      v14 = v10 << 8;
      if ( v12 < 8 )
        v13 = (v13 << (8 - v12) >> v12) | (v13 << (8 - v12));
      return v8 | v14 | (v13 << 16);
    }
    else if ( (v5 & 8) != 0 )
    {
      HIWORD(v16) = (unsigned __int8)v2;
      LOBYTE(v16) = BYTE2(v2);
      BYTE1(v16) = BYTE1(v2);
      return v16;
    }
    else
    {
      return v2 & 0xFFFFFF;
    }
  }
}
