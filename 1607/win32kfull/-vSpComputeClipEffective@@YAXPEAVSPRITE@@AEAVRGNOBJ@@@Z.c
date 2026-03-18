/*
 * XREFs of ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C0272CD0
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0277898 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpAddOpaqueRects@@YAXJJJJJJAEAVRGNMEMOBJTMP@@0AEAVRGNOBJ@@@Z @ 0x1C02714B4 (-vSpAddOpaqueRects@@YAXJJJJJJAEAVRGNMEMOBJTMP@@0AEAVRGNOBJ@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C0273138 (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0277694 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 */

void __fastcall vSpComputeClipEffective(struct SPRITE *a1, struct RGNOBJ *a2)
{
  struct _SURFOBJ *v4; // rdx
  int v5; // esi
  int v6; // eax
  LONG v7; // r14d
  __int64 v8; // rax
  LONG v9; // edx
  LONG v10; // r10d
  LONG v11; // r9d
  LONG v12; // r8d
  LONG v13; // r12d
  __int64 v14; // rcx
  __int64 i; // rax
  int v16; // [rsp+28h] [rbp-110h]
  LONG v17; // [rsp+5Ch] [rbp-DCh]
  int v18; // [rsp+64h] [rbp-D4h]
  LONG v19; // [rsp+68h] [rbp-D0h]
  _QWORD v20[2]; // [rsp+70h] [rbp-C8h] BYREF
  LONG v21; // [rsp+80h] [rbp-B8h]
  LONG v22; // [rsp+84h] [rbp-B4h]
  int v23; // [rsp+88h] [rbp-B0h]
  __int64 v24; // [rsp+90h] [rbp-A8h]
  __int64 v25; // [rsp+98h] [rbp-A0h]
  _QWORD v26[2]; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD v27[3]; // [rsp+B0h] [rbp-88h] BYREF
  unsigned __int8 *v28; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v29[2]; // [rsp+D0h] [rbp-68h] BYREF
  struct _RECTL v30; // [rsp+E0h] [rbp-58h] BYREF
  struct _RECTL v31; // [rsp+F0h] [rbp-48h] BYREF

  v29[0] = 0LL;
  if ( *(_QWORD *)a2 )
  {
    if ( *((_DWORD *)a1 + 1) == 2 && (*(_DWORD *)a1 & 8) == 0 )
    {
      v4 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
      if ( v4 )
      {
        if ( v4->iBitmapFormat == 6 && !v4->iType && SURFREFVIEW::bMap((SURFREFVIEW *)v29, v4) )
        {
          if ( *((_DWORD *)a1 + 56) != 3 || (v5 = 1, *((_BYTE *)a1 + 231)) )
            v5 = 0;
          if ( (*((_BYTE *)a1 + 203) & 1) == 0 || (v6 = 1, *((_BYTE *)a1 + 202) != 0xFF) )
            v6 = 0;
          if ( v5 || v6 )
          {
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v27);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v26);
            if ( v27[0] && v20[0] && v26[0] )
            {
              RGNOBJ::vSet((RGNOBJ *)v26);
              RGNOBJ::vSet((RGNOBJ *)v20);
              RGNOBJ::vSet((RGNOBJ *)v27);
              v28 = 0LL;
              if ( v5 )
              {
                v30 = (struct _RECTL)*((_OWORD *)a1 + 6);
                vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v30, &v28);
              }
              v7 = 0;
              v8 = *((_QWORD *)a1 + 16);
              v9 = *(_DWORD *)(v8 + 32);
              v17 = v9;
              v21 = v9;
              v10 = *(_DWORD *)(v8 + 36);
              v19 = v10;
              v22 = v10;
              v11 = -1;
              v12 = -1;
              v18 = *(_DWORD *)(v8 + 64);
              v23 = v18;
              v13 = 0;
              v14 = *(_QWORD *)(v8 + 56);
              while ( 1 )
              {
                v27[2] = v14;
                v25 = v14;
                if ( v13 >= v10 )
                  break;
                v7 = 0;
                for ( i = v14; ; i += 4LL )
                {
                  v24 = i;
                  if ( v7 >= v9 )
                    break;
                  if ( *(_BYTE *)(i + 3) )
                  {
                    if ( v12 == -1 )
                    {
                      v12 = v7;
                      v11 = v13;
                    }
                  }
                  else if ( v12 != -1 )
                  {
                    vSpAddOpaqueRects(
                      v7,
                      v13,
                      v12,
                      v11,
                      v9,
                      v16,
                      (struct RGNMEMOBJTMP *)v20,
                      (struct RGNMEMOBJTMP *)v27,
                      (struct RGNOBJ *)v26);
                    v12 = -1;
                    v11 = -1;
                    i = v24;
                  }
                  ++v7;
                  v9 = v17;
                }
                ++v13;
                v14 = v18 + v25;
                v10 = v19;
              }
              if ( v12 != -1 )
                vSpAddOpaqueRects(
                  v7,
                  v13,
                  v12,
                  v11,
                  v9,
                  v16,
                  (struct RGNMEMOBJTMP *)v20,
                  (struct RGNMEMOBJTMP *)v27,
                  (struct RGNOBJ *)v26);
              if ( v5 )
              {
                v31 = (struct _RECTL)*((_OWORD *)a1 + 6);
                vSpDeletePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v31, v28);
              }
              if ( RGNOBJ::bMerge((RGNOBJ *)v20, (struct RGNOBJ *)v26, a2, BYTE1(gafjRgnOp)) )
                RGNOBJ::vSwap((RGNOBJ *)v20, a2);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v26);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v27);
          }
          else if ( !*((_BYTE *)a1 + 202) )
          {
            RGNOBJ::vSet(a2);
          }
        }
      }
    }
  }
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v29);
}
