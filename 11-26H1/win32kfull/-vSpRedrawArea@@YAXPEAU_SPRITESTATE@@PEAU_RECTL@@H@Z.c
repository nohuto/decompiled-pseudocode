/*
 * XREFs of ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x14001B8FC (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x14016A02C (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140313DF0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x140316884 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     vSpUnTearDownSprites @ 0x140318B00 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x14009BFF8 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x140167160 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140167254 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x140167E10 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140168230 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1401690E8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140169524 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140169ED4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpRedrawArea(struct _SPRITESTATE *a1, struct _RECTL *a2, int a3)
{
  __int64 v3; // rax
  int v4; // ebx
  bool v5; // zf
  int v7; // r13d
  struct _SURFOBJ *Composite; // rsi
  __int64 v9; // rdi
  struct SPRITE *v10; // r14
  __int64 v11; // rcx
  int v12; // eax
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  __int64 v15; // rdi
  int v16; // r12d
  unsigned __int64 v17; // rbx
  int v18; // edx
  _DWORD *v19; // rcx
  ULONG StartingIndex; // [rsp+40h] [rbp-79h] BYREF
  int v21; // [rsp+44h] [rbp-75h]
  struct SPRITE *v22; // [rsp+48h] [rbp-71h] BYREF
  struct _POINTL v23; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v24[64]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-19h]
  _DWORD *v26; // [rsp+A8h] [rbp-11h]
  struct _RECTL v27; // [rsp+C0h] [rbp+7h] BYREF

  v3 = *(_QWORD *)a1;
  v4 = a3;
  v23 = 0LL;
  v21 = a3;
  v27 = 0LL;
  v5 = (*(_DWORD *)(v3 + 40) & 0x400) == 0;
  v22 = 0LL;
  if ( v5 )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v24, a1, a2, 0, 0LL);
    while ( 1 )
    {
      v7 = ENUMAREAS::bEnum((ENUMAREAS *)v24, &v22, &v27);
      if ( !v22 || (unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v24, &v22) && !v4 )
        goto LABEL_36;
      StartingIndex = 0;
      Composite = psoSpGetComposite(a1, &v27, &StartingIndex);
      if ( !Composite )
      {
LABEL_37:
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v24);
        return;
      }
      v9 = 0LL;
      v10 = v22;
      v23.x = -v27.left;
      v23.y = -v27.top;
      v11 = *((_QWORD *)v22 + 20);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 88);
        if ( ((v12 & 0x4000) != 0 || v12 < 0) && (v12 & 0x200) == 0 )
        {
          v9 = v11 - 24;
          GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v11 + 24));
        }
      }
      hsurf = (int)Composite[1].hsurf;
      p_pvScan0 = 0LL;
      if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &Composite[-1].pvScan0;
        GreAcquireSemaphore<8,PDEVOBJ>((__int64)Composite->hdev);
      }
      INVOKEOFFCOPYBITS(
        &v23,
        Composite,
        (struct _POINTL *)v10 + 21,
        *((struct _SURFOBJ **)v10 + 20),
        0LL,
        0LL,
        &v27,
        (struct _POINTL *)&v27);
      if ( p_pvScan0 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
      if ( v9 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v9 + 48));
      v15 = v25;
      v16 = v24[0] & 1;
      v17 = (unsigned __int64)v26;
      do
      {
        vSpComposite(v10, &v23, Composite, &v27);
        v18 = 0;
        if ( v16 )
        {
          if ( v17 <= v15 + 24 )
            goto LABEL_28;
          v19 = (_DWORD *)(v17 - 16);
        }
        else
        {
          if ( v17 >= v15 + *(_QWORD *)(v15 + 8) - 16LL )
            goto LABEL_28;
          v19 = (_DWORD *)(v17 + 16);
        }
        if ( *v19 == *(_DWORD *)v17 )
        {
          v18 = 1;
          v26 = v19;
          v17 = (unsigned __int64)v19;
        }
LABEL_28:
        v10 = *(struct SPRITE **)(v17 + 8);
      }
      while ( v18 );
      v22 = *(struct SPRITE **)(v17 + 8);
      vSpWriteToScreen(a1, &v23, Composite, &v27);
      if ( StartingIndex == -1 )
      {
        vSpDeleteSurface(Composite);
      }
      else
      {
        if ( a1 != (struct _SPRITESTATE *)-696LL )
          GreAcquirePushLockExclusive((struct _SPRITESTATE *)((char *)a1 + 696));
        RtlClearBits((PRTL_BITMAP)a1 + 42, StartingIndex, 1u);
        if ( a1 != (struct _SPRITESTATE *)-696LL )
          GreReleasePushLockExclusive((struct _SPRITESTATE *)((char *)a1 + 696));
      }
      v4 = v21;
LABEL_36:
      if ( !v7 )
        goto LABEL_37;
    }
  }
}
