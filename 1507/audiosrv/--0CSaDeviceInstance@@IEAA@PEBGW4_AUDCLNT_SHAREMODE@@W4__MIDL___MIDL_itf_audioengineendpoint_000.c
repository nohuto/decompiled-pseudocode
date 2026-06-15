/*
 * XREFs of ??0CSaDeviceInstance@@IEAA@PEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HU_GUID@@K_KPEAJ@Z @ 0x18007365C
 * Callers:
 *     ?GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3K_K_J5PEBUtWAVEFORMATEX@@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800749B4 (-GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002E51C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
CSaDeviceInstance *__fastcall CSaDeviceInstance::CSaDeviceInstance(
        CSaDeviceInstance *this,
        size_t *a2,
        enum _AUDCLNT_SHAREMODE a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        int a5,
        struct _GUID *a6,
        unsigned int a7,
        unsigned __int64 a8,
        int *a9)
{
  __int64 v11; // rdi
  size_t v12; // rdi
  unsigned __int16 *v13; // rax
  int v14; // edi

  *((_DWORD *)this + 2) = a3;
  *((_DWORD *)this + 4) = a5;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = a4;
  *(struct _GUID *)((char *)this + 40) = *a6;
  *((_DWORD *)this + 14) = a7;
  *((_QWORD *)this + 8) = a8;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 10;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 3);
  v11 = -1LL;
  do
    ++v11;
  while ( *((_WORD *)a2 + v11) );
  v12 = v11 + 1;
  v13 = (unsigned __int16 *)CoTaskMemAlloc(2 * v12);
  *(_QWORD *)this = v13;
  if ( v13 )
  {
    v14 = StringCchCopyW(v13, v12, a2);
    if ( v14 >= 0 )
    {
      *((_DWORD *)this + 3) = GetSessionIdFromEndpointId(a2);
      goto LABEL_9;
    }
  }
  else
  {
    v14 = -2147024882;
  }
  if ( *(_QWORD *)this )
  {
    CoTaskMemFree(*(LPVOID *)this);
    *(_QWORD *)this = 0LL;
  }
LABEL_9:
  *a9 = v14;
  return this;
}
