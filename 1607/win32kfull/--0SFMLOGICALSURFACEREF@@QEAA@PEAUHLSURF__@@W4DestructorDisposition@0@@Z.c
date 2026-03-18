/*
 * XREFs of ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1C0051874
 * Callers:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0052968 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0065268 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreSfmCloseCompositorRef @ 0x1C00665AC (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C0066C34 (GreSfmOpenCompositorRef.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C0122B44 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GrepSfmRemoveSurfaces @ 0x1C01336E0 (GrepSfmRemoveSurfaces.c)
 * Callees:
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C005180C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C025CF54 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(__int64 a1, HLSURF a2)
{
  UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(a1);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)a1, a2);
  return a1;
}
