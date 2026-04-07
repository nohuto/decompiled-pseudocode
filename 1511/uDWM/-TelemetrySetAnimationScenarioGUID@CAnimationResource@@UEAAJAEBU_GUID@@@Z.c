/*
 * XREFs of ?TelemetrySetAnimationScenarioGUID@CAnimationResource@@UEAAJAEBU_GUID@@@Z @ 0x18009D910
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationResource::TelemetrySetAnimationScenarioGUID(
        CAnimationResource *this,
        const struct _GUID *a2)
{
  unsigned int v2; // esi
  struct _GUID *v5; // rax

  v2 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    return (unsigned int)-2147024891;
  }
  else
  {
    v5 = (struct _GUID *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           16LL);
    *((_QWORD *)this + 4) = v5;
    if ( v5 )
    {
      *v5 = *a2;
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x176u);
    }
  }
  return v2;
}
