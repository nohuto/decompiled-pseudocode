/*
 * XREFs of ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00216DC
 * Callers:
 *     ?vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0001010 (-vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00D34F0 (-vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00D9650 (-vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00EC600 (-vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BC000 (-vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BC4C0 (-vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BC7D0 (-vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BCAF0 (-vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02CF5F0 (-vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02CF7E0 (-vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02CFB50 (-vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02CFEA0 (-vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D0120 (-vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D0490 (-vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XCLIPOBJ::vFindScan(XCLIPOBJ *this, struct _RECTL *a2, int a3)
{
  _DWORD *v3; // r9
  LONG v5; // edx
  LONG v6; // ecx
  LONG v7; // edx
  LONG v8; // ecx

  v3 = (_DWORD *)*((_QWORD *)this + 10);
  if ( a3 < v3[1] )
  {
    do
    {
      v3 = (_DWORD *)((char *)v3 - (unsigned int)(4 * *(v3 - 1) + 16));
      *((_QWORD *)this + 10) = v3;
    }
    while ( a3 < v3[1] );
    v7 = *((_DWORD *)this + 2);
    v8 = *((_DWORD *)this + 4);
    if ( v3[1] > v7 )
      v7 = v3[1];
    if ( v3[2] < v8 )
      v8 = v3[2];
    a2->left = a2->right;
    a2->bottom = v8;
    if ( v7 >= v8 )
      v7 = 0x80000000;
    a2->top = v7;
    if ( v7 == 0x80000000 )
      a2->bottom = 0x80000000;
  }
  else if ( a3 >= v3[2] )
  {
    do
    {
      v3 = (_DWORD *)((char *)v3 + (unsigned int)(4 * *v3 + 16));
      *((_QWORD *)this + 10) = v3;
    }
    while ( a3 >= v3[2] );
    v5 = *((_DWORD *)this + 2);
    v6 = *((_DWORD *)this + 4);
    if ( v3[1] > v5 )
      v5 = v3[1];
    if ( v3[2] < v6 )
      v6 = v3[2];
    a2->left = a2->right;
    if ( v5 >= v6 )
      v6 = 0x7FFFFFFF;
    a2->bottom = v6;
    if ( v6 == 0x7FFFFFFF )
      v5 = 0x7FFFFFFF;
    a2->top = v5;
  }
}
