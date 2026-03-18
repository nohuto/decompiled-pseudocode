/*
 * XREFs of ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x1800E28F8
 * Callers:
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800F4C14 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CComposition::CurrentRedrawRegionColor(
        CComposition *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  __int64 v2; // rax
  struct _D3DCOLORVALUE *result; // rax

  v2 = *((_QWORD *)this + 44);
  if ( v2 != *((_QWORD *)this + 143) )
  {
    *((_QWORD *)this + 143) = v2;
    *((_DWORD *)this + 284) = ((unsigned __int8)*((_DWORD *)this + 284) + 1) & 3;
  }
  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *((struct _D3DCOLORVALUE *)this + *((unsigned int *)this + 284) + 67);
  return result;
}
