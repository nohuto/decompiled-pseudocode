/*
 * XREFs of ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x180079588
 * Callers:
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x180079678 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180022088 (--0CVisual@@IEAA@XZ.c)
 */

CImmersiveWindowIconic *__fastcall CImmersiveWindowIconic::CImmersiveWindowIconic(CImmersiveWindowIconic *this)
{
  __int64 v1; // rcx
  CImmersiveWindowIconic *result; // rax

  CVisual::CVisual(this);
  *(_DWORD *)(v1 + 300) = 100;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_BYTE *)(v1 + 304) = 0;
  result = (CImmersiveWindowIconic *)v1;
  *(_QWORD *)v1 = &CImmersiveWindowIconic::`vftable';
  return result;
}
