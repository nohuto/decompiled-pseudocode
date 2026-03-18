/*
 * XREFs of ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1C0012968
 * Callers:
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C000B4CC (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C000C544 (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C000C7BC (GreSfmCloseCompositorRef.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C000D620 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0012720 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GrepSfmRemoveSurfaces @ 0x1C0131CF0 (GrepSfmRemoveSurfaces.c)
 * Callees:
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0012900 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025FF84 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(__int64 a1, HLSURF a2)
{
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>();
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)a1, a2);
  return a1;
}
