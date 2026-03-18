/*
 * XREFs of ?SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0048D80
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::SetIntegerProperty(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        void *a4,
        bool *a5)
{
  int v6; // esi
  struct CompositionSurfaceObject *v7; // rdi
  struct CompositionSurfaceObject *v8; // rcx
  struct CompositionSurfaceObject *v10; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 != 1 )
      return (unsigned int)-1073741811;
    if ( (a4 != 0LL) != *((_BYTE *)this + 48) )
    {
      *((_BYTE *)this + 48) = a4 != 0LL;
LABEL_9:
      *a5 = 1;
    }
  }
  else
  {
    v10 = 0LL;
    v7 = 0LL;
    if ( a4 )
    {
      v6 = CompositionSurfaceObject::ResolveHandle(a4, 1LL, a3, &v10);
      if ( v6 < 0 )
        return (unsigned int)v6;
      v7 = v10;
    }
    v8 = (struct CompositionSurfaceObject *)*((_QWORD *)this + 5);
    if ( v7 != v8 )
    {
      if ( v8 )
        ObfDereferenceObject(v8);
      *((_QWORD *)this + 5) = v7;
      goto LABEL_9;
    }
    if ( v7 )
      ObfDereferenceObject(v7);
  }
  return (unsigned int)v6;
}
