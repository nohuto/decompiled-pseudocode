/*
 * XREFs of ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1403179A8
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x140166C04 (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1401670B8 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1401683A8 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x140296C88 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140317190 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vSpSmallUnderlayCopy(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        struct _RECTL *a9)
{
  struct _SPRITESTATE *v9; // r12
  __int64 v12; // rax
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  PVOID *v15; // rbx
  int v16; // eax
  struct _POINTL *v17; // rsi
  struct _RECTL *v18; // rdi
  int v19; // r13d
  int v20; // ebx
  struct SPRITE *i; // rcx
  int v22; // r15d
  PVOID *v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // eax
  struct SPRITE *v28; // rax
  struct SPRITE *v29; // rsi
  struct _POINTL v31; // [rsp+50h] [rbp-91h] BYREF
  int v32; // [rsp+58h] [rbp-89h]
  int v33; // [rsp+5Ch] [rbp-85h]
  struct SPRITE *v34; // [rsp+60h] [rbp-81h]
  struct _RECTL v35; // [rsp+68h] [rbp-79h] BYREF
  struct _RECTL v36; // [rsp+78h] [rbp-69h] BYREF
  struct _RECTL v37[4]; // [rsp+90h] [rbp-51h] BYREF

  v9 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v35 = 0LL;
  v36 = 0LL;
  v12 = *(_QWORD *)v9;
  v34 = a1;
  if ( (*(_DWORD *)(v12 + 40) & 0x400) == 0 )
  {
    if ( bIntersect(a9, a8, &v35) )
    {
      p_pvScan0 = 0LL;
      v31.x = a6 + v35.left;
      v32 = a6 + v35.right;
      v31.y = a7 + v35.top;
      v33 = a7 + v35.bottom;
      if ( a3 )
      {
        hsurf = (int)a3[1].hsurf;
        if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &a3[-1].pvScan0;
          GreAcquireSemaphore<8,PDEVOBJ>((__int64)a3->hdev);
        }
      }
      v15 = 0LL;
      if ( a5 )
      {
        v16 = (int)a5[1].hsurf;
        if ( ((v16 & 0x4000) != 0 || v16 < 0) && (v16 & 0x200) == 0 )
        {
          v15 = &a5[-1].pvScan0;
          GreAcquireSemaphore<8,PDEVOBJ>((__int64)a5->hdev);
        }
      }
      v17 = a2;
      INVOKEOFFCOPYBITS(a2, a3, a4, a5, 0LL, 0LL, &v35, &v31);
      if ( v15 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v15[6]);
      if ( p_pvScan0 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
    }
    else
    {
      v17 = a2;
    }
    v18 = a8;
    v19 = cSpSubtract(a8, a9, v37);
    v20 = 0;
    do
      vSpReadFromScreen(v9, v17, a3, &v37[v20++]);
    while ( v20 != v19 );
    for ( i = (struct SPRITE *)*((_QWORD *)v9 + 1); ; i = (struct SPRITE *)*((_QWORD *)v29 + 3) )
    {
      v28 = pSpFindInZ(i, v18);
      v29 = v28;
      if ( !v28 )
        break;
      if ( v28 != v34 )
      {
        v22 = 0;
        do
        {
          if ( bIntersect(&v37[v22], (const struct _RECTL *)v29 + 5, &v36) )
          {
            v23 = 0LL;
            if ( a3 )
            {
              v24 = (int)a3[1].hsurf;
              if ( ((v24 & 0x4000) != 0 || v24 < 0) && (v24 & 0x200) == 0 )
              {
                v23 = &a3[-1].pvScan0;
                GreAcquireSemaphore<8,PDEVOBJ>((__int64)a3->hdev);
              }
            }
            v25 = *((_QWORD *)v29 + 20);
            v26 = 0LL;
            if ( v25 )
            {
              v27 = *(_DWORD *)(v25 + 88);
              if ( ((v27 & 0x4000) != 0 || v27 < 0) && (v27 & 0x200) == 0 )
              {
                v26 = v25 - 24;
                GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v25 + 24));
              }
            }
            INVOKEOFFCOPYBITS(
              a2,
              a3,
              (struct _POINTL *)v29 + 21,
              *((struct _SURFOBJ **)v29 + 20),
              0LL,
              0LL,
              &v36,
              (struct _POINTL *)&v36);
            if ( v26 )
              GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v26 + 48));
            if ( v23 )
              GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v23[6]);
          }
          ++v22;
        }
        while ( v22 != v19 );
        v18 = a8;
      }
      SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v29 + 248));
    }
  }
}
