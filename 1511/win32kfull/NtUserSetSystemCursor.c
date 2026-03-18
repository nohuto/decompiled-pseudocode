/*
 * XREFs of NtUserSetSystemCursor @ 0x1C02207E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     xxxSetSystemCursor @ 0x1C02294C8 (xxxSetSystemCursor.c)
 */

__int64 __fastcall NtUserSetSystemCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx

  EnterCrit(0LL, 1LL);
  v4 = HMValidateHandle(a1, 3);
  v7 = 0;
  if ( v4 )
    v7 = xxxSetSystemCursor(v4, a2);
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
