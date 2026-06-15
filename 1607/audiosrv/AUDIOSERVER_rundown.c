/*
 * XREFs of AUDIOSERVER_rundown @ 0x180004710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AUDIOSERVER_rundown(__int64 a1)
{
  int v2; // eax
  CAudioDGProcess *v3; // rcx

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 57LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, a1);
  }
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 58LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, a1, v2);
  }
  return CAudioDGProcess::UnlockADGProcess(v3);
}
