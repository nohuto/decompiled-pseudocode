/*
 * XREFs of NtUserCompositionInputSinkLuidFromPoint @ 0x1C0218780
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxCompositionInputSinkLuidFromPoint @ 0x1C022D750 (xxxCompositionInputSinkLuidFromPoint.c)
 */

__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(1LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v9 = 0;
  }
  else
  {
    v11 = 0LL;
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > W32UserProbeAddress )
      a1 = (__int64 *)W32UserProbeAddress;
    v12 = *a1;
    v9 = xxxCompositionInputSinkLuidFromPoint(&v12, &v11);
    if ( v9 )
    {
      v8 = W32UserProbeAddress;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_QWORD *)W32UserProbeAddress;
      *a2 = v11;
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v9;
}
