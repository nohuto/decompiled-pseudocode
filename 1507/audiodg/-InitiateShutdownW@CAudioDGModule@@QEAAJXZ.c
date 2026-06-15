/*
 * XREFs of ?InitiateShutdownW@CAudioDGModule@@QEAAJXZ @ 0x140015150
 * Callers:
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014B24 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     AudioDGShutdownADG @ 0x140017CB0 (AudioDGShutdownADG.c)
 * Callees:
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDGModule::InitiateShutdownW(CAudioDGModule *this)
{
  void *v2; // rcx

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 10LL, &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids);
  }
  v2 = (void *)*((_QWORD *)this + 14);
  if ( v2 )
    SetEvent(v2);
  return 0LL;
}
