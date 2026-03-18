/*
 * XREFs of ??0CDesktopRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180075B7C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     <none>
 */

CDesktopRenderTarget *__fastcall CDesktopRenderTarget::CDesktopRenderTarget(
        CDesktopRenderTarget *this,
        struct CComposition *a2)
{
  HANDLE v3; // rax
  PSECURITY_DESCRIPTOR v4; // rcx
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+20h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  SecurityDescriptor = 0LL;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CDesktopRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CDesktopRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CDesktopRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CDesktopRenderTarget::`vftable';
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 11) = (char *)this + 120;
  *((_QWORD *)this + 12) = (char *)this + 120;
  *((_DWORD *)this + 26) = 2;
  *((_DWORD *)this + 27) = 2;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 17) = (char *)this + 168;
  *((_QWORD *)this + 18) = (char *)this + 168;
  *((_DWORD *)this + 38) = 2;
  *((_DWORD *)this + 39) = 2;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 50) = 2;
  *((_DWORD *)this + 51) = 2;
  *((_QWORD *)this + 23) = (char *)this + 216;
  *((_QWORD *)this + 24) = (char *)this + 216;
  *((_DWORD *)this + 68) = 0;
  *((_BYTE *)this + 304) = 1;
  *((_DWORD *)this + 72) = 1065353216;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;;0x00100002;;;WD)", 1u, &SecurityDescriptor, 0LL) )
  {
    EventAttributes.bInheritHandle = 0;
    EventAttributes.nLength = 24;
    EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
    v3 = CreateEventW(&EventAttributes, 1, 0, L"DWM_DX_FULLSCREEN_TRANSITION_EVENT");
    v4 = SecurityDescriptor;
    *((_QWORD *)this + 39) = v3;
    LocalFree(v4);
  }
  return this;
}
