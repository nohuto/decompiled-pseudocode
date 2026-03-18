/*
 * XREFs of ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x18016AAB0
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180007588 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z @ 0x18016ABB4 (-NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@II_K@Z.c)
 *     ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x18016ACE8 (-NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CQueue<CManipulationManager::InteractionUpdate *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v5; // r9d
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v4 = 0;
  EnterCriticalSection(&stru_1801EFFE8);
  if ( byte_1801EFFE4 )
  {
    v5 = -2147023781;
    v9 = 152;
LABEL_3:
    v4 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v9);
    goto LABEL_12;
  }
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   24LL);
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v5 = -2147024882;
    v9 = 155;
    goto LABEL_3;
  }
  v6[2] = a3;
  v7 = (_QWORD *)qword_1801EFFD8;
  if ( *(__int64 **)qword_1801EFFD8 != &CManipulationManager::s_InteractionUpdateQueue )
    __fastfail(3u);
  *v6 = &CManipulationManager::s_InteractionUpdateQueue;
  v6[1] = v7;
  *v7 = v6;
  ++dword_1801EFFE0;
  qword_1801EFFD8 = (__int64)v6;
LABEL_12:
  LeaveCriticalSection(&stru_1801EFFE8);
  return v4;
}
