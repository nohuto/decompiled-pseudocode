/*
 * XREFs of UserValidateAndAttachQueueToInputWindowApiExt @ 0x14013E430
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x14013E448 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 */

__int64 __fastcall UserValidateAndAttachQueueToInputWindowApiExt(HWND a1, struct IInputQueue *a2)
{
  return ValidateAndAttachQueueToInputWindow(a1, a2);
}
