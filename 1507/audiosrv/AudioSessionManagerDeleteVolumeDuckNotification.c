/*
 * XREFs of AudioSessionManagerDeleteVolumeDuckNotification @ 0x180032620
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18000E4F0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionManagerDeleteVolumeDuckNotification(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 (__fastcall *v5)(struct _RTL_CRITICAL_SECTION *, unsigned int, __int64); // rbx
  unsigned int Pid; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v4 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v4 )
  {
    if ( v4 > 0 )
    {
      v3 = (unsigned __int16)v4 | 0x80070000;
      goto LABEL_6;
    }
  }
  else
  {
    if ( !g_DuckingManager )
      return v3;
    v5 = *(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, unsigned int, __int64))(*(_QWORD *)g_DuckingManager
                                                                                         + 40LL);
    if ( v5 == CDuckingManager::DeleteDuckingNotification )
      v4 = CDuckingManager::DeleteDuckingNotification((struct _RTL_CRITICAL_SECTION *)g_DuckingManager, Pid, a2);
    else
      v4 = v5((struct _RTL_CRITICAL_SECTION *)g_DuckingManager, Pid, a2);
  }
  v3 = v4;
LABEL_6:
  if ( (v3 & 0x80000000) != 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x5Bu,
      (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
      v3);
  }
  return v3;
}
