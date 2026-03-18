/*
 * XREFs of EditionInitiateMouseEventProcessing @ 0x140133E70
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140133F2C (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     WakeRIT @ 0x140133F68 (WakeRIT.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x140251FAC (-xxxUserBeep@@YAHKK_N@Z.c)
 */

__int64 __fastcall EditionInitiateMouseEventProcessing(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v5, v4) + 18792) )
    {
LABEL_3:
      EtwTraceWakeMIT(1LL);
      result = WakeMIT(1LL);
      goto LABEL_4;
    }
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)(W32GetUserSessionState(v5, v4) + 16332), 1, 1) )
  {
    goto LABEL_3;
  }
  EtwTraceWakeRIT(1LL);
  result = WakeRIT(1LL);
LABEL_4:
  if ( a1 )
    return xxxUserBeep(0x1B8u, 0x7Du, a2 == 0);
  return result;
}
