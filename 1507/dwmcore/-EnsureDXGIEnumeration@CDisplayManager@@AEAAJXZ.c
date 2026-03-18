/*
 * XREFs of ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ @ 0x180054BCC
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800545A4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180054B38 (-GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18009679C (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 */

__int64 __fastcall CDisplayManager::EnsureDXGIEnumeration(CDisplayManager *this)
{
  unsigned int v2; // edi
  CD3DModuleLoaderInternal *v3; // rcx
  int D3DObjects; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)this;
  v2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ( !*((_QWORD *)this + 9) )
  {
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v3, (struct CDXGIEnumeration **)this + 9);
    TranslateDXGIorD3DErrorInContext(D3DObjects, 6, &D3DObjects);
    v2 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016AE4C, 1u, D3DObjects, 0x109u);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  return v2;
}
