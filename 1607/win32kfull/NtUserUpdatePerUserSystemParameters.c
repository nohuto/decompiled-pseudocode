/*
 * XREFs of NtUserUpdatePerUserSystemParameters @ 0x1C008E4D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserUpdatePerUserSystemParameters(unsigned int a1)
{
  __int64 updated; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v6[8]; // [rsp+20h] [rbp-58h] BYREF

  memset(v6, 0, sizeof(v6));
  EtwActivityIdControl(3u, (LPGUID)&v6[1]);
  v6[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v6[3]) = 32;
  EnterCrit(0LL, 1LL);
  updated = (int)xxxUpdatePerUserSystemParameters(a1, v6);
  UserSessionSwitchLeaveCrit(v4, v3);
  return updated;
}
