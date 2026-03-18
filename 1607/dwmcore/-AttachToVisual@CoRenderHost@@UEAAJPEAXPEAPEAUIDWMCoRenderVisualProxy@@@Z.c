/*
 * XREFs of ?AttachToVisual@CoRenderHost@@UEAAJPEAXPEAPEAUIDWMCoRenderVisualProxy@@@Z @ 0x180119CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateForControlledVisual@CCoRenderVisualProxy@@SAJPEAXPEAPEAV1@@Z @ 0x1801256A8 (-CreateForControlledVisual@CCoRenderVisualProxy@@SAJPEAXPEAPEAV1@@Z.c)
 */

__int64 __fastcall CoRenderHost::AttachToVisual(CoRenderHost *this, void *a2, struct IDWMCoRenderVisualProxy **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct CCoRenderVisualProxy *v7; // [rsp+58h] [rbp+20h] BYREF

  v4 = CCoRenderVisualProxy::CreateForControlledVisual(a2, &v7);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x183u);
  else
    *a3 = v7;
  return v5;
}
