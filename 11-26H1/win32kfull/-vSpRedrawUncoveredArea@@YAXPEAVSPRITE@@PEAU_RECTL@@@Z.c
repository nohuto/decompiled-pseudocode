/*
 * XREFs of ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140166D28
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x14009BFF8 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x140166C04 (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1401670B8 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140167254 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x140167E10 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140168230 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x140253454 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x140296C88 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x140317C94 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x140318698 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpRedrawUncoveredArea(struct SPRITE *a1, struct _RECTL *a2)
{
  __int64 v2; // r15
  struct _RECTL *v4; // r13
  unsigned int v5; // eax
  __int64 v6; // r14
  int v7; // ebx
  struct _SURFOBJ *Composite; // r12
  struct _RECTL *v9; // rbx
  __int64 v10; // rdi
  struct SPRITE *v11; // r13
  struct _RECTL *v12; // r15
  const struct _RECTL *v13; // rdi
  __int64 v14; // r15
  const struct _RECTL *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // eax
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  struct SPRITE *v21; // rdi
  struct _RECTL *v22; // rbx
  struct _POINTL *v23; // rdx
  struct _SURFOBJ *v24; // r8
  int v25; // [rsp+40h] [rbp-99h]
  struct _RECTL *v26; // [rsp+40h] [rbp-99h]
  ULONG StartingIndex; // [rsp+48h] [rbp-91h] BYREF
  struct _POINTL v28; // [rsp+50h] [rbp-89h] BYREF
  struct _POINTL v29; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-79h]
  __int64 v31; // [rsp+68h] [rbp-71h]
  __int64 v32; // [rsp+70h] [rbp-69h]
  struct SPRITE *v33; // [rsp+78h] [rbp-61h] BYREF
  int v34; // [rsp+80h] [rbp-59h]
  struct _RECTL *v35; // [rsp+88h] [rbp-51h]
  __int64 v36; // [rsp+90h] [rbp-49h]
  struct _RECTL v37; // [rsp+98h] [rbp-41h] BYREF
  struct _RECTL v38; // [rsp+B0h] [rbp-29h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v37 = 0LL;
  v36 = v2;
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 40LL) & 0x400) == 0 )
  {
    v4 = (struct _RECTL *)((char *)a1 + 80);
    v5 = cSpSubtract((const struct _RECTL *)a1 + 5, a2, &v38);
    v6 = v5;
    v30 = v5;
    if ( v5 )
    {
      v7 = 0;
      v25 = 0;
      StartingIndex = 0;
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v2, v4, &StartingIndex);
      if ( Composite )
      {
        if ( *(_QWORD *)(v2 + 1040) )
        {
          v29 = 0LL;
          if ( (_DWORD)v6 )
          {
            v9 = &v38;
            v10 = (unsigned int)v6;
            do
            {
              vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, &v29, v9++, 0LL, 1);
              --v10;
            }
            while ( v10 );
            v7 = 0;
          }
        }
        v28.x = -v4->left;
        v28.y = -*((_DWORD *)a1 + 21);
        v11 = pSpFindInZ(*(struct SPRITE **)(v2 + 8), v4);
        if ( v11 )
        {
          v12 = (struct _RECTL *)((char *)a1 + 80);
          do
          {
            if ( v11 != a1 && (_DWORD)v6 )
            {
              v13 = &v38;
              v14 = (unsigned int)v6;
              v15 = (const struct _RECTL *)((char *)v11 + 80);
              v29 = (struct _POINTL)&v38;
              v6 = (unsigned int)v6;
              v32 = (unsigned int)v6;
              do
              {
                if ( bIntersect(v13, v15, &v37) )
                {
                  if ( !v7 )
                  {
                    v31 = v6;
                    v26 = &v38;
                    do
                    {
                      v16 = *((_QWORD *)a1 + 20);
                      v17 = 0LL;
                      if ( v16 )
                      {
                        v18 = *(_DWORD *)(v16 + 88);
                        if ( ((v18 & 0x4000) != 0 || v18 < 0) && (v18 & 0x200) == 0 )
                        {
                          v17 = v16 - 24;
                          GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v16 + 24));
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
                        &v28,
                        Composite,
                        (struct _POINTL *)a1 + 21,
                        *((struct _SURFOBJ **)a1 + 20),
                        0LL,
                        0LL,
                        v26,
                        (struct _POINTL *)v26);
                      if ( p_pvScan0 )
                        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
                      if ( v17 )
                        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v17 + 48));
                      ++v26;
                      --v31;
                    }
                    while ( v31 );
                    v13 = (const struct _RECTL *)v29;
                    v7 = 1;
                    v6 = v32;
                  }
                  vSpComposite(v11, &v28, Composite, &v37);
                }
                ++v13;
                v15 = (const struct _RECTL *)((char *)v11 + 80);
                v29 = (struct _POINTL)v13;
                --v14;
              }
              while ( v14 );
              v6 = v30;
              v12 = (struct _RECTL *)((char *)a1 + 80);
              v25 = v7;
            }
            SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v11 + 248));
            v11 = pSpFindInZ(*((struct SPRITE **)v11 + 3), v12);
          }
          while ( v11 );
          v2 = v36;
        }
        v21 = 0LL;
        v33 = 0LL;
        v34 = 0;
        if ( *((_QWORD *)a1 + 9) )
        {
          v33 = a1;
          v35 = &v38;
          v21 = a1;
          v34 = v6;
          UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v33);
        }
        if ( (_DWORD)v6 )
        {
          v22 = &v38;
          do
          {
            if ( v25 )
            {
              v23 = &v28;
              v24 = Composite;
            }
            else
            {
              v24 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
              v23 = (struct _POINTL *)((char *)a1 + 168);
            }
            vSpWriteToScreen((struct _SPRITESTATE *)v2, v23, v24, v22++);
            --v6;
          }
          while ( v6 );
        }
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          if ( v2 != -696 )
            GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v2 + 696));
          RtlClearBits((PRTL_BITMAP)(v2 + 672), StartingIndex, 1u);
          if ( v2 != -696 )
            GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v2 + 696));
        }
        if ( v21 )
          UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v33);
      }
    }
  }
}
