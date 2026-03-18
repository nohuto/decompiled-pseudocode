/*
 * XREFs of ?GetPresentStatistics@CAnalogRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1801265C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnalogRenderTarget::GetPresentStatistics(
        CAnalogRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v3; // r14
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx

  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v3 + 296LL))(
           *((_QWORD *)this + 20),
           a2);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1DBu);
    v8 = *((_QWORD *)this + 7);
    a3->uiNumerator = *(_DWORD *)(v8 + 876);
    a3->uiDenominator = *(_DWORD *)(v8 + 880);
  }
  else
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x1E0u);
  }
  return v7;
}
