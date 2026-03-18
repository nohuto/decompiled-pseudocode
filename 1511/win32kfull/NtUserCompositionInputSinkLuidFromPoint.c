/*
 * XREFs of NtUserCompositionInputSinkLuidFromPoint @ 0x1C0218550
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxCompositionInputSinkLuidFromPoint @ 0x1C022DA54 (xxxCompositionInputSinkLuidFromPoint.c)
 */

__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(
        int a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  _OWORD *v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v18; // [rsp+40h] [rbp-78h] BYREF
  __int64 v19; // [rsp+48h] [rbp-70h] BYREF
  __int64 v20; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v21[4]; // [rsp+70h] [rbp-48h] BYREF

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v16 = 0;
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > W32UserProbeAddress )
      a2 = (__int64 *)W32UserProbeAddress;
    v20 = *a2;
    v16 = xxxCompositionInputSinkLuidFromPoint(
            a1,
            (unsigned int)&v20,
            (unsigned int)&v18,
            (unsigned int)&v19,
            (__int64)v21);
    if ( v16 )
    {
      v15 = W32UserProbeAddress;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (_QWORD *)W32UserProbeAddress;
      *a3 = v18;
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= W32UserProbeAddress )
          a4 = (_QWORD *)W32UserProbeAddress;
        *a4 = v19;
      }
      v14 = (_OWORD *)a5;
      if ( a5 )
      {
        if ( a5 >= W32UserProbeAddress )
          v14 = (_OWORD *)W32UserProbeAddress;
        *v14 = v21[0];
        v14[1] = v21[1];
        v14[2] = v21[2];
        v14[3] = v21[3];
      }
    }
  }
  UserSessionSwitchLeaveCrit(v15, v14);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v16;
}
