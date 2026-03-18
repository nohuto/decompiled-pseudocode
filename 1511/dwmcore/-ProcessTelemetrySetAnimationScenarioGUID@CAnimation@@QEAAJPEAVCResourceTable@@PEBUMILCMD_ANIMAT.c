/*
 * XREFs of ?ProcessTelemetrySetAnimationScenarioGUID@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID@@@Z @ 0x18001BFE4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimation::ProcessTelemetrySetAnimationScenarioGUID(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID *a3)
{
  unsigned int v3; // esi
  _OWORD *v6; // rax
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v9 = 247;
    goto LABEL_9;
  }
  if ( *((_BYTE *)this + 80) )
  {
    v9 = 253;
LABEL_9:
    v8 = -2147024891;
    goto LABEL_10;
  }
  v6 = (_OWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   16LL);
  *((_QWORD *)this + 14) = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
    v9 = 258;
LABEL_10:
    v3 = v8;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v9);
    return v3;
  }
  *v6 = *(_OWORD *)((char *)a3 + 8);
  return v3;
}
