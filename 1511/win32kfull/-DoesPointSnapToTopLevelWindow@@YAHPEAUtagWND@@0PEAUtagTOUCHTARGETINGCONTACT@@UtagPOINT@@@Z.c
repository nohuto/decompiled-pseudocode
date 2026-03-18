/*
 * XREFs of ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C022B0CC
 * Callers:
 *     ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C022B1F4 (-SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z.c)
 * Callees:
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C022AEF4 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C022BDBC (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall DoesPointSnapToTopLevelWindow(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagTOUCHTARGETINGCONTACT *a3,
        struct tagPOINT a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a1 && (unsigned int)CanPointStartResize(a1, a3, a4) )
    return (unsigned int)TouchTargetingIsSpecialTarget(a1, a2) != 0;
  return v4;
}
