/*
 * XREFs of NtUserSetSystemCursor @ 0x1C02209A0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     xxxSetSystemCursor @ 0x1C02291C8 (xxxSetSystemCursor.c)
 */

__int64 __fastcall NtUserSetSystemCursor(__int64 a1)
{
  struct tagCURSOR *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx

  EnterCrit(1LL);
  v2 = (struct tagCURSOR *)HMValidateHandle(a1, 3);
  v5 = 0;
  if ( v2 )
    v5 = xxxSetSystemCursor(v2);
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
