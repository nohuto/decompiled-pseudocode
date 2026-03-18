/*
 * XREFs of ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18006A454
 * Callers:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ @ 0x18006F828 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x18006A534 (-Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CD3DModuleLoaderInternal::CreateD3DObjects(
        CD3DModuleLoaderInternal *this,
        struct CDXGIEnumeration **a2)
{
  unsigned int v3; // edi
  int v4; // eax
  struct CDXGIEnumeration *v5; // rsi
  signed int LastError; // eax
  _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+8h] BYREF
  struct CDXGIEnumeration *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v8 = &stru_1801A3AB0;
  EnterCriticalSection(&stru_1801A3AB0);
  v3 = dword_1801A3AE0;
  if ( dword_1801A3AE0 == -2003292404 )
  {
    hLibModule = LoadLibraryW(L"d3d11.dll");
    if ( hLibModule )
    {
      dword_1801A3AE0 = 0;
      goto LABEL_3;
    }
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( (v3 & 0x80000000) == 0 )
      v3 = -2003304445;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xECu);
    OutputDebugStringW(L"WARNING: DWMCore: Direct3D 11 is not installed or load failed.\n");
    dword_1801A3AE0 = v3;
    if ( hLibModule )
    {
      FreeLibrary(hLibModule);
      hLibModule = 0LL;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, v3, 0x13Eu);
LABEL_18:
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
    return v3;
  }
  if ( dword_1801A3AE0 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, dword_1801A3AE0, 0x142u);
    goto LABEL_18;
  }
LABEL_3:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  v4 = CDXGIEnumeration::Create(&v9);
  v3 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, v4, 0x146u);
    v5 = v9;
  }
  else
  {
    *a2 = v9;
    v5 = 0LL;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v5 + 8LL))(v5);
  return v3;
}
