/*
 * XREFs of vSpUnTearDownSprites @ 0x1C02790C0
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C025F908 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026B0CC (-GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0103C74 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0103CE8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0103E38 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011C4C8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C026C844 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0274404 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C027492C (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 */

void __fastcall vSpUnTearDownSprites(const struct _RECTL *a1, const struct _RECTL *a2, int a3)
{
  struct _SPRITESTATE *v3; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  struct SPRITE *v8; // r8
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct SPRITE *v13; // [rsp+30h] [rbp-D0h] BYREF
  const struct _RECTL *v14; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v15[96]; // [rsp+40h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v16[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v17; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v18; // [rsp+170h] [rbp+70h] BYREF

  v3 = (struct _SPRITESTATE *)&a1[6];
  v14 = a1;
  if ( a1[10].left && bIntersect(a2, a1 + 9, &v17) )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v14, v5, v6);
    if ( a3 )
      vSpComputeUnlockedRegion(v3);
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v15, v3, &v17, 0, 0LL);
    do
    {
      v7 = ENUMAREAS::bEnum((ENUMAREAS *)v15, &v13, &v18);
      v8 = v13;
      v9 = v7;
      if ( v13 )
      {
        while ( 1 )
        {
          vSpReadFromScreen(v3, (struct _POINTL *)v8 + 21, *((struct _SURFOBJ **)v8 + 20), &v18);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v15, &v13) )
            break;
          v8 = v13;
        }
      }
    }
    while ( v9 );
    vSpRedrawArea(v3, &v17, 1);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v15);
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v16, v10, v11, v12);
  }
}
