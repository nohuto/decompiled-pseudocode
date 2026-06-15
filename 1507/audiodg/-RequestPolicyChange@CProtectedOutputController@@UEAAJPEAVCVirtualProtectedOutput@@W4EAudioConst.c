/*
 * XREFs of ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x1400312C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140032D94 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 */

__int64 __fastcall CProtectedOutputController::RequestPolicyChange(
        CProtectedOutputController *this,
        struct CVirtualProtectedOutput *a2,
        enum EAudioConstriction a3)
{
  _QWORD *v3; // r9
  enum EAudioConstriction v5; // ebx
  struct CVirtualProtectedOutput *v6; // rcx
  enum EAudioConstriction v7; // eax
  int updated; // edi

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
      v7 = *((_DWORD *)v6 + 5);
      if ( v5 > v7 )
        v7 = v5;
      v5 = v7;
    }
  }
  updated = 0;
  if ( v5 != *((_DWORD *)this + 16) )
  {
    updated = CAudioDeviceGraph::UpdateLoopbackConstrictionLevel(*((CAudioDeviceGraph **)this + 1), v5);
    if ( updated < 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0xCu,
          (__int64)&WPP_6577effb2eb0b4bf7989f7c48aedbf30_Traceguids,
          updated);
      }
    }
    else
    {
      *((_DWORD *)this + 16) = v5;
    }
  }
  return (unsigned int)updated;
}
