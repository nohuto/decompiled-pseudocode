/*
 * XREFs of ?GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z @ 0x14002A330
 * Callers:
 *     <none>
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Ds @ 0x140029210 (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::GetLatency(CSystemAudioDeviceExclusive *this, __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v6; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 28) + 40LL))(*((_QWORD *)this + 28), a3);
  LeaveCriticalSection(v3);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xBu,
        (__int64)&WPP_9057bc299ae43b117cc58bcfd1dc47e8_Traceguids,
        v6,
        (__int64)"CSystemAudioDeviceExclusive::GetLatency");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::GetLatency", 176, v6);
  }
  return (unsigned int)v6;
}
