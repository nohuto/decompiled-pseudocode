/*
 * XREFs of NtUserGetWindowPlacement @ 0x1402B57C0
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowPlacement @ 0x140030188 (_GetWindowPlacement.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetWindowPlacement(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // rbx
  _OWORD Src[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]

  memset(Src, 0, sizeof(Src));
  v8 = 0LL;
  v9 = 0;
  EnterCrit(0LL, 1LL);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  if ( v5 )
  {
    ProbeForWrite(a2, 0x2CuLL, 1u);
    LODWORD(Src[0]) = *a2;
    LODWORD(v5) = GetWindowPlacement(v5, Src);
    if ( (_DWORD)v5 )
      RtlCopyVolatileMemory(a2, Src, 0x2CuLL);
  }
  UserSessionSwitchLeaveCrit(v4);
  return (unsigned int)v5;
}
