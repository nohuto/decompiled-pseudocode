/*
 * XREFs of ?GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14002B010
 * Callers:
 *     <none>
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetProtectedOutputController(
        CSystemAudioDeviceSharedBase *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 36))(
         *((_QWORD *)this + 36),
         &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8,
         &v7);
  if ( v5 < 0
    || (v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioProtectedOutputController **))(*(_QWORD *)v7 + 24LL))(
               v7,
               a2,
               a3),
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7),
        v5 < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Au,
        (__int64)&WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids,
        v5);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetProtectedOutputController", 550, v5);
  }
  return (unsigned int)v5;
}
