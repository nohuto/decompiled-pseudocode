/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0011BF0
 * Callers:
 *     DxgkFlipOverlay @ 0x1C016DF10 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C016E260 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C016E650 (DxgkUpdateOverlay.c)
 * Callees:
 *     <none>
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8));
}
