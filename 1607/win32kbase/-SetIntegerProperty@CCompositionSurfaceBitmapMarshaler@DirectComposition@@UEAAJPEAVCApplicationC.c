/*
 * XREFs of ?SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00773E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C004862C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::SetIntegerProperty(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        void *a4,
        bool *a5)
{
  int v6; // ebp
  int v7; // r8d
  struct CompositionSurfaceObject *v8; // rdi
  struct CompositionSurfaceObject *v9; // rcx
  struct CompositionSurfaceObject *v11; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  if ( (_DWORD)a3 )
  {
    v7 = a3 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return (unsigned int)-1073741811;
      if ( (a4 != 0LL) != *((_BYTE *)this + 49) )
      {
        *((_BYTE *)this + 49) = a4 != 0LL;
        goto LABEL_12;
      }
    }
    else if ( (a4 != 0LL) != *((_BYTE *)this + 48) )
    {
      *((_BYTE *)this + 48) = a4 != 0LL;
LABEL_12:
      *a5 = 1;
    }
  }
  else
  {
    v11 = 0LL;
    v8 = 0LL;
    if ( a4 )
    {
      v6 = CompositionSurfaceObject::ResolveHandle(a4, 1LL, a3, &v11);
      if ( v6 < 0 )
        return (unsigned int)v6;
      v8 = v11;
    }
    v9 = (struct CompositionSurfaceObject *)*((_QWORD *)this + 5);
    if ( v8 != v9 )
    {
      if ( v9 )
        ObfDereferenceObject(v9);
      *((_QWORD *)this + 5) = v8;
      goto LABEL_12;
    }
    if ( v8 )
      ObfDereferenceObject(v8);
  }
  return (unsigned int)v6;
}
