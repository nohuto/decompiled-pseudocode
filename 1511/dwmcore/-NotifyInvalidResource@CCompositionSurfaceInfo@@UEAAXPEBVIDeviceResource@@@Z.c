/*
 * XREFs of ?NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x18002F280
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x18006C85C (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 */

void __fastcall CCompositionSurfaceInfo::NotifyInvalidResource(
        CCompositionSurfaceInfo *this,
        const struct IDeviceResource *a2)
{
  int i; // esi

  CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 32));
  for ( i = *((_DWORD *)this + 50); i > 0; --i )
    (*(void (__fastcall **)(_QWORD, const struct IDeviceResource *))(**(_QWORD **)(*((_QWORD *)this + 22)
                                                                                 + 8LL * (unsigned int)(i - 1))
                                                                   + 16LL))(
      *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * (unsigned int)(i - 1)),
      a2);
}
