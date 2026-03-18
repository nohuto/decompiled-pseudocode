/*
 * XREFs of ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x180095788
 * Callers:
 *     ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18009432C (-Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x1800526F8 (-Init@CCriticalSection@@QEAAJXZ.c)
 *     ?RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z @ 0x1800610F4 (-RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180061814 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x1800943D8 (-Create@CKernelTransport@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoRenderEngine@@PEAPEAV1@PEAPEAU_DWM_TIMING_INFO_EX@@@Z @ 0x180094480 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoR.c)
 *     ?GetAvalonRegistrySettingsKey@@YAJPEAPEAUHKEY__@@@Z @ 0x180095524 (-GetAvalonRegistrySettingsKey@@YAJPEAPEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1800E10C0 (-Disconnect@CConnection@@QEAAXXZ.c)
 *     ?Create@CMediaControl@@SAJPEBGPEAPEAV1@@Z @ 0x18012898C (-Create@CMediaControl@@SAJPEBGPEAPEAV1@@Z.c)
 */

__int64 __fastcall CConnection::Initialize(CConnection *this, int a2, struct IDWMCoRenderEngine *a3)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  DWORD CurrentProcessId; // eax
  struct CMediaControl **v11; // rdx
  unsigned int v12; // [rsp+20h] [rbp-D8h]
  unsigned int v13; // [rsp+30h] [rbp-C8h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C0h] BYREF
  wchar_t Buffer[64]; // [rsp+40h] [rbp-B8h] BYREF

  v13 = 0;
  hKey = 0LL;
  if ( (int)GetAvalonRegistrySettingsKey(&hKey) >= 0 )
  {
    RegReadDWORD(hKey, L"EnableDebugControl", &v13);
    if ( v13 )
    {
      CurrentProcessId = GetCurrentProcessId();
      if ( (int)StringCchPrintfW(Buffer, 64LL, L"DwmCore-%d", CurrentProcessId) >= 0 )
      {
        CPerformanceCounter::s_qpcSupported = QueryPerformanceFrequency(&CPerformanceCounter::s_qpcFrequency);
        CMediaControl::Create(Buffer, v11);
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  v6 = CCriticalSection::Init((LPCRITICAL_SECTION)((char *)this + 128));
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 122;
  }
  else
  {
    v8 = CCriticalSection::Init((LPCRITICAL_SECTION)((char *)this + 64));
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1Eu);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x7Bu);
      goto LABEL_11;
    }
    v6 = CKernelTransport::Create((struct CKernelTransport **)this + 14);
    v7 = v6;
    if ( v6 < 0 )
    {
      v12 = 128;
    }
    else
    {
      *((_BYTE *)this + 176) = 1;
      v6 = CPartitionVerticalBlankScheduler::Create(
             *((struct CKernelTransport **)this + 14),
             this,
             a2,
             a3,
             (struct CPartitionVerticalBlankScheduler **)this + 15,
             (struct _DWM_TIMING_INFO_EX **)this + 23);
      v7 = v6;
      if ( v6 >= 0 )
      {
        _InterlockedIncrement(&dword_180193110);
        goto LABEL_11;
      }
      v12 = 143;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v12);
LABEL_11:
  if ( v7 < 0 )
    CConnection::Disconnect(this);
  return (unsigned int)v7;
}
