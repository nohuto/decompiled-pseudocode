/*
 * XREFs of ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ @ 0x18006F828
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18006F794 (-GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18006A454 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CDisplayManager::EnsureDXGIEnumeration(struct CDXGIEnumeration **this)
{
  unsigned int v2; // edi
  CD3DModuleLoaderInternal *v3; // rcx
  int D3DObjects; // [rsp+40h] [rbp+8h] BYREF
  CDisplayManager *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = (CDisplayManager *)this;
  v2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ( !this[9] )
  {
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v3, this + 9);
    TranslateDXGIorD3DErrorInContext((unsigned int)D3DObjects, 6LL, &D3DObjects);
    v2 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, D3DObjects, 0x109u);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  return v2;
}
