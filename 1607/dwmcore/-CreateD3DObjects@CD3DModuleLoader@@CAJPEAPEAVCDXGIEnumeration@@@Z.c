/*
 * XREFs of ?CreateD3DObjects@CD3DModuleLoader@@CAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800B6DA4
 * Callers:
 *     ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800386BC (-GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z @ 0x180038744 (-UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800B6DD4 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 */

__int64 __fastcall CD3DModuleLoader::CreateD3DObjects(struct CDXGIEnumeration **a1)
{
  unsigned int D3DObjects; // [rsp+38h] [rbp+10h] BYREF

  D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects((CD3DModuleLoaderInternal *)a1, a1);
  TranslateDXGIorD3DErrorInContext(D3DObjects, 5, (int *)&D3DObjects);
  return D3DObjects;
}
