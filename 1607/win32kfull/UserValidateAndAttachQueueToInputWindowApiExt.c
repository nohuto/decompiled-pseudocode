/*
 * XREFs of UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C0099D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall UserValidateAndAttachQueueToInputWindowApiExt(HWND a1, struct IInputQueue *a2, struct tagWND **a3)
{
  return ValidateAndAttachQueueToInputWindow(a1, a2, a3);
}
