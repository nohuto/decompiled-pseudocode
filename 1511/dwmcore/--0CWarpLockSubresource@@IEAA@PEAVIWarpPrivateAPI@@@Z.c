/*
 * XREFs of ??0CWarpLockSubresource@@IEAA@PEAVIWarpPrivateAPI@@@Z @ 0x18001B1C8
 * Callers:
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x18001AEB4 (-Create@CWarpLockSubresource@@SAJPEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CWarpLockSubresource *__fastcall CWarpLockSubresource::CWarpLockSubresource(
        CWarpLockSubresource *this,
        struct IWarpPrivateAPI *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CWarpLockSubresource::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IWarpPrivateAPI *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
