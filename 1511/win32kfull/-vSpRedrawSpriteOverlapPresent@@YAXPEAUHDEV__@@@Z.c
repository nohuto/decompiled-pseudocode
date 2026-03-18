/*
 * XREFs of ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C00685BC
 * Callers:
 *     GreRedrawSpriteOverlapPresent @ 0x1C00684F0 (GreRedrawSpriteOverlapPresent.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0053D80 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0053DB0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00686A0 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FAA54 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02729FC (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02763E4 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C027A120 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

void __fastcall vSpRedrawSpriteOverlapPresent(HDEV a1)
{
  HDEV v1; // rbx
  struct REGION *v2; // rdx
  unsigned int v3; // esi
  struct REGION *v4; // rdi
  int v5; // r15d
  int v6; // r12d
  int v7; // eax
  int v8; // edx
  int v9; // r14d
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  REGION *v14; // r14
  int v15; // edi
  struct _RECTL v16; // xmm0
  _QWORD v17[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct REGION *v18[2]; // [rsp+48h] [rbp-C0h] BYREF
  SPRITERANGELOCK *v19; // [rsp+58h] [rbp-B0h]
  HDEV v20; // [rsp+60h] [rbp-A8h] BYREF
  REGION *v21; // [rsp+68h] [rbp-A0h] BYREF
  struct _SPRITESTATE *v22[24]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v23[4]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v24[4]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v25[16]; // [rsp+15Ch] [rbp+54h] BYREF
  char v26; // [rsp+16Ch] [rbp+64h]
  __int64 v27; // [rsp+190h] [rbp+88h]
  __int64 v28; // [rsp+1A8h] [rbp+A0h]
  int v29; // [rsp+1B0h] [rbp+A8h]
  int v30; // [rsp+1D8h] [rbp+D0h]
  __int64 v31; // [rsp+1E8h] [rbp+E0h]
  _BYTE v32[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v33[16]; // [rsp+1FCh] [rbp+F4h] BYREF
  char v34; // [rsp+20Ch] [rbp+104h]
  __int64 v35; // [rsp+230h] [rbp+128h]
  __int64 v36; // [rsp+248h] [rbp+140h]
  int v37; // [rsp+250h] [rbp+148h]
  int v38; // [rsp+278h] [rbp+170h]
  __int64 v39; // [rsp+288h] [rbp+180h]
  _BYTE v40[4]; // [rsp+298h] [rbp+190h] BYREF
  struct _RECTL v41; // [rsp+29Ch] [rbp+194h]
  char v42; // [rsp+2ACh] [rbp+1A4h]
  __int64 v43; // [rsp+2D0h] [rbp+1C8h]
  __int64 v44; // [rsp+2E8h] [rbp+1E0h]
  int v45; // [rsp+2F0h] [rbp+1E8h]
  int v46; // [rsp+318h] [rbp+210h]
  __int64 v47; // [rsp+328h] [rbp+220h]
  unsigned int v48; // [rsp+338h] [rbp+230h] BYREF
  struct _RECTL v49[20]; // [rsp+33Ch] [rbp+234h] BYREF
  _DWORD v50[84]; // [rsp+488h] [rbp+380h] BYREF

  v20 = a1;
  v1 = a1 + 24;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v22, (struct PDEVOBJ *)&v20);
  v19 = (SPRITERANGELOCK *)(v1 + 32);
  SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v1 + 32));
  v2 = (struct REGION *)*((_QWORD *)v1 + 131);
  v3 = 0;
  if ( !v2 )
    goto LABEL_2;
  v4 = (struct REGION *)*((_QWORD *)v1 + 132);
  if ( !v4 )
    goto LABEL_2;
  v5 = 1;
  v28 = 0LL;
  v29 = 0;
  v30 = 1;
  v31 = 0LL;
  v27 = 0LL;
  v6 = 1;
  v36 = 0LL;
  v37 = 0;
  v38 = 1;
  v39 = 0LL;
  v35 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v24, v2, (struct ERECTL *)(v1 + 12), 0);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v32, v4, (struct ERECTL *)(v1 + 12), 0);
  ERECTL::bEmpty((ERECTL *)v25);
  v7 = ERECTL::bEmpty((ERECTL *)v33);
  if ( v7 == v8 )
  {
    if ( !v26 && !v34 )
      goto LABEL_34;
    if ( v26 == v34 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v24, 0, 0, 4u, 0x64u);
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v32, 0, 0, 4u, 0x64u);
      v9 = 1;
      while ( 1 )
      {
        v48 = 0;
        v10 = 0;
        v50[0] = 0;
        if ( v9 )
        {
          v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)v24, 0x144u, (char *)&v48, 0LL);
          v10 = v48;
          v9 = v11;
        }
        if ( v5 )
        {
          v12 = XCLIPOBJ::bEnum((XCLIPOBJ *)v32, 0x144u, (char *)v50, 0LL);
          v3 = v50[0];
          v5 = v12;
        }
        if ( v10 != v3 )
          break;
        v3 = 0;
        v13 = 0;
        if ( v10 )
        {
          while ( v50[4 * v13 + 1] == v49[v13].left
               && v50[4 * v13 + 2] == v49[v13].top
               && v50[4 * v13 + 3] == v49[v13].right
               && v50[4 * v13 + 4] == v49[v13].bottom )
          {
            if ( ++v13 >= v10 )
              goto LABEL_22;
          }
          v6 = 0;
          v9 = 0;
          v5 = 0;
        }
LABEL_22:
        if ( !v9 && !v5 )
          goto LABEL_26;
      }
      v3 = 0;
      v6 = 0;
LABEL_26:
      if ( v6 )
      {
LABEL_34:
        REGION::vDeleteREGION(*((REGION **)v1 + 132));
        *((_QWORD *)v1 + 132) = 0LL;
        goto LABEL_2;
      }
    }
  }
  v14 = (REGION *)*((_QWORD *)v1 + 131);
  *((_QWORD *)v1 + 131) = *((_QWORD *)v1 + 132);
  vSpComputeUnlockedRegion((struct _SPRITESTATE *)v1);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
  if ( !v17[0] )
    goto LABEL_45;
  if ( !v18[0] )
    goto LABEL_45;
  RGNOBJ::vSet((RGNOBJ *)v17, (struct _RECTL *)v1 + 3);
  v21 = v14;
  if ( !RGNOBJ::bMerge((RGNOBJ *)v18, (struct RGNOBJ *)v17, (struct RGNOBJ *)&v21, BYTE4(gafjRgnOp)) )
    goto LABEL_45;
  v44 = 0LL;
  v45 = 0;
  v46 = 1;
  v47 = 0LL;
  v43 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v40, v18[0], (struct ERECTL *)(v1 + 12), 1);
  switch ( v42 )
  {
    case 0:
      v16 = (struct _RECTL)*((_OWORD *)v1 + 3);
      goto LABEL_37;
    case 1:
      v16 = v41;
LABEL_37:
      v49[0] = v16;
      v48 = 1;
      v15 = 0;
      goto LABEL_38;
    case 3:
      v15 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v40, 0, 0, 4u, 0x14u);
LABEL_38:
      if ( !v15 )
        goto LABEL_40;
      do
      {
        v15 = XCLIPOBJ::bEnum((XCLIPOBJ *)v40, 0x144u, (char *)&v48, 0LL);
LABEL_40:
        if ( v48 )
        {
          do
          {
            PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v23, (struct _SPRITESTATE *)v1, &v49[v3]);
            if ( v23[0] )
              vSpRedrawArea((struct _SPRITESTATE *)v1, &v49[v3], 0);
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v23);
            ++v3;
          }
          while ( v3 < v48 );
        }
        v3 = 0;
      }
      while ( v15 );
      break;
  }
LABEL_45:
  if ( v14 )
    REGION::vDeleteREGION(v14);
  *((_QWORD *)v1 + 132) = 0LL;
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
LABEL_2:
  SPRITERANGELOCK::vUnlock(v19);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v22);
}
