/*
 * XREFs of ?BltLnkReadPat1@@YAXPEAEK0KKKK@Z @ 0x1C02D66A0
 * Callers:
 *     ?BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02D6BC0 (-BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BltLnkReadPat1(
        unsigned __int8 *a1,
        char a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // r11d
  __int64 v8; // rcx
  unsigned int v10; // r9d
  unsigned __int8 v11; // bl
  unsigned int v12; // r10d
  char v14; // di
  char v15; // bp
  unsigned int v16; // r8d
  int v17; // eax

  v6 = a5;
  v8 = a5 & 7;
  v10 = a6;
  v11 = 0;
  v12 = a2 & 7;
  v14 = a2;
  if ( a6 )
  {
    while ( 1 )
    {
      v15 = StartMask[v8] & a3[(unsigned __int64)v6 >> 3];
      if ( v12 <= (unsigned int)v8 )
      {
        v16 = 8 - v8;
        if ( 8 - (int)v8 > v10 )
          v16 = v10;
        if ( v16 > a4 - v6 )
          v16 = a4 - v6;
        v17 = (unsigned __int8)(v15 & EndMask[v16 + (unsigned int)v8]) << (v8 - v12);
      }
      else
      {
        v16 = 8 - v12;
        if ( 8 - v12 > v10 )
          v16 = v10;
        if ( v16 > a4 - v6 )
          v16 = a4 - v6;
        v17 = (unsigned __int8)(v15 & EndMask[v16 + (unsigned int)v8]) >> (v12 - v8);
      }
      v14 += v16;
      v6 += v16;
      v12 = v14 & 7;
      v8 = v6 & 7;
      v11 |= v17;
      v10 -= v16;
      if ( v6 == a4 )
      {
        v6 = 0;
        v8 = 0LL;
      }
      if ( (v14 & 7) == 0 || !v10 )
      {
        *a1++ = v11;
        v11 = 0;
        if ( !v10 )
          break;
      }
    }
  }
}
