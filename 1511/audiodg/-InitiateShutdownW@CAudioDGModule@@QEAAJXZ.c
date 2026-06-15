/*
 * XREFs of ?InitiateShutdownW@CAudioDGModule@@QEAAJXZ @ 0x140027514
 * Callers:
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140008844 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     AudioDGShutdownADG @ 0x140027D00 (AudioDGShutdownADG.c)
 * Callees:
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDGModule::InitiateShutdownW(CAudioDGModule *this)
{
  void *v2; // rcx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids);
  }
  v2 = (void *)*((_QWORD *)this + 14);
  if ( v2 )
    SetEvent(v2);
  return 0LL;
}
