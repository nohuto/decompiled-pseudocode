/*
 * XREFs of ?TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z @ 0x180062D88
 * Callers:
 *     ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x180069028 (-Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1800634EC (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CChannelContext::TelemetrySetApplicationId(
        CChannelContext *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  int v3; // ebp
  unsigned __int16 *v4; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  unsigned __int16 *v10; // rax

  v3 = 0;
  v4 = 0LL;
  if ( !*((_QWORD *)this + 5) )
  {
    v8 = a3 + 1;
    v9 = 2 * (a3 + 1);
    if ( !is_mul_ok(a3 + 1, 2uLL) )
      v9 = -1LL;
    v10 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                v9);
    v4 = v10;
    if ( v10 )
    {
      v3 = StringCchCopyNW(v10, v8, a2, a3);
      if ( v3 >= 0 )
      {
        *((_QWORD *)this + 5) = v4;
        v4 = 0LL;
      }
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xEEu);
    }
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v4);
  return (unsigned int)v3;
}
