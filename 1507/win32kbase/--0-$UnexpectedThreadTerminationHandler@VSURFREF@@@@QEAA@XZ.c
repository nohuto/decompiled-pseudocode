/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00AEEB0
 * Callers:
 *     EngUnlockSurface @ 0x1C0008310 (EngUnlockSurface.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C003A938 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00B0AD0 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00B38A0 (--0SURFREF@@QEAA@XZ.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00BE150 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF450 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C001CA70 (PushThreadGuardedObject.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

void *__fastcall UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(void *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(
    (__int64 *)a1,
    (__int64)a1,
    (__int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
