/*
 * XREFs of ??0CDesktopRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180077334
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800B8344 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CDesktopRenderTarget *__fastcall CDesktopRenderTarget::CDesktopRenderTarget(
        CDesktopRenderTarget *this,
        struct CComposition *a2)
{
  HANDLE v3; // rax
  PSECURITY_DESCRIPTOR v4; // rcx
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+20h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp+8h] BYREF

  CRenderTarget::CRenderTarget(this, a2);
  SecurityDescriptor = 0LL;
  *(_QWORD *)this = &CDesktopRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CDesktopRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CDesktopRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 19) = &CDesktopRenderTarget::`vftable';
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 20) = (char *)this + 192;
  *((_QWORD *)this + 21) = (char *)this + 192;
  *((_DWORD *)this + 44) = 2;
  *((_DWORD *)this + 45) = 2;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 26) = (char *)this + 240;
  *((_QWORD *)this + 27) = (char *)this + 240;
  *((_DWORD *)this + 56) = 2;
  *((_DWORD *)this + 57) = 2;
  *((_DWORD *)this + 70) = 0;
  *((_QWORD *)this + 32) = (char *)this + 288;
  *((_QWORD *)this + 33) = (char *)this + 288;
  *((_DWORD *)this + 68) = 2;
  *((_DWORD *)this + 69) = 2;
  *((_DWORD *)this + 82) = 0;
  *((_DWORD *)this + 80) = 2;
  *((_DWORD *)this + 81) = 2;
  *((_QWORD *)this + 38) = (char *)this + 336;
  *((_QWORD *)this + 39) = (char *)this + 336;
  *((_DWORD *)this + 98) = 0;
  *((_BYTE *)this + 424) = 1;
  *((_DWORD *)this + 102) = 1065353216;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;;0x00100002;;;WD)", 1u, &SecurityDescriptor, 0LL) )
  {
    EventAttributes.bInheritHandle = 0;
    EventAttributes.nLength = 24;
    EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
    v3 = CreateEventW(&EventAttributes, 1, 0, L"DWM_DX_FULLSCREEN_TRANSITION_EVENT");
    v4 = SecurityDescriptor;
    *((_QWORD *)this + 54) = v3;
    LocalFree(v4);
  }
  return this;
}
