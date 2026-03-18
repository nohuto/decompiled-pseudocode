/*
 * XREFs of IsWin32FreePoolImplSupported_0 @ 0x1C0002C18
 * Callers:
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0018460 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     HMFreeObject @ 0x1C0038B10 (HMFreeObject.c)
 *     FreeThreadBufferWithTag @ 0x1C006EA90 (FreeThreadBufferWithTag.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsWin32FreePoolImplSupported_0()
{
  return IsWin32FreePoolImplSupported();
}
