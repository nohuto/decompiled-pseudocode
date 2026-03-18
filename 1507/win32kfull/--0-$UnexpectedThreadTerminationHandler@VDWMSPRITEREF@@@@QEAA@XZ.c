/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025FF84
 * Callers:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0010330 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00103B8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1C0010410 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0012928 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1C0012968 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     ??0DWMSPRITEREF@@QEAA@XZ @ 0x1C025FFEC (--0DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0260008 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void *__fastcall UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(
        void *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(a1, a1, UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
