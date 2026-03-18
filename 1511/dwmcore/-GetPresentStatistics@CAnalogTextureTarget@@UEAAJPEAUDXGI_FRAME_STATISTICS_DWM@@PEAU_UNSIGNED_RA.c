/*
 * XREFs of ?GetPresentStatistics@CAnalogTextureTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18013C2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnalogTextureTarget::GetPresentStatistics(
        CAnalogTextureTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v3; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx

  v3 = *((_QWORD *)this + 18);
  if ( v3 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)(v3 + 176) + 304LL))(
           v3 + 176,
           a2);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x11Au);
    v8 = *((_QWORD *)this + 5);
    a3->uiNumerator = *(_DWORD *)(v8 + 272);
    a3->uiDenominator = *(_DWORD *)(v8 + 276);
  }
  else
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x11Fu);
  }
  return v7;
}
