/*
 * XREFs of ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C00518AC
 * Callers:
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C00D72A4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C025DB7C (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0050EE0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00534D8 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0053714 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bSpDwmUpdateSpriteShape(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct _SURFOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        unsigned int *a7,
        struct _RECTL *a8,
        struct SFMLOGICALSURFACE **a9)
{
  unsigned int v13; // ebx
  LONG left; // ecx
  int top; // edx
  LONG right; // r9d
  LONG bottom; // r10d
  struct SFMLOGICALSURFACE *v18; // rdi
  struct _SURFOBJ *v19; // rdx
  int v20; // r9d
  int v21; // r8d
  __int64 v22; // r10
  XLATEOBJ *v23; // r15
  unsigned int inited; // eax
  BOOL (__stdcall *v25)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  struct tagSIZE v27; // [rsp+60h] [rbp-49h] BYREF
  int v28; // [rsp+68h] [rbp-41h] BYREF
  LONG v29; // [rsp+6Ch] [rbp-3Dh]
  HDEV v30; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v31[2]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD v32[2]; // [rsp+88h] [rbp-21h] BYREF
  struct tagRECT v33; // [rsp+98h] [rbp-11h] BYREF

  v30 = a1;
  v13 = 1;
  if ( a4 )
  {
    left = a5->left;
    if ( a5->left >= 0 )
    {
      top = a5->top;
      if ( top >= 0 )
      {
        right = a5->right;
        if ( right <= a4->sizlBitmap.cx )
        {
          bottom = a5->bottom;
          if ( bottom <= a4->sizlBitmap.cy && top <= bottom && left <= right )
          {
            v32[0] = 0LL;
            v33.left = left;
            v27.cx = right - left;
            v33.top = top;
            v33.right = right;
            v27.cy = bottom - top;
            v33.bottom = bottom;
            SURFREFVIEW::bMap((SURFREFVIEW *)v32, a4);
            if ( v32[0] )
            {
              v13 = bSpDwmCreateLogicalSurface(a1, a2, a3, &v27, a9);
              if ( v13 )
              {
                v18 = *a9;
                v19 = (struct _SURFOBJ *)*((_QWORD *)*a9 + 24);
                v31[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v31, v19);
                if ( v31[0] )
                {
                  v33.right -= v33.left;
                  v33.bottom -= v33.top;
                  v28 = v33.left;
                  v29 = v33.top;
                  *(_QWORD *)&v33.left = 0LL;
                  if ( a8 )
                  {
                    ERECTL::operator*=(&v33, a8);
                    v29 = v33.top + v20;
                    v28 = v33.left + v21;
                  }
                  if ( !ERECTL::bEmpty((ERECTL *)&v33) )
                  {
                    v23 = xloIdent;
                    v27 = (struct tagSIZE)v22;
                    if ( a6 )
                    {
                      inited = EXLATEOBJ::bInitXlateObj(
                                 (__int64 *)&v27,
                                 0LL,
                                 0,
                                 (__int64)a6,
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 v22,
                                 v22,
                                 v22,
                                 v22);
                      v23 = (XLATEOBJ *)v27;
                      v13 = inited;
                    }
                    if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v30) )
                    {
                      v25 = RedirCopyBits;
                    }
                    else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v18 + 24)) + 112) & 0x400) != 0 )
                    {
                      v25 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a1 + 358);
                    }
                    else
                    {
                      v25 = EngCopyBits;
                    }
                    if ( v13 )
                    {
                      v13 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, int *))v25)(
                              *((_QWORD *)v18 + 24),
                              a4,
                              0LL,
                              v23,
                              &v33,
                              &v28);
                      if ( v13 )
                      {
                        vSpUpdateDirtyRgn((struct _POINTL *)a2, v18, 0LL, (struct _RECTL *)&v33, a7, 0);
                        vSpUpdateDirtyRgn((struct _POINTL *)a2, v18, 0LL, (struct _RECTL *)&v33, a7, 0);
                      }
                    }
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v27);
                  }
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
              }
            }
            SURFREFVIEW::bUnMap((SURFREFVIEW *)v32);
          }
        }
      }
    }
  }
  return v13;
}
