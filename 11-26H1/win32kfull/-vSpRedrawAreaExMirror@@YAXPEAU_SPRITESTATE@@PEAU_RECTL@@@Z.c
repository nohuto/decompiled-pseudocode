/*
 * XREFs of ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1403175F8
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140168780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x14009BFF8 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x140167160 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140167254 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x140167E10 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1401690E8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140169524 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140169ED4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401AB8AC (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x140248BE4 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x140290818 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x140313D80 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1403159F4 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140318514 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpRedrawAreaExMirror(struct _SPRITESTATE *a1, struct _RECTL *a2)
{
  __int64 v2; // rax
  struct REGION *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  struct _SURFOBJ *v13; // r9
  struct _SURFOBJ *v14; // rdx
  int v15; // r12d
  struct _SURFOBJ *Composite; // r14
  __int64 v17; // rdi
  struct SPRITE *v18; // r15
  __int64 v19; // rcx
  int v20; // eax
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  ULONG StartingIndex[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct SPRITE *v24; // [rsp+48h] [rbp-B8h] BYREF
  struct _POINTL v25; // [rsp+50h] [rbp-B0h] BYREF
  struct W32_PUSH_LOCK *v26; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v27[96]; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v28; // [rsp+C0h] [rbp-40h] BYREF
  struct _CLIPOBJ v29; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+108h] [rbp+8h]
  __int64 v31; // [rsp+120h] [rbp+20h]
  int v32; // [rsp+128h] [rbp+28h]
  int v33; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+160h] [rbp+60h]
  int v35; // [rsp+168h] [rbp+68h]

  v2 = *(_QWORD *)a1;
  v25 = 0LL;
  v28 = 0LL;
  v24 = 0LL;
  if ( (*(_DWORD *)(v2 + 40) & 0x400) == 0 )
  {
    v5 = (struct REGION *)*((_QWORD *)a1 + 88);
    v31 = 0LL;
    v32 = 0;
    v33 = 1;
    v34 = 0LL;
    v30 = 0LL;
    v35 = 0;
    v6 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v29, v6, v5, (struct ERECTL *)a2, 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v29.rclBounds) )
    {
      v7 = *((_QWORD *)a1 + 4);
      v8 = 0LL;
      if ( v7 )
      {
        v9 = *(_DWORD *)(v7 + 88);
        if ( ((v9 & 0x4000) != 0 || v9 < 0) && (v9 & 0x200) == 0 )
        {
          v8 = v7 - 24;
          GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v7 + 24));
        }
      }
      v10 = *((_QWORD *)a1 + 167);
      v11 = 0LL;
      if ( v10 )
      {
        v12 = *(_DWORD *)(v10 + 88);
        if ( ((v12 & 0x4000) != 0 || v12 < 0) && (v12 & 0x200) == 0 )
        {
          v11 = v10 - 24;
          GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v10 + 24));
        }
      }
      v13 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
      v14 = (struct _SURFOBJ *)*((_QWORD *)a1 + 167);
      *(_QWORD *)StartingIndex = 0LL;
      INVOKEOFFCOPYBITS(
        (struct _POINTL *)StartingIndex,
        v14,
        (struct _POINTL *)StartingIndex,
        v13,
        &v29,
        0LL,
        (struct _RECTL *)((char *)a1 + 40),
        (struct _POINTL *)StartingIndex);
      if ( v11 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v11 + 48));
      if ( v8 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v8 + 48));
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v27, a1, a2, 0, 0LL);
    do
    {
      v15 = ENUMAREAS::bEnum((ENUMAREAS *)v27, &v24, &v28);
      if ( v24 && !(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v27, &v24) )
      {
        StartingIndex[0] = 0;
        Composite = psoSpGetComposite(a1, &v28, StartingIndex);
        if ( !Composite )
          break;
        v17 = 0LL;
        v18 = v24;
        v25.x = -v28.left;
        v25.y = -v28.top;
        v19 = *((_QWORD *)v24 + 20);
        if ( v19 )
        {
          v20 = *(_DWORD *)(v19 + 88);
          if ( ((v20 & 0x4000) != 0 || v20 < 0) && (v20 & 0x200) == 0 )
          {
            v17 = v19 - 24;
            GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v19 + 24));
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
          &v25,
          Composite,
          (struct _POINTL *)v18 + 21,
          *((struct _SURFOBJ **)v18 + 20),
          0LL,
          0LL,
          &v28,
          (struct _POINTL *)&v28);
        if ( p_pvScan0 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
        if ( v17 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v17 + 48));
        while ( 1 )
        {
          if ( (*(_DWORD *)v18 & 0x100) == 0 )
            vSpComposite(v18, &v25, Composite, &v28);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v27, &v24) )
            break;
          v18 = v24;
        }
        vSpWriteToExMirror(a1, &v25, Composite, &v28);
        if ( StartingIndex[0] == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          v26 = (struct _SPRITESTATE *)((char *)a1 + 696);
          if ( a1 != (struct _SPRITESTATE *)-696LL )
            GreAcquirePushLockExclusive((struct _SPRITESTATE *)((char *)a1 + 696));
          RtlClearBits((PRTL_BITMAP)a1 + 42, StartingIndex[0], 1u);
          Gre::PUSHLOCKEX::vUnlock(&v26, 0);
        }
      }
    }
    while ( v15 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v27);
    ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)&v29);
  }
}
