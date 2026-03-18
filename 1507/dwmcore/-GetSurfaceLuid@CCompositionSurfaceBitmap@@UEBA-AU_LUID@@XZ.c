/*
 * XREFs of ?GetSurfaceLuid@CCompositionSurfaceBitmap@@UEBA?AU_LUID@@XZ @ 0x18009A8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CCompositionSurfaceBitmap::GetSurfaceLuid(CCompositionSurfaceBitmap *this, _QWORD *a2)
{
  struct _LUID result; // rax

  result = (struct _LUID)a2;
  *a2 = *(_QWORD *)(*((_QWORD *)this + 49) + 40LL);
  return result;
}
