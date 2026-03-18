/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C00103D0
 * Callers:
 *     DxgkFlipOverlay @ 0x1C0143850 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0143B90 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0143F70 (DxgkUpdateOverlay.c)
 * Callees:
 *     <none>
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8));
}
