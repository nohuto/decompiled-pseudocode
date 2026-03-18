/*
 * XREFs of ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800B6DD4
 * Callers:
 *     ?CreateD3DObjects@CD3DModuleLoader@@CAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800B6DA4 (-CreateD3DObjects@CD3DModuleLoader@@CAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x1800B6EA8 (-Create@CDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DModuleLoaderInternal::CreateD3DObjects(
        CD3DModuleLoaderInternal *this,
        struct CDXGIEnumeration **a2)
{
  struct CDXGIEnumeration *v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  signed int LastError; // eax
  struct CDXGIEnumeration *v8; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  v9 = &stru_1801EFD50;
  EnterCriticalSection(&stru_1801EFD50);
  v4 = dword_1801EFD80;
  if ( dword_1801EFD80 != -2003292404 )
  {
    if ( dword_1801EFD80 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801AD918, 1u, dword_1801EFD80, 0x142u);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
LABEL_17:
      if ( v2 )
        (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v2 + 8LL))(v2);
      return v4;
    }
LABEL_3:
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
    v5 = CDXGIEnumeration::Create(&v8);
    v4 = v5;
    if ( v5 >= 0 )
    {
      *a2 = v8;
      return v4;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801AD918, 1u, v5, 0x146u);
    v2 = v8;
    goto LABEL_17;
  }
  hLibModule = LoadLibraryW(L"d3d11.dll");
  if ( hLibModule )
  {
    dword_1801EFD80 = 0;
    goto LABEL_3;
  }
  LastError = GetLastError();
  v4 = LastError;
  if ( LastError > 0 )
    v4 = (unsigned __int16)LastError | 0x80070000;
  if ( (v4 & 0x80000000) == 0 )
    v4 = -2003304445;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xECu);
  OutputDebugStringW(L"WARNING: DWMCore: Direct3D 11 is not installed or load failed.\n");
  dword_1801EFD80 = v4;
  if ( hLibModule )
  {
    FreeLibrary(hLibModule);
    hLibModule = 0LL;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801AD918, 1u, v4, 0x13Eu);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v4;
}
