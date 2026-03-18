/*
 * XREFs of ?AttachToVisual@CoRenderHost@@UEAAJPEAXPEAPEAUIDWMCoRenderVisualProxy@@@Z @ 0x1800E7B40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateForControlledVisual@CCoRenderVisualProxy@@SAJPEAXPEAPEAV1@@Z @ 0x1800F5458 (-CreateForControlledVisual@CCoRenderVisualProxy@@SAJPEAXPEAPEAV1@@Z.c)
 */

__int64 __fastcall CoRenderHost::AttachToVisual(CoRenderHost *this, void *a2, struct IDWMCoRenderVisualProxy **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct CCoRenderVisualProxy *v7; // [rsp+58h] [rbp+20h] BYREF

  v4 = CCoRenderVisualProxy::CreateForControlledVisual(a2, &v7);
  v5 = v4;
  if ( v4 >= 0 )
    *a3 = v7;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x183u);
  return v5;
}
