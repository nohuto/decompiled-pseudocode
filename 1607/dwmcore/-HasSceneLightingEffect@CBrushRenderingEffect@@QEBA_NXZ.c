/*
 * XREFs of ?HasSceneLightingEffect@CBrushRenderingEffect@@QEBA_NXZ @ 0x180195484
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x1800565C0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180195680 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18014E3A0 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 */

char __fastcall CBrushRenderingEffect::HasSceneLightingEffect(CBrushRenderingEffect *this)
{
  unsigned int v1; // edi
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  char v3; // bl

  v1 = *((unsigned __int8 *)this + 44);
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(*(CCompiledEffectTemplate **)(*((_QWORD *)this + 1) + 136LL));
  v3 = 0;
  if ( CompiledEffectNoRef )
    return ((*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)CompiledEffectNoRef + 40LL))(
              CompiledEffectNoRef,
              v1) & 4) != 0;
  return v3;
}
