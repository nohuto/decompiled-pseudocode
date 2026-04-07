/*
 * XREFs of Template_jq @ 0x18009DFC4
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180005850 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_jq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+2Ch] [rbp-2Ch]
  int *v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+3Ch] [rbp-1Ch]
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = a4;
  v5 = a3;
  v7 = 0;
  v6 = 16;
  v8 = &v11;
  v10 = 0;
  v9 = 4;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmAnimationClock_Create, 2LL, &v5);
}
