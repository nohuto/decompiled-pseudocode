/*
 * XREFs of ??0CDXGIAdapterLimited@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x180095BB8
 * Callers:
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x180096168 (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CDXGIAdapterLimited *__fastcall CDXGIAdapterLimited::CDXGIAdapterLimited(
        CDXGIAdapterLimited *this,
        int a2,
        struct IDXGIAdapter *a3)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CDXGIAdapterLimited::`vftable';
  *((_DWORD *)this + 4) = a2;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = a3;
  ((void (__fastcall *)(struct IDXGIAdapter *))a3->lpVtbl->AddRef)(a3);
  return this;
}
