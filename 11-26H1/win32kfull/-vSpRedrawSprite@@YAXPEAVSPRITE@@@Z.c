/*
 * XREFs of ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1401863C4
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x14007F220 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x14016A02C (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x140186134 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140186F80 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x14009BFF8 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1401670B8 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140167254 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x140167DD8 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x140167E10 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140168230 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401AB8AC (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x140296C88 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x140315CAC (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vSpRedrawSprite(struct SPRITE *a1)
{
  __int64 v1; // r12
  char v3; // dl
  struct _RECTL *v4; // rcx
  unsigned int v5; // r13d
  struct _RECTL *v6; // r14
  struct _SURFOBJ *Composite; // r15
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  struct SPRITE *i; // rcx
  const struct _RECTL *v14; // rax
  struct _RECTL *v15; // rbx
  int v16; // edi
  struct REGION *v17; // rbx
  struct _RECTL v18; // xmm0
  LONG v19; // eax
  LONG v20; // eax
  LONG v21; // eax
  ULONG StartingIndex; // [rsp+48h] [rbp-C0h] BYREF
  struct _POINTL v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  struct _RECTL v25; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v26[20]; // [rsp+78h] [rbp-90h] BYREF
  char v27; // [rsp+8Ch] [rbp-7Ch]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+108h] [rbp+0h]
  unsigned int v33; // [rsp+118h] [rbp+10h] BYREF
  struct _RECTL v34[20]; // [rsp+11Ch] [rbp+14h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v25 = 0LL;
  if ( !_bittest((const signed __int32 *)(*(_QWORD *)v1 + 40LL), 0xAu)
    && (*(_DWORD *)a1 & 0x400) == 0
    && (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v5 = 0;
    if ( !(unsigned int)bIgnoreMirrorUpdate(a1) && ((v3 & 0x40) == 0 || v3 < 0) )
    {
      v6 = v4 + 5;
      StartingIndex = 0;
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v1, v4 + 5, &StartingIndex);
      if ( Composite )
      {
        v8 = 0LL;
        v23.x = -v6->left;
        v23.y = -*((_DWORD *)a1 + 21);
        v9 = *((_QWORD *)a1 + 20);
        if ( v9 )
        {
          v10 = *(_DWORD *)(v9 + 88);
          if ( ((v10 & 0x4000) != 0 || v10 < 0) && (v10 & 0x200) == 0 )
          {
            v8 = v9 - 24;
            GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v9 + 24));
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
          (struct _POINTL *)a1 + 21,
          *((struct _SURFOBJ **)a1 + 20),
          0LL,
          0LL,
          v6,
          (struct _POINTL *)v6);
        if ( p_pvScan0 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
        if ( v8 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v8 + 48));
        for ( i = *(struct SPRITE **)(v1 + 8); ; i = *(struct SPRITE **)&v15[1].right )
        {
          v14 = (const struct _RECTL *)pSpFindInZ(i, v6);
          v15 = (struct _RECTL *)v14;
          if ( !v14 )
            break;
          if ( bIntersect(v14 + 5, v6, &v25) )
            vSpComposite((struct SPRITE *)v15, &v23, Composite, &v25);
          SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)&v15[15].right);
        }
        v16 = 1;
        v17 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
        if ( !v17 )
        {
          if ( (*(_DWORD *)a1 & 0x40) == 0 )
            vSpWriteToScreen((struct _SPRITESTATE *)v1, &v23, Composite, v6);
          goto LABEL_51;
        }
        v29 = 0LL;
        v30 = 0;
        v31 = 1;
        v32 = 0LL;
        v28 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v26, v17, (const struct ERECTL *)v6, 1);
        memset_0(&v33, 0, 0x144uLL);
        if ( v27 )
        {
          if ( v27 != 1 )
          {
            if ( v27 != 3 )
            {
LABEL_48:
              vSpAddAndCompactDirtyRegion(a1, v17);
LABEL_51:
              if ( StartingIndex == -1 )
              {
                vSpDeleteSurface(Composite);
              }
              else
              {
                v24 = v1 + 696;
                if ( v1 != -696 )
                  GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v1 + 696));
                RtlClearBits((PRTL_BITMAP)(v1 + 672), StartingIndex, 1u);
                Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)&v24, 0);
              }
              return;
            }
            XCLIPOBJ::cEnumStart((XCLIPOBJ *)v26, 0, 0, 4u, 0x14u);
LABEL_35:
            if ( !v16 )
              goto LABEL_37;
            do
            {
              v16 = XCLIPOBJ::bEnum((XCLIPOBJ *)v26, 0x144u, (char *)&v33, 0LL);
LABEL_37:
              if ( v33 )
              {
                do
                {
                  if ( v34[v5].left < v6->left )
                    v34[v5].left = v6->left;
                  v19 = *((_DWORD *)a1 + 22);
                  if ( v34[v5].right > v19 )
                    v34[v5].right = v19;
                  v20 = *((_DWORD *)a1 + 21);
                  if ( v34[v5].top < v20 )
                    v34[v5].top = v20;
                  v21 = *((_DWORD *)a1 + 23);
                  if ( v34[v5].bottom > v21 )
                    v34[v5].bottom = v21;
                  vSpWriteToScreen((struct _SPRITESTATE *)v1, &v23, Composite, &v34[v5++]);
                }
                while ( v5 < v33 );
              }
              v5 = 0;
            }
            while ( v16 );
            goto LABEL_48;
          }
          v18 = *(struct _RECTL *)&v26[4];
        }
        else
        {
          v18 = *v6;
        }
        v34[0] = v18;
        v33 = 1;
        v16 = 0;
        goto LABEL_35;
      }
    }
  }
}
