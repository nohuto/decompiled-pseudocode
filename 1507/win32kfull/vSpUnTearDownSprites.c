/*
 * XREFs of vSpUnTearDownSprites @ 0x1C027BB80
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02637B4 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026E0A4 (-GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008A630 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008A660 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00F5838 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C014CDD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C014CE4C (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C014CF9C (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C026F348 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0276EBC (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02773F0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 */

void __fastcall vSpUnTearDownSprites(const struct _RECTL *a1, const struct _RECTL *a2, int a3)
{
  struct _SPRITESTATE *v3; // rbx
  int v5; // eax
  struct SPRITE *v6; // r8
  int v7; // edi
  struct SPRITE *v8; // [rsp+30h] [rbp-D0h] BYREF
  const struct _RECTL *v9; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v10[96]; // [rsp+40h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v11[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v12; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v13; // [rsp+170h] [rbp+70h] BYREF

  v3 = (struct _SPRITESTATE *)&a1[6];
  v9 = a1;
  if ( a1[10].left && bIntersect(a2, a1 + 9, &v12) )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v11, (struct PDEVOBJ *)&v9);
    if ( a3 )
      vSpComputeUnlockedRegion(v3);
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v10, v3, &v12, 0, 0LL);
    do
    {
      v5 = ENUMAREAS::bEnum((ENUMAREAS *)v10, &v8, &v13);
      v6 = v8;
      v7 = v5;
      if ( v8 )
      {
        while ( 1 )
        {
          vSpReadFromScreen(v3, (struct _POINTL *)v6 + 21, *((struct _SURFOBJ **)v6 + 20), &v13);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v10, &v8) )
            break;
          v6 = v8;
        }
      }
    }
    while ( v7 );
    vSpRedrawArea(v3, &v12, 1);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v10);
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v11);
  }
}
