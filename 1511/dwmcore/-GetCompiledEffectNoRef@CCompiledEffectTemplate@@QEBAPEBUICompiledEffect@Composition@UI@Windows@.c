/*
 * XREFs of ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18012DE60
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x1801186D0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 *     ?CreateResource@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180122868 (-CreateResource@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 *     ?GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180122C80 (-GetConstantBuffer@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@QEBA_NXZ @ 0x180123054 (-IsReadyToDraw@CEffectBrush@@QEBA_NXZ.c)
 *     ?UpdateConstantBuffers@CEffectBrush@@AEAAJXZ @ 0x180123410 (-UpdateConstantBuffers@CEffectBrush@@AEAAJXZ.c)
 *     ?CreateResource@CCompiledEffectTemplate@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18012DB74 (-CreateResource@CCompiledEffectTemplate@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z.c)
 * Callees:
 *     <none>
 */

const struct Windows::UI::Composition::ICompiledEffect *__fastcall CCompiledEffectTemplate::GetCompiledEffectNoRef(
        CCompiledEffectTemplate *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  struct _TP_WORK *v3; // rcx

  v1 = *((_QWORD *)this + 7);
  v2 = 0LL;
  if ( v1 && *(_DWORD *)(v1 + 48) == 2 )
  {
    v3 = *(struct _TP_WORK **)(v1 + 40);
    if ( v3 )
    {
      WaitForThreadpoolWorkCallbacks(v3, 0);
      CloseThreadpoolWork(*(PTP_WORK *)(v1 + 40));
      *(_QWORD *)(v1 + 40) = 0LL;
    }
    return *(const struct Windows::UI::Composition::ICompiledEffect **)(v1 + 56);
  }
  return (const struct Windows::UI::Composition::ICompiledEffect *)v2;
}
