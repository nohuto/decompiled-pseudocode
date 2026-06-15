/*
 * XREFs of AudioSessionManagerDestroy @ 0x180031F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x180032000 (--_GCAudioSessionManagerProxy@@QEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerDestroy(CAudioSessionManager ***a1)
{
  CAudioSessionManager **v1; // rbx
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(CAudioSessionManager *); // rsi
  unsigned int v5; // edx

  v1 = *a1;
  v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        78LL,
        &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        *v1);
      v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (struct _GUID *)v3 != &WPP_GLOBAL_Control && (*(_BYTE *)(v3 + 28) & 0x40) != 0 && *(_BYTE *)(v3 + 25) >= 4u )
      WPP_SF_q(*(_QWORD *)(v3 + 16), 79LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, *v1);
  }
  v4 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)*v1 + 16LL);
  if ( v4 == CAudioSessionManager::Release )
    CAudioSessionManager::Release(*v1);
  else
    v4(*v1);
  CAudioSessionManagerProxy::`scalar deleting destructor'((CAudioSessionManagerProxy *)v1, v5);
  *a1 = 0LL;
  return 0LL;
}
