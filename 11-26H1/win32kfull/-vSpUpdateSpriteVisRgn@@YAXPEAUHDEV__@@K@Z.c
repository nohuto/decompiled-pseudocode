/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x14007F220
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     UserVisrgnFromHwnd @ 0x140037FA0 (UserVisrgnFromHwnd.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x14008018C (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x140080C30 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400BBFE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1401863C4 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1403162AC (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x140317C94 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vSpUpdateSpriteVisRgn(HDEV a1, char a2)
{
  HDEV v3; // rsi
  Gre::Base *v4; // rcx
  HDEV v5; // r14
  __int64 i; // rdi
  __int64 v7; // rdx
  struct REGION *v8; // rdx
  int v9; // esi
  struct REGION *v10; // rbx
  int v11; // r9d
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  struct _POINTL *v16; // rbx
  REGION *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r12d
  int v22; // r15d
  unsigned int v23; // ebx
  int v24; // esi
  int v25; // eax
  int v26; // eax
  unsigned int j; // edx
  struct _POINTL v28; // [rsp+38h] [rbp-D0h] BYREF
  struct _POINTL v29; // [rsp+40h] [rbp-C8h] BYREF
  struct _POINTL v30; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  HDEV v33; // [rsp+60h] [rbp-A8h]
  __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v35[40]; // [rsp+70h] [rbp-98h] BYREF
  int v36; // [rsp+98h] [rbp-70h]
  _BYTE v37[192]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v38[4]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v39[4]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v40[16]; // [rsp+17Ch] [rbp+74h] BYREF
  char v41; // [rsp+18Ch] [rbp+84h]
  __int64 v42; // [rsp+1B0h] [rbp+A8h]
  __int64 v43; // [rsp+1C8h] [rbp+C0h]
  int v44; // [rsp+1D0h] [rbp+C8h]
  int v45; // [rsp+1F8h] [rbp+F0h]
  __int64 v46; // [rsp+208h] [rbp+100h]
  _BYTE v47[4]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v48[16]; // [rsp+21Ch] [rbp+114h] BYREF
  char v49; // [rsp+22Ch] [rbp+124h]
  __int64 v50; // [rsp+250h] [rbp+148h]
  __int64 v51; // [rsp+268h] [rbp+160h]
  int v52; // [rsp+270h] [rbp+168h]
  int v53; // [rsp+298h] [rbp+190h]
  __int64 v54; // [rsp+2A8h] [rbp+1A0h]
  _DWORD v55[84]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _DWORD v56[84]; // [rsp+408h] [rbp+300h] BYREF

  v33 = a1;
  v3 = a1;
  v29 = 0LL;
  memset_0(v55, 0, 0x144uLL);
  memset_0(v56, 0, 0x144uLL);
  v5 = v3 + 20;
  if ( *((_QWORD *)v3 + 11) )
  {
    if ( (a2 & 4) != 0 )
    {
      Gre::Base::Globals(v4);
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)(v3 + 20), 1);
    }
    for ( i = *((_QWORD *)v3 + 11); ; i = *(_QWORD *)(i + 24) )
    {
      if ( !i )
        return;
      v7 = *(_QWORD *)(i + 72);
      if ( v7 )
        break;
LABEL_12:
      ;
    }
    UserVisrgnFromHwnd((HRGN *)v5 + 133, v7);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v28);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v34, *((HRGN *)v5 + 133), 0, 0);
    if ( !v34 || !*(_QWORD *)&v28 || !RGNOBJ::bCopy((RGNOBJ *)&v28, (struct RGNOBJ *)&v34) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v28);
LABEL_7:
      if ( !v36 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v34);
      if ( v34 )
        _InterlockedDecrement16((volatile signed __int16 *)(v34 + 12));
      PopThreadGuardedObject(v35);
      goto LABEL_12;
    }
    v29.x = -*((_DWORD *)v3 + 644);
    v29.y = -*((_DWORD *)v3 + 645);
    RGNOBJ::bOffset((RGNOBJ *)&v28, &v29);
    v8 = *(struct REGION **)(i + 184);
    v9 = 1;
    v10 = (struct REGION *)v28;
    v30 = v28;
    if ( v8 )
    {
      v11 = *(_DWORD *)(i + 116);
      v12 = *(_DWORD *)(i + 112) + *(_DWORD *)(i + 104) - *(_DWORD *)(i + 96);
      v38[0] = *(_DWORD *)(i + 112);
      v38[2] = v12;
      v13 = v11 + *(_DWORD *)(i + 108) - *(_DWORD *)(i + 100);
      v38[1] = v11;
      v38[3] = v13;
      v43 = 0LL;
      v44 = 0;
      v45 = 1;
      v46 = 0LL;
      v42 = 0LL;
      v51 = 0LL;
      v52 = 0;
      v53 = 1;
      v54 = 0LL;
      v50 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v39, v8, (const struct ERECTL *)v38, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v47, v10, (const struct ERECTL *)v38, 0);
      ERECTL::bEmpty((ERECTL *)v48);
      v14 = ERECTL::bEmpty((ERECTL *)v40);
      if ( v15 == v14 )
      {
        if ( !v41 )
        {
          v16 = (struct _POINTL *)(i + 112);
          if ( !v49 )
            goto LABEL_22;
        }
        if ( v41 == v49 )
        {
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v39, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v47, 0, 0, 4u, 0x64u);
          v21 = 1;
          v22 = 1;
          while ( 1 )
          {
            v23 = 0;
            v24 = 0;
            v55[0] = 0;
            v56[0] = 0;
            if ( v21 )
            {
              v25 = XCLIPOBJ::bEnum((XCLIPOBJ *)v39, 0x144u, v55, 0LL);
              v23 = v55[0];
              v21 = v25;
            }
            if ( v22 )
            {
              v26 = XCLIPOBJ::bEnum((XCLIPOBJ *)v47, 0x144u, v56, 0LL);
              v24 = v56[0];
              v22 = v26;
            }
            if ( v23 != v24 )
              break;
            for ( j = 0; j < v23; ++j )
            {
              if ( v56[4 * j + 1] != v55[4 * j + 1]
                || v56[4 * j + 2] != v55[4 * j + 2]
                || v56[4 * j + 3] != v55[4 * j + 3]
                || v56[4 * j + 4] != v55[4 * j + 4] )
              {
                goto LABEL_36;
              }
            }
            if ( !v21 )
            {
              v9 = 1;
              v16 = (struct _POINTL *)(i + 112);
              if ( !v22 )
                goto LABEL_22;
            }
          }
        }
      }
LABEL_36:
      v9 = 0;
      v16 = (struct _POINTL *)(i + 112);
    }
    else
    {
      v9 = 0;
      v16 = (struct _POINTL *)(i + 112);
    }
LABEL_22:
    vSpFreeClipResources((struct SPRITE *)i);
    v17 = (REGION *)v30;
    *(struct _POINTL *)(i + 184) = v30;
    REGION::vStamp(v17);
    v31 = *(_QWORD *)v5;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v32, (struct PDEVOBJ *)&v31);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v37, (struct PDEVOBJ *)&v31);
    *(_DWORD *)i &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)&v28, (struct _RECTL *)(v5 + 10)) != 2 )
      *(_DWORD *)i |= 1u;
    bSpUpdatePosition((struct SPRITE *)i, v16, 0, 0);
    if ( *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v19, v18, v20) + 96) + 4816LL) )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v5, (struct _RECTL *)(i + 80), (struct _RECTL *)(i + 80));
    if ( !v9 )
    {
      if ( *((_QWORD *)v5 + 130) )
      {
        v30 = 0LL;
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v5, &v30, (struct _RECTL *)(i + 80), 0LL, 1);
      }
      vSpRedrawSprite((struct SPRITE *)i);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v37);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v32);
    v3 = v33;
    goto LABEL_7;
  }
}
