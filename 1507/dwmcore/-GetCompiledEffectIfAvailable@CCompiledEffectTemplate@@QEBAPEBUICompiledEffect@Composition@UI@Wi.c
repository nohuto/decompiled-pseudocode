/*
 * XREFs of ?GetCompiledEffectIfAvailable@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x180115464
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x1800FF6A0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 *     ?IsReadyToDraw@CCompiledEffect@@QEBA_NXZ @ 0x1801133B0 (-IsReadyToDraw@CCompiledEffect@@QEBA_NXZ.c)
 *     ?CreateResource@CCompiledEffectTemplate@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180115178 (-CreateResource@CCompiledEffectTemplate@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z.c)
 * Callees:
 *     <none>
 */

const struct Windows::UI::Composition::ICompiledEffect *__fastcall CCompiledEffectTemplate::GetCompiledEffectIfAvailable(
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
