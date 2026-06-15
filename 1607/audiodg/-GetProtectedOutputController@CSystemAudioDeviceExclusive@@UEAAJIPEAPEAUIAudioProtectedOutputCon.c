/*
 * XREFs of ?GetProtectedOutputController@CSystemAudioDeviceExclusive@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14002A3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Ds @ 0x140029210 (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::GetProtectedOutputController(
        CSystemAudioDeviceExclusive *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 26))(
         *((_QWORD *)this + 26),
         &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8,
         &v7);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        (__int64)&WPP_9057bc299ae43b117cc58bcfd1dc47e8_Traceguids,
        v5,
        (__int64)"CSystemAudioDeviceExclusive::GetProtectedOutputController");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::GetProtectedOutputController", 220, v5);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioProtectedOutputController **))(*(_QWORD *)v7 + 24LL))(
           v7,
           a2,
           a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
