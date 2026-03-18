/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160
 * Callers:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0005D58 (GreBeginGdiRenderingToDxSurface.c)
 *     GreGetCharSet @ 0x1C0023BD8 (GreGetCharSet.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     GreExtTextOutRect @ 0x1C0039588 (GreExtTextOutRect.c)
 *     GreExtTextOutWInternal @ 0x1C00399F8 (GreExtTextOutWInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0049F00 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     GreRectVisible @ 0x1C004C688 (GreRectVisible.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreGetLayout @ 0x1C005D99C (GreGetLayout.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetAppClipBox @ 0x1C00FA434 (GreGetAppClipBox.c)
 *     GreTransformPoints @ 0x1C00FB364 (GreTransformPoints.c)
 *     NtGdiModifyWorldTransform @ 0x1C0109040 (NtGdiModifyWorldTransform.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

char *__fastcall UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(char *a1)
{
  char *v2; // rdx

  memset(a1, 0, 0x20uLL);
  v2 = 0LL;
  if ( a1 )
    v2 = a1 - 16;
  PushThreadGuardedObject(
    a1,
    v2,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
