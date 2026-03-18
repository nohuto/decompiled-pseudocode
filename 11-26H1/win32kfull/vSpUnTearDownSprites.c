/*
 * XREFs of vSpUnTearDownSprites @ 0x140318B00
 * Callers:
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1403104F0 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x140347F18 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1401690E8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x140169524 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x140169ED4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x14018548C (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x140290818 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140317190 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpUnTearDownSprites(__int64 a1, const struct _RECTL *a2, int a3)
{
  HDEV *v3; // rbx
  int v5; // eax
  struct SPRITE *v6; // r8
  int v7; // edi
  struct SPRITE *v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v10[96]; // [rsp+40h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v11[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v12; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v13; // [rsp+170h] [rbp+70h] BYREF

  v9 = a1;
  v3 = (HDEV *)(a1 + 80);
  v8 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( *(_DWORD *)(a1 + 136) && bIntersect(a2, (const struct _RECTL *)(a1 + 120), &v12) )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v11, (struct PDEVOBJ *)&v9);
    if ( a3 )
      vSpComputeUnlockedRegion(v3);
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v10, (struct _SPRITESTATE *)v3, &v12, 0, 0LL);
    do
    {
      v5 = ENUMAREAS::bEnum((ENUMAREAS *)v10, &v8, &v13);
      v6 = v8;
      v7 = v5;
      if ( v8 )
      {
        while ( 1 )
        {
          vSpReadFromScreen((struct _SPRITESTATE *)v3, (struct _POINTL *)v6 + 21, *((struct _SURFOBJ **)v6 + 20), &v13);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v10, &v8) )
            break;
          v6 = v8;
        }
      }
    }
    while ( v7 );
    vSpRedrawArea((struct _SPRITESTATE *)v3, &v12, 1);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v10);
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v11);
  }
}
