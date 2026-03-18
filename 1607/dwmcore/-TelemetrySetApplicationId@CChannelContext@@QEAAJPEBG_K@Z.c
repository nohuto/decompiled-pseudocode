/*
 * XREFs of ?TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z @ 0x18003950C
 * Callers:
 *     ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x18003BE3C (-Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1800B2B58 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannelContext::TelemetrySetApplicationId(
        CChannelContext *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  int v3; // edi
  unsigned __int16 *v4; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBDu);
    }
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v4);
  return (unsigned int)v3;
}
