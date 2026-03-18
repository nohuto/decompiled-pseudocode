/*
 * XREFs of ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140168230
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140166D28 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1401863C4 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1403149E0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x140248BE4 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x140313D80 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1403159F4 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpWriteToScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  __int64 v5; // rdi
  struct _CLIPOBJ *v10; // r15
  int v11; // eax
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  __int64 v14; // rcx
  int v15; // eax
  struct _SURFOBJ *v16; // rdx
  struct _POINTL v17; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[52]; // [rsp+54h] [rbp-ACh] BYREF
  _QWORD v20[4]; // [rsp+88h] [rbp-78h] BYREF
  int v21; // [rsp+A8h] [rbp-58h]
  int v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+E0h] [rbp-20h]
  int v24; // [rsp+E8h] [rbp-18h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 130);
  v5 = 0LL;
  v20[3] = 0LL;
  v21 = 0;
  v22 = 1;
  v23 = 0LL;
  v20[0] = 0LL;
  v10 = 0LL;
  v24 = 0;
  if ( v4 )
  {
    v11 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v18, v11, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)v19) )
    {
      ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v18);
      return;
    }
    v10 = (struct _CLIPOBJ *)v18;
  }
  hsurf = (int)a3[1].hsurf;
  p_pvScan0 = 0LL;
  a3->iUniq = 0;
  if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
  {
    p_pvScan0 = &a3[-1].pvScan0;
    GreAcquireSemaphore<8,PDEVOBJ>((__int64)a3->hdev);
  }
  v14 = *((_QWORD *)a1 + 4);
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 88);
    if ( ((v15 & 0x4000) != 0 || v15 < 0) && (v15 & 0x200) == 0 )
    {
      v5 = v14 - 24;
      GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v14 + 24));
    }
  }
  v16 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
  v17 = 0LL;
  INVOKEOFFCOPYBITS(&v17, v16, a2, a3, v10, 0LL, a4, (struct _POINTL *)a4);
  if ( v5 )
    GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v5 + 48));
  if ( p_pvScan0 )
    GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
  if ( v24 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v20);
}
