/*
 * XREFs of AudioSessionManagerAddVolumeDuckNotification @ 0x18003A340
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18002B7C0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionManagerAddVolumeDuckNotification(
        __int64 a1,
        unsigned __int64 a2,
        const unsigned __int16 *a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int64 (__fastcall *v7)(struct _RTL_CRITICAL_SECTION *, const unsigned __int16 *, unsigned int, unsigned __int64); // rbx
  unsigned int v9; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0;
  v6 = I_RpcBindingInqLocalClientPID(0LL, &v9);
  if ( v6 )
  {
    if ( v6 > 0 )
    {
      v5 = (unsigned __int16)v6 | 0x80070000;
      goto LABEL_6;
    }
  }
  else
  {
    if ( !g_DuckingManager )
      return v5;
    v7 = *(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, const unsigned __int16 *, unsigned int, unsigned __int64))(*(_QWORD *)g_DuckingManager + 32LL);
    if ( v7 == CDuckingManager::AddDuckingNotification )
      v6 = CDuckingManager::AddDuckingNotification((struct _RTL_CRITICAL_SECTION *)g_DuckingManager, a3, v9, a2);
    else
      v6 = v7((struct _RTL_CRITICAL_SECTION *)g_DuckingManager, a3, v9, a2);
  }
  v5 = v6;
LABEL_6:
  if ( (v5 & 0x80000000) != 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x5Au, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v5);
  }
  return v5;
}
