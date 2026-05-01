/*
 * XREFs of ?Initialize@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAVResourcePolicyEngineServerProxy@2@PEAXPEAPEAX@Z @ 0x180015D3C
 * Callers:
 *     ?CreateInstance@ResourceSetServerProxy@ExecutionModel@@SAJPEAVResourcePolicyEngineServerProxy@2@PEAXPEAPEAXPEAPEAV12@@Z @ 0x1800061B0 (-CreateInstance@ResourceSetServerProxy@ExecutionModel@@SAJPEAVResourcePolicyEngineServerProxy@2@.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetServerProxy::Initialize(
        struct IUnknown **this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        struct IUnknown **a4)
{
  unsigned int v4; // ebx
  struct IUnknown **v8; // rcx

  v4 = 0;
  if ( a3 && a2 )
  {
    v8 = this + 3;
    if ( *v8 != a2 )
      ATL::AtlComPtrAssign(v8, a2);
    if ( this[4] != a3 )
      ATL::AtlComPtrAssign(this + 4, a3);
    if ( a4 )
    {
      this[5] = *a4;
      *((_BYTE *)this + 48) = 1;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
