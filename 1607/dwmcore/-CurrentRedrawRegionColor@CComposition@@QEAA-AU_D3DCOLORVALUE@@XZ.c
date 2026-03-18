/*
 * XREFs of ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x180116A08
 * Callers:
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180124FC0 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
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
  if ( v2 != *((_QWORD *)this + 152) )
  {
    *((_QWORD *)this + 152) = v2;
    *((_DWORD *)this + 302) = ((unsigned __int8)*((_DWORD *)this + 302) + 1) & 3;
  }
  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)((char *)this
                                                                  + 16 * *((unsigned int *)this + 302)
                                                                  + 1144);
  return result;
}
