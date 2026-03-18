/*
 * XREFs of AcquireMagInputLock @ 0x1C0009F50
 * Callers:
 *     MagpInverseMagnificationTransformFromPoint @ 0x1C0009F08 (MagpInverseMagnificationTransformFromPoint.c)
 *     ?GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C0088738 (-GetMouseCoord@@YAXJJKJ_KPEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     _SetMagnificationInputTransform @ 0x1C00D3DDC (_SetMagnificationInputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01C3A20 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01C43D0 (TransformForInputMagnification.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01F1E74 (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

signed __int64 AcquireMagInputLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    result = _InterlockedCompareExchange64(&gpMagInputLock, (signed __int64)CurrentThread, 0LL);
    if ( !result )
      break;
    UserSleep(1LL);
  }
  return result;
}
