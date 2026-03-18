/*
 * XREFs of ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0288DD0
 * Callers:
 *     ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0288210 (-PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x1C0288850 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00E16C8 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C02879B0 (--1PANSURFLOCK@@QEAA@XZ.c)
 *     ?vFilteredShrink2x32bpp@@YAXPEAU_SURFOBJ@@0PEAVECLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0289840 (-vFilteredShrink2x32bpp@@YAXPEAU_SURFOBJ@@0PEAVECLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0289C48 (-vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C028A294 (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

void __fastcall PanSynchronize(struct DHPDEV__ *a1, struct _RECTL *a2)
{
  __int64 v2; // r8
  bool v4; // zf
  struct _RECTL *v6; // rdx
  struct REGION *v7; // rdx
  __int64 v8; // rax
  struct _SURFOBJ *v9; // rdx
  __int64 v10; // rdi
  struct _SURFOBJ *v11; // rsi
  struct _SURFOBJ *v12; // rcx
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  HSEMAPHORE v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+50h] [rbp-B0h]
  int v16; // [rsp+54h] [rbp-ACh]
  struct _RECTL v17; // [rsp+58h] [rbp-A8h] BYREF
  struct _CLIPOBJ v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+C0h] [rbp-40h]
  int v21; // [rsp+C8h] [rbp-38h]
  int v22; // [rsp+F0h] [rbp-10h]
  __int64 v23; // [rsp+100h] [rbp+0h]
  __int128 v24; // [rsp+110h] [rbp+10h] BYREF
  struct DHPDEV__ *v25; // [rsp+120h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 8);
  v25 = a1;
  v4 = a2 == 0LL;
  v14 = 0LL;
  v6 = (struct _RECTL *)&v14;
  if ( !v4 )
    v6 = a2;
  v15 = *(_DWORD *)(v2 + 32);
  v16 = *(_DWORD *)(v2 + 36);
  v24 = 0LL;
  PANSURFLOCK::vLockShadow((PANSURFLOCK *)&v24, v6, 0LL, 1);
  v14 = (HSEMAPHORE)*((_QWORD *)a1 + 15);
  EngAcquireSemaphore(v14);
  if ( *((_DWORD *)a1 + 28) )
  {
    v7 = (struct REGION *)*((_QWORD *)a1 + 11);
    v20 = 0LL;
    v21 = 0;
    v22 = 1;
    v23 = 0LL;
    v19 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&v18, v7, (struct ERECTL *)(a1 + 4), 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v18.rclBounds) )
    {
      CLIPOBJ_vOffset(&v18, -*((_DWORD *)a1 + 4), -*((_DWORD *)a1 + 5));
      *(_QWORD *)(*((_QWORD *)a1 + 9) + 16LL) = *((_QWORD *)a1 + 4);
      v8 = SURFOBJ_TO_SURFACE(*((_QWORD *)a1 + 9));
      v9 = (struct _SURFOBJ *)*((_QWORD *)a1 + 8);
      v10 = v8;
      *(_QWORD *)&v17.left = 0LL;
      v11 = v9;
      v17.right = *(_DWORD *)(v8 + 56);
      v17.bottom = *(_DWORD *)(v8 + 60);
      v12 = (struct _SURFOBJ *)*((_QWORD *)a1 + 10);
      if ( v12 )
      {
        if ( *(_WORD *)(v8 + 100) )
        {
          v11 = (struct _SURFOBJ *)*((_QWORD *)a1 + 10);
        }
        else
        {
          v12 = (struct _SURFOBJ *)(v8 + 24);
          v11 = 0LL;
        }
        vFilteredShrink2x32bpp(v12, v9, (struct ECLIPOBJ *)&v18, &v17);
      }
      if ( v11 )
      {
        if ( (*(_DWORD *)(v10 + 112) & 0x400) != 0 )
          (*((void (__fastcall **)(__int64, struct _SURFOBJ *, struct _CLIPOBJ *, _QWORD, struct _RECTL *, struct DHPDEV__ *))a1
           + 119))(
            v10 + 24,
            v11,
            &v18,
            0LL,
            &v17,
            a1 + 4);
        else
          ((void (__fastcall *)(__int64, struct _SURFOBJ *, struct _CLIPOBJ *, _QWORD, struct _RECTL *, struct DHPDEV__ *))EngCopyBits)(
            v10 + 24,
            v11,
            &v18,
            0LL,
            &v17,
            a1 + 4);
      }
    }
    v13 = *((_QWORD *)a1 + 11);
    *((_DWORD *)a1 + 28) = 0;
    RGNOBJ::vSet((RGNOBJ *)&v13);
  }
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v14);
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)&v24);
}
