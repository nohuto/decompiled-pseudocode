/*
 * XREFs of ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@PEBXI@Z @ 0x1800E3544
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     ?VerifyInfo@TOUCH_TELEMETRY_BEGIN_PACKED_INFO@@SA_NPEBX_K@Z @ 0x1800E3D6C (-VerifyInfo@TOUCH_TELEMETRY_BEGIN_PACKED_INFO@@SA_NPEBX_K@Z.c)
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x1800E49AC (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 */

__int64 __fastcall CComposition::Partition_TelemetryTouchInteractionBegin(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN *a4,
        struct TOUCH_TELEMETRY_BEGIN_PACKED_INFO *a5,
        unsigned int a6)
{
  unsigned int v6; // ebp
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int16 *v10; // rax
  const unsigned __int16 *v11; // rsi
  unsigned __int64 v12; // rbx
  int v13; // ecx
  char *v14; // rdx
  unsigned int v16; // [rsp+20h] [rbp-28h]

  v6 = 0;
  if ( a6 - 24 > 0xB0 )
  {
    v16 = 2155;
LABEL_7:
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v16);
    return v6;
  }
  if ( !TOUCH_TELEMETRY_BEGIN_PACKED_INFO::VerifyInfo(a5, a6) )
  {
    v16 = 2160;
    goto LABEL_7;
  }
  if ( !a5 )
  {
    v16 = 2167;
    goto LABEL_7;
  }
  v8 = *((unsigned __int16 *)a5 + 11) + 1;
  v9 = 2 * v8;
  if ( !is_mul_ok(v8, 2uLL) )
    v9 = -1LL;
  v10 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              v9);
  v11 = v10;
  v12 = 0LL;
  if ( v10 )
  {
    v13 = *((unsigned __int16 *)a5 + 11) + 1;
    v12 = 2LL * v13;
    if ( *((_WORD *)a5 + 10) )
      v14 = (char *)a5 + *((unsigned __int16 *)a5 + 10);
    else
      v14 = 0LL;
    memcpy_0(v10, v14, 2LL * v13);
  }
  CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
    (CTelemetryTouchLatencyAnalysis *)(*((_QWORD *)this + 63) + 23240LL),
    a5,
    v12,
    v11,
    **(_QWORD **)(*((_QWORD *)this + 63) + 22296LL));
  if ( v11 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v11);
  return v6;
}
