/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0011B40
 * Callers:
 *     DxgkFlipOverlay @ 0x1C01491D0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0149510 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0149900 (DxgkUpdateOverlay.c)
 * Callees:
 *     <none>
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8));
}
