/*
 * XREFs of ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x14001B8FC
 * Callers:
 *     GreRedrawSpriteOverlapPresent @ 0x14001B79C (GreRedrawSpriteOverlapPresent.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001BDBC (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001DA64 (--$GreReleaseSemaphoreExclusive@$08PEAUHSEMAPHORE__@@@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x140169738 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x14018548C (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14026E8E4 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vSpRedrawSpriteOverlapPresent(HDEV a1)
{
  HDEV v1; // rbx
  struct REGION *v2; // rdx
  unsigned int v3; // r14d
  struct REGION *v4; // rdi
  int v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // r15d
  int v10; // eax
  int v11; // eax
  unsigned int i; // edx
  __int64 v13; // r15
  int v14; // edi
  struct _RECTL v15; // xmm0
  unsigned int j; // esi
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  struct REGION *v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v20; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v21[4]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v22[192]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v23[4]; // [rsp+138h] [rbp+30h] BYREF
  char v24[16]; // [rsp+13Ch] [rbp+34h] BYREF
  char v25; // [rsp+14Ch] [rbp+44h]
  __int64 v26; // [rsp+170h] [rbp+68h]
  __int64 v27; // [rsp+188h] [rbp+80h]
  int v28; // [rsp+190h] [rbp+88h]
  int v29; // [rsp+1B8h] [rbp+B0h]
  __int64 v30; // [rsp+1C8h] [rbp+C0h]
  _BYTE v31[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v32[16]; // [rsp+1DCh] [rbp+D4h] BYREF
  char v33; // [rsp+1ECh] [rbp+E4h]
  __int64 v34; // [rsp+210h] [rbp+108h]
  __int64 v35; // [rsp+228h] [rbp+120h]
  int v36; // [rsp+230h] [rbp+128h]
  int v37; // [rsp+258h] [rbp+150h]
  __int64 v38; // [rsp+268h] [rbp+160h]
  int v39; // [rsp+278h] [rbp+170h] BYREF
  struct _RECTL v40; // [rsp+27Ch] [rbp+174h] BYREF
  char v41; // [rsp+28Ch] [rbp+184h]
  __int64 v42; // [rsp+2B0h] [rbp+1A8h]
  __int64 v43; // [rsp+2C8h] [rbp+1C0h]
  int v44; // [rsp+2D0h] [rbp+1C8h]
  int v45; // [rsp+2F8h] [rbp+1F0h]
  __int64 v46; // [rsp+308h] [rbp+200h]
  unsigned int v47; // [rsp+3C8h] [rbp+2C0h] BYREF
  struct _RECTL v48[20]; // [rsp+3CCh] [rbp+2C4h] BYREF

  v20 = a1;
  v1 = a1 + 20;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v22, (struct PDEVOBJ *)&v20);
  SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v1 + 30));
  v2 = (struct REGION *)*((_QWORD *)v1 + 131);
  v3 = 0;
  if ( v2 )
  {
    v4 = (struct REGION *)*((_QWORD *)v1 + 132);
    if ( v4 )
    {
      v5 = 1;
      v27 = 0LL;
      v28 = 0;
      v29 = 1;
      v30 = 0LL;
      v26 = 0LL;
      v35 = 0LL;
      v36 = 0;
      v37 = 1;
      v38 = 0LL;
      v34 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v23, v2, (const struct ERECTL *)(v1 + 10), 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v31, v4, (const struct ERECTL *)(v1 + 10), 0);
      ERECTL::bEmpty((ERECTL *)v32);
      v6 = ERECTL::bEmpty((ERECTL *)v24);
      if ( v7 == v6 )
      {
        if ( !v25 && !v33 )
        {
LABEL_25:
          v17 = *((_QWORD *)v1 + 132);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
          *((_QWORD *)v1 + 132) = 0LL;
          goto LABEL_2;
        }
        if ( v25 == v33 )
        {
          memset_0(v48, 0, sizeof(v48));
          memset_0(&v40, 0, 0x140uLL);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v23, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v31, 0, 0, 4u, 0x64u);
          v8 = 1;
          while ( 1 )
          {
            v9 = 0;
            v47 = 0;
            v39 = 0;
            if ( v5 )
            {
              v10 = XCLIPOBJ::bEnum((XCLIPOBJ *)v23, 0x144u, &v47, 0LL);
              v3 = v47;
              v5 = v10;
            }
            if ( v8 )
            {
              v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)v31, 0x144u, &v39, 0LL);
              v9 = v39;
              v8 = v11;
            }
            if ( v3 != v9 )
              break;
            for ( i = 0; i < v3; ++i )
            {
              if ( *(&v40.left + 4 * i) != v48[i].left
                || *(&v40.top + 4 * i) != v48[i].top
                || *(&v40.right + 4 * i) != v48[i].right
                || *(&v40.bottom + 4 * i) != v48[i].bottom )
              {
                goto LABEL_26;
              }
            }
            v3 = 0;
            if ( !v5 && !v8 )
              goto LABEL_25;
          }
        }
      }
LABEL_26:
      v13 = *((_QWORD *)v1 + 131);
      *((_QWORD *)v1 + 131) = *((_QWORD *)v1 + 132);
      vSpComputeUnlockedRegion((struct _SPRITESTATE *)v1);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
      if ( !v17 )
        goto LABEL_43;
      if ( !v18 )
        goto LABEL_43;
      RGNOBJ::vSet((RGNOBJ *)&v17, (const struct _RECTL *const)(v1 + 10));
      v19 = v13;
      if ( !RGNOBJ::bMerge((RGNOBJ *)&v18, (struct RGNOBJ *)&v17, (struct RGNOBJ *)&v19, 4u) )
        goto LABEL_43;
      v43 = 0LL;
      v44 = 0;
      v45 = 1;
      v46 = 0LL;
      v42 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&v39, v18, (const struct ERECTL *)(v1 + 10), 1);
      memset_0(&v47, 0, 0x144uLL);
      if ( v41 )
      {
        if ( v41 != 1 )
        {
          if ( v41 != 3 )
          {
LABEL_43:
            v19 = v13;
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
            *((_QWORD *)v1 + 132) = 0LL;
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
            goto LABEL_2;
          }
          v14 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)&v39, 0, 0, 4u, 0x14u);
LABEL_36:
          if ( !v14 )
            goto LABEL_38;
          do
          {
            v14 = XCLIPOBJ::bEnum((XCLIPOBJ *)&v39, 0x144u, &v47, 0LL);
LABEL_38:
            for ( j = 0; j < v47; ++j )
            {
              PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v21, (struct _SPRITESTATE *)v1, &v48[j]);
              if ( v21[0] )
                vSpRedrawArea((struct _SPRITESTATE *)v1, &v48[j], 0);
              PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v21);
            }
          }
          while ( v14 );
          goto LABEL_43;
        }
        v15 = v40;
      }
      else
      {
        v15 = *(struct _RECTL *)(v1 + 10);
      }
      v48[0] = v15;
      v47 = 1;
      v14 = 0;
      goto LABEL_36;
    }
  }
LABEL_2:
  if ( !*((_BYTE *)v1 + 128) )
    GreReleaseSemaphoreExclusive<9,HSEMAPHORE__ *>(*((_QWORD *)v1 + 15));
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v22);
}
