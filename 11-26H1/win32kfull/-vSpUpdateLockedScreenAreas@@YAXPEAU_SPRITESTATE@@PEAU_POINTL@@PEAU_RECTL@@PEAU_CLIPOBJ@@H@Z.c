/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x140317C94
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x14007F220 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140166D28 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140168780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1401862C8 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140313DF0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1401690E8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140169524 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140169ED4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x140290818 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  struct _CLIPOBJ *v6; // rdi
  struct REGION *v8; // r13
  const struct _RECTL *v9; // rsi
  int v10; // eax
  struct SPRITE *v11; // r15
  int v12; // ebx
  struct RGNOBJ *p_top; // rdx
  struct _SURFOBJ **v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  struct _SURFOBJ **v22; // rsi
  int v23; // eax
  struct _SURFOBJ *v24; // rcx
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  struct REGION *v27; // [rsp+40h] [rbp-C0h] BYREF
  struct SPRITE *v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h]
  struct _POINTL *v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  struct _CLIPOBJ *v34; // [rsp+78h] [rbp-88h]
  _BYTE v35[96]; // [rsp+80h] [rbp-80h] BYREF
  struct _SPRITESTATE *v36[24]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v37; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v38; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _CLIPOBJ v39; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v40; // [rsp+1F8h] [rbp+F8h]
  __int64 v41; // [rsp+210h] [rbp+110h]
  int v42; // [rsp+218h] [rbp+118h]
  int v43; // [rsp+240h] [rbp+140h]
  __int64 v44; // [rsp+250h] [rbp+150h]

  v34 = a4;
  v28 = 0LL;
  v41 = 0LL;
  v42 = 0;
  v44 = 0LL;
  v37 = 0LL;
  v40 = 0LL;
  v6 = a4;
  v38 = 0LL;
  v31 = a2;
  v43 = 1;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
  v32 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v36, (struct PDEVOBJ *)&v32);
  v8 = 0LL;
  if ( v27 )
  {
    if ( v29 )
    {
      v9 = (const struct _RECTL *)((char *)a1 + 40);
      if ( bIntersect(a3, (const struct _RECTL *)((char *)a1 + 40), &v38) )
      {
        ENUMAREAS::ENUMAREAS((ENUMAREAS *)v35, a1, &v38, 0, 0LL);
        do
        {
          v10 = ENUMAREAS::bEnum((ENUMAREAS *)v35, &v28, &v37);
          v11 = v28;
          v12 = v10;
          v30 = v10;
          if ( v28 )
          {
            if ( !v8 )
            {
              if ( !v6 || (p_top = (struct RGNOBJ *)&v6[2].rclBounds.top, !v6->iDComplexity) )
              {
                RGNOBJ::vSet((RGNOBJ *)&v29, v9);
                p_top = (struct RGNOBJ *)&v29;
              }
              v33 = *((_QWORD *)a1 + 130);
              if ( !RGNOBJ::bMerge((RGNOBJ *)&v27, p_top, (struct RGNOBJ *)&v33, 4u) )
                RGNOBJ::vSet((RGNOBJ *)&v27);
              v8 = v27;
            }
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v39, v8, (const struct ERECTL *)&v37, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&v39.rclBounds) )
            {
              v14 = (struct _SURFOBJ **)((char *)a1 + 32);
              while ( 1 )
              {
                v15 = 0LL;
                if ( !a5 )
                  break;
                v16 = *((_QWORD *)a1 + 4);
                if ( v16 )
                {
                  v17 = *(_DWORD *)(v16 + 88);
                  if ( ((v17 & 0x4000) != 0 || v17 < 0) && (v17 & 0x200) == 0 )
                  {
                    v15 = v16 - 24;
                    GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v16 + 24));
                  }
                }
                v18 = *((_QWORD *)v11 + 20);
                v19 = 0LL;
                if ( v18 )
                {
                  v20 = *(_DWORD *)(v18 + 88);
                  if ( ((v20 & 0x4000) != 0 || v20 < 0) && (v20 & 0x200) == 0 )
                  {
                    v19 = v18 - 24;
                    GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v18 + 24));
                  }
                }
                INVOKEOFFCOPYBITS(
                  (struct _POINTL *)v11 + 21,
                  *((struct _SURFOBJ **)v11 + 20),
                  v31,
                  *((struct _SURFOBJ **)a1 + 4),
                  &v39,
                  0LL,
                  &v37,
                  (struct _POINTL *)&v37);
                if ( v19 )
                  GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v19 + 48));
                if ( v15 )
                  GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v15 + 48));
                v14 = (struct _SURFOBJ **)((char *)a1 + 32);
                if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v35, &v28) )
                  goto LABEL_48;
                v11 = v28;
              }
              v21 = *((_QWORD *)v11 + 20);
              v22 = (struct _SURFOBJ **)((char *)a1 + 32);
              if ( v21 )
              {
                v23 = *(_DWORD *)(v21 + 88);
                if ( (v23 & 0x4000) != 0 || (v22 = v14, v23 < 0) )
                {
                  v22 = (struct _SURFOBJ **)((char *)a1 + 32);
                  if ( (v23 & 0x200) == 0 )
                  {
                    v15 = v21 - 24;
                    GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v21 + 24));
                  }
                }
              }
              v24 = *v22;
              p_pvScan0 = 0LL;
              if ( *v22 )
              {
                hsurf = (int)v24[1].hsurf;
                if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
                {
                  p_pvScan0 = &v24[-1].pvScan0;
                  GreAcquireSemaphore<8,PDEVOBJ>((__int64)v24->hdev);
                }
              }
              INVOKEOFFCOPYBITS(
                v31,
                *v22,
                (struct _POINTL *)v11 + 21,
                *((struct _SURFOBJ **)v11 + 20),
                &v39,
                0LL,
                &v37,
                (struct _POINTL *)&v37);
              if ( p_pvScan0 )
                GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
              if ( v15 )
                GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v15 + 48));
              v9 = (const struct _RECTL *)((char *)a1 + 40);
LABEL_48:
              v6 = v34;
              v12 = v30;
            }
          }
        }
        while ( v12 );
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v35);
      }
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v36);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v27);
}
