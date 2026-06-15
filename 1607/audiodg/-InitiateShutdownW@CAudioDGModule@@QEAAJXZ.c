/*
 * XREFs of ?InitiateShutdownW@CAudioDGModule@@QEAAJXZ @ 0x14002621C
 * Callers:
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x1400120C4 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     AudioDGShutdownADG @ 0x140026920 (AudioDGShutdownADG.c)
 * Callees:
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 */

__int64 __fastcall CAudioDGModule::InitiateShutdownW(CAudioDGModule *this)
{
  void *v2; // rcx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids);
  }
  v2 = (void *)*((_QWORD *)this + 14);
  if ( v2 )
    SetEvent(v2);
  return 0LL;
}
