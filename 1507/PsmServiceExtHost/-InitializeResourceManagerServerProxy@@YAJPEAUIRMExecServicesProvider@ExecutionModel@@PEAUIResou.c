/*
 * XREFs of ?InitializeResourceManagerServerProxy@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAUIResourceManager@2@PEAPEAVResourceManagerServerProxy@@@Z @ 0x180020C64
 * Callers:
 *     PsmInitializeServiceExtension3 @ 0x180022550 (PsmInitializeServiceExtension3.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0ResourceManagerServerProxy@@QEAA@XZ @ 0x180020DC4 (--0ResourceManagerServerProxy@@QEAA@XZ.c)
 */

__int64 __fastcall InitializeResourceManagerServerProxy(
        struct IUnknown *a1,
        struct IUnknown *a2,
        struct IUnknown ***a3)
{
  unsigned int v3; // ebx
  ResourceManagerServerProxy *v7; // rax
  struct IUnknown **v8; // rdi

  v3 = 0;
  if ( a3 )
  {
    v7 = (ResourceManagerServerProxy *)malloc(0x70uLL);
    if ( v7 )
      v8 = (struct IUnknown **)ResourceManagerServerProxy::ResourceManagerServerProxy(v7);
    else
      v8 = 0LL;
    if ( v8 )
    {
      if ( v8[7] != a2 )
        ATL::AtlComPtrAssign(v8 + 7, a2);
      if ( v8[8] != a1 )
        ATL::AtlComPtrAssign(v8 + 8, a1);
      *a3 = v8;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
