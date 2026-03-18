/*
 * XREFs of ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C001E8A4
 * Callers:
 *     DxgkFlipOverlay @ 0x1C0143850 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0143B90 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0143F70 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0001E30 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 */

COREOVERLAYACCESS *__fastcall COREOVERLAYACCESS::COREOVERLAYACCESS(
        COREOVERLAYACCESS *this,
        struct DXGOVERLAY *const a2)
{
  COREACCESS::COREACCESS(
    (COREOVERLAYACCESS *)((char *)this + 8),
    *(struct DXGADAPTER *const *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL));
  *((_QWORD *)this + 4) = a2;
  return this;
}
