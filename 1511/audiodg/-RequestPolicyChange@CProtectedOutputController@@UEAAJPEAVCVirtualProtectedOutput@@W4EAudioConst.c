/*
 * XREFs of ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x140016D30
 * Callers:
 *     ?SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z @ 0x1400169F0 (-SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z.c)
 *     ?AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z @ 0x140016C90 (-AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z.c)
 * Callees:
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140006B08 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 */

__int64 __fastcall CProtectedOutputController::RequestPolicyChange(
        CProtectedOutputController *this,
        struct CVirtualProtectedOutput *a2,
        enum EAudioConstriction a3)
{
  _QWORD *v3; // r9
  enum EAudioConstriction v5; // ebx
  struct CVirtualProtectedOutput *v6; // rcx
  int updated; // edi
  enum EAudioConstriction v9; // eax

  v3 = (_QWORD *)*((_QWORD *)this + 2);
  v5 = eAudioConstrictionOff;
  while ( v3 )
  {
    v6 = (struct CVirtualProtectedOutput *)v3[2];
    v3 = (_QWORD *)*v3;
    if ( v6 == a2 )
    {
      if ( v5 <= a3 )
        v5 = a3;
    }
    else
    {
      v9 = *((_DWORD *)v6 + 5);
      if ( v5 > v9 )
        v9 = v5;
      v5 = v9;
    }
  }
  updated = 0;
  if ( v5 != *((_DWORD *)this + 16) )
  {
    updated = CAudioDeviceGraph::UpdateLoopbackConstrictionLevel(*((CAudioDeviceGraph **)this + 1), v5);
    if ( updated < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          12LL,
          &WPP_6577effb2eb0b4bf7989f7c48aedbf30_Traceguids,
          (unsigned int)updated);
      }
    }
    else
    {
      *((_DWORD *)this + 16) = v5;
    }
  }
  return (unsigned int)updated;
}
