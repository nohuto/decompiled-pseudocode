/*
 * XREFs of ??0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C001EE70
 * Callers:
 *     ??0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C001C3B4 (--0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 *     ?CreateUnBindToken@CToken@@SAJPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C00F4B50 (-CreateUnBindToken@CToken@@SAJPEAUCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C001D5F0 (-AddRef@CompositionObject@@QEBAJXZ.c)
 */

CToken *__fastcall CToken::CToken(CToken *this, __int64 a2, struct CompositionSurfaceObject *a3)
{
  *((_DWORD *)this + 6) = 6;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 13) = 0;
  *(_QWORD *)this = &CToken::`vftable';
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 4) = a3;
  CompositionObject::AddRef(a3);
  return this;
}
