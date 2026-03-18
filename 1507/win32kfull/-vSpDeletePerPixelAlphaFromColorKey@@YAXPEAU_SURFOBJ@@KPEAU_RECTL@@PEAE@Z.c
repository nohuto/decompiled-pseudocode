/*
 * XREFs of ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C0275BF0
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02746F4 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C0275788 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 */

void __fastcall vSpDeletePerPixelAlphaFromColorKey(struct _SURFOBJ *a1, int a2, struct _RECTL *a3, unsigned __int8 *a4)
{
  struct _SURFOBJ *v5; // r11
  int v6; // r10d
  int v7; // r14d
  LONG cy; // r8d
  LONG cx; // esi
  int v10; // edx
  int v11; // eax
  LONG lDelta; // r15d
  int v13; // esi
  int v14; // r8d
  int v15; // edi
  __int64 v16; // rbx
  int v17; // r11d
  __int64 v18; // rdx
  int v19; // [rsp+48h] [rbp-30h] BYREF
  int v20; // [rsp+4Ch] [rbp-2Ch]
  LONG v21; // [rsp+50h] [rbp-28h]
  LONG v22; // [rsp+54h] [rbp-24h]

  v5 = a1;
  if ( a1->iBitmapFormat == 6 )
  {
    v6 = 0;
    if ( !a1->iType )
    {
      v7 = a2 & 0xFF00 | ((unsigned __int8)a2 << 16) | BYTE2(a2);
      cy = a1->sizlBitmap.cy;
      cx = a1->sizlBitmap.cx;
      v10 = 0;
      v19 = 0;
      v11 = 0;
      v20 = 0;
      v21 = cx;
      v22 = cy;
      if ( a3 )
      {
        ERECTL::operator*=(&v19, a3);
        cy = v22;
        cx = v21;
        v11 = v20;
        v10 = v19;
      }
      lDelta = v5->lDelta;
      v13 = cx - v10;
      v14 = cy - v11;
      v15 = v6;
      v16 = (__int64)v5->pvScan0 + 4 * v10 + lDelta * v11;
      while ( v14 )
      {
        v17 = v13;
        v18 = v16;
        while ( v17 )
        {
          if ( *(_DWORD *)v18 == v6 )
            *(_DWORD *)v18 = v7;
          if ( a4 )
            *(_BYTE *)(v18 + 3) = a4[v15++];
          --v17;
          v18 += 4LL;
        }
        --v14;
        v16 += lDelta;
      }
      if ( a4 )
        Win32FreePool(a4);
    }
  }
}
