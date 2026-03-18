/*
 * XREFs of AcquireMagInputLock @ 0x1C000D61C
 * Callers:
 *     MagpInverseMagnificationTransformFromPoint @ 0x1C000D5D4 (MagpInverseMagnificationTransformFromPoint.c)
 *     _SetMagnificationInputTransform @ 0x1C00EFCE8 (_SetMagnificationInputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01C3270 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01C3680 (TransformForInputMagnification.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01CF6B4 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01E80FC (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
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
