/*
 * XREFs of AcquireMagInputLock @ 0x1C0008428
 * Callers:
 *     MagpInverseMagnificationTransformFromPoint @ 0x1C00083E0 (MagpInverseMagnificationTransformFromPoint.c)
 *     _SetMagnificationInputTransform @ 0x1C012C34C (_SetMagnificationInputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01C1E60 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01C2810 (TransformForInputMagnification.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01D6BB0 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01F1CBC (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
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
