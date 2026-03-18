/*
 * XREFs of ?SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C001F680
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00106E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::SetIntegerProperty(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  int v6; // esi
  struct CompositionSurfaceObject *v7; // rdi
  struct CompositionSurfaceObject *v8; // rcx
  struct CompositionSurfaceObject *v10; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( (a3 != 0LL) != *((_BYTE *)this + 48) )
      {
        *((_BYTE *)this + 48) = a3 != 0LL;
        *a4 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v10 = 0LL;
    v7 = 0LL;
    if ( a3 )
    {
      v6 = CompositionSurfaceObject::ResolveHandle(a3, 1LL, (__int64)a3, &v10);
      if ( v6 < 0 )
        return (unsigned int)v6;
      v7 = v10;
    }
    v8 = (struct CompositionSurfaceObject *)*((_QWORD *)this + 5);
    if ( v7 == v8 )
    {
      if ( v7 )
        ObfDereferenceObject(v7);
    }
    else
    {
      if ( v8 )
        ObfDereferenceObject(v8);
      *((_QWORD *)this + 5) = v7;
      *a4 = 1;
    }
  }
  return (unsigned int)v6;
}
