/*
 * XREFs of ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x180129FC0
 * Callers:
 *     ?NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z @ 0x18012A4D0 (-NotifyCapturePointer@CManipulationManager@@QEAAJPEAVCInteraction@@I@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18012B2A8 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CQueue<CManipulationManager::InteractionUpdate *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  int v5; // r9d
  __int64 *v6; // rax
  __int64 **v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v4 = 0;
  EnterCriticalSection(&stru_180195D58);
  if ( byte_180195D54 )
  {
    v5 = -2147023781;
    v9 = 93;
LABEL_8:
    v4 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v9);
    goto LABEL_12;
  }
  v6 = (__int64 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
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
    v9 = 96;
    goto LABEL_8;
  }
  v6[2] = a3;
  v7 = (__int64 **)qword_180195D48;
  *v6 = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  v6[1] = (__int64)v7;
  if ( *v7 != &CManipulationManager::s_InteractionUpdateQueue )
    __fastfail(3u);
  *v7 = v6;
  ++dword_180195D50;
  qword_180195D48 = (__int64)v6;
LABEL_12:
  LeaveCriticalSection(&stru_180195D58);
  return v4;
}
