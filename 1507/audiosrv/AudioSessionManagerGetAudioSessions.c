/*
 * XREFs of AudioSessionManagerGetAudioSessions @ 0x1800809A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerGetAudioSessions(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  int v8; // ebx
  __int64 v9; // rcx

  v4 = *a1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x53u,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      *v4);
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v4[1] + 104LL))(v4[1]) )
    v8 = -2147024891;
  else
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)*v4 + 136LL))(
           *v4,
           v4[1],
           a2,
           a3,
           a4);
  v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x54u,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      v8);
    v9 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v8 < 0
    && (struct _GUID *)v9 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v9 + 28) & 0x40) != 0
    && *(_BYTE *)(v9 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v9 + 16), 0x55u, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v8);
  }
  return (unsigned int)v8;
}
