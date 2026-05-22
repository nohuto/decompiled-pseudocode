/*
 * XREFs of ?DeliverInput@DWMFocusedInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18001D1B0
 * Callers:
 *     ?DeliverInput@DWMFocusedInputTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x18001D9A0 (-DeliverInput@DWMFocusedInputTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMFocusedInputTarget@@WBA@EAAJPEAUInputInfo@@@Z @ 0x18001D9E0 (-DeliverInput@DWMFocusedInputTarget@@WBA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::DeliverInput(DWMFocusedInputTarget *this, struct InputInfo *a2)
{
  *((_QWORD *)a2 + 86) = *((_QWORD *)this + 9);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6));
}
