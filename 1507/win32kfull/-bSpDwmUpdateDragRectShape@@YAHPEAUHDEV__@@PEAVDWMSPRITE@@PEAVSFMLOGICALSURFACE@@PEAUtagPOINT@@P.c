/*
 * XREFs of ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026166C
 * Callers:
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00111C4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00111E4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C001A6C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bSpDwmUpdateDragRectShape(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct tagPOINT *a4,
        struct tagSIZE *a5,
        unsigned int *a6,
        struct SFMLOGICALSURFACE **a7)
{
  unsigned int LogicalSurface; // ebx
  struct SFMLOGICALSURFACE *v10; // rsi
  struct _SURFOBJ *v11; // rbx
  BOOL (__stdcall *v12)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v13; // rdx
  __m128i si128; // xmm0
  LONG cx; // eax
  __int64 v16; // rcx
  _QWORD v18[2]; // [rsp+60h] [rbp-21h] BYREF
  HDEV v19; // [rsp+70h] [rbp-11h] BYREF
  struct tagRECT v20; // [rsp+78h] [rbp-9h] BYREF
  __m128i v21; // [rsp+88h] [rbp+7h] BYREF

  v19 = a1;
  LogicalSurface = bSpDwmCreateLogicalSurface(a1, a2, a3, a5, a7);
  if ( LogicalSurface )
  {
    v10 = *a7;
    v11 = (struct _SURFOBJ *)*((_QWORD *)*a7 + 24);
    v18[0] = 0LL;
    SURFREFVIEW::bMap((SURFREFVIEW *)v18, v11);
    if ( v18[0] )
    {
      *((_DWORD *)a2 + 34) |= 4u;
      if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v19) )
      {
        v12 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))RedirStretchBlt;
      }
      else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 2) != 0 )
      {
        v12 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)a1 + 360);
      }
      else
      {
        v12 = EngStretchBlt;
      }
      v13 = *((_QWORD *)a1 + 141);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      **(_DWORD **)(v13 + 56) = -1;
      cx = a5->cx;
      v16 = *((_QWORD *)v10 + 24);
      v20.left = 0;
      v20.top = 0;
      v20.right = cx;
      v20.bottom = a5->cy;
      v21 = si128;
      LogicalSurface = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, struct tagRECT *, __m128i *, _QWORD, int))v12)(
                         v16,
                         v13,
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         0LL,
                         &v20,
                         &v21,
                         0LL,
                         1);
      if ( LogicalSurface )
        vSpUpdateDirtyRgn(a2, v10, 0LL, (struct _RECTL *)&v20, a6, 0);
    }
    else
    {
      LogicalSurface = 0;
    }
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v18);
  }
  return LogicalSurface;
}
