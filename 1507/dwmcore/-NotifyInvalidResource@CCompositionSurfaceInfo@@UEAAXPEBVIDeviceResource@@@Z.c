/*
 * XREFs of ?NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x18008D080
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180089E90 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CCompositionSurfaceInfo::NotifyInvalidResource(
        CCompositionSurfaceInfo *this,
        const struct IDeviceResource *a2)
{
  int i; // esi

  CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 32));
  for ( i = *((_DWORD *)this + 52); i > 0; --i )
    (*(void (__fastcall **)(_QWORD, const struct IDeviceResource *))(**(_QWORD **)(*((_QWORD *)this + 23)
                                                                                 + 8LL * (unsigned int)(i - 1))
                                                                   + 8LL))(
      *(_QWORD *)(*((_QWORD *)this + 23) + 8LL * (unsigned int)(i - 1)),
      a2);
}
