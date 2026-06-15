/*
 * XREFs of AudioSessionMeterGetPeakValue @ 0x18007E2D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionMeterGetPeakValue(_QWORD *a1, __int64 a2)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 232LL))(*a1, a2);
  if ( v2 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x50u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
