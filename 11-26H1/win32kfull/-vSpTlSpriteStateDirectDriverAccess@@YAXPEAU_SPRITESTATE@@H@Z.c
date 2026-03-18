/*
 * XREFs of ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400BC564
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400BC308 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall vSpTlSpriteStateDirectDriverAccess(struct _SPRITESTATE *a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx

  if ( a2 )
  {
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 32LL) = a1;
    v3 = *((_QWORD *)a1 + 150);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 40LL) = v3;
    v4 = *((_QWORD *)a1 + 151);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 48LL) = v4;
    v5 = *((_QWORD *)a1 + 152);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 56LL) = v5;
    v6 = *((_QWORD *)a1 + 154);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 72LL) = v6;
    v7 = *((_QWORD *)a1 + 155);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 80LL) = v7;
    v8 = *((_QWORD *)a1 + 156);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 88LL) = v8;
    v9 = *((_QWORD *)a1 + 157);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 96LL) = v9;
    v10 = *((_QWORD *)a1 + 158);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 104LL) = v10;
    v11 = *((_QWORD *)a1 + 159);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 112LL) = v11;
    v12 = *((_QWORD *)a1 + 160);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 120LL) = v12;
    v13 = *((_QWORD *)a1 + 161);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 128LL) = v13;
    v14 = *((_QWORD *)a1 + 162);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 136LL) = v14;
    v15 = *((_QWORD *)a1 + 164);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 152LL) = v15;
    v16 = *((_QWORD *)a1 + 163);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 144LL) = v16;
    v17 = *((_QWORD *)a1 + 165);
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 160LL) = v17;
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 40LL) = SpStrokeAndFillPath;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 48LL) = SpStrokePath;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 56LL) = SpFillPath;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 72LL) = SpBitBlt;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 80LL) = SpCopyBits;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 88LL) = SpStretchBlt;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 96LL) = SpTextOut;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 104LL) = SpLineTo;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 112LL) = SpTransparentBlt;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 120LL) = SpAlphaBlend;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 128LL) = SpPlgBlt;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 136LL) = SpGradientFill;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 152LL) = SpStretchBltROP;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 144LL) = SpSaveScreenBits;
    *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 160LL) = SpDrawStream;
  }
}
