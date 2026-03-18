/*
 * XREFs of ?ProcessTelemetrySetAnimationScenarioGUID@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID@@@Z @ 0x18001EE1C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimation::ProcessTelemetrySetAnimationScenarioGUID(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( *((_QWORD *)this + 24) )
  {
    v9 = 250;
    goto LABEL_9;
  }
  if ( *((_BYTE *)this + 152) )
  {
    v9 = 256;
LABEL_9:
    v8 = -2147024891;
    goto LABEL_10;
  }
  v6 = (_OWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   16LL);
  *((_QWORD *)this + 24) = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
    v9 = 261;
LABEL_10:
    v3 = v8;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v9);
    return v3;
  }
  *v6 = *(_OWORD *)((char *)a3 + 8);
  return v3;
}
