/*
 * XREFs of NtUserCompositionInputSinkLuidFromPoint @ 0x1C0211200
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxCompositionInputSinkLuidFromPoint @ 0x1C02237C0 (xxxCompositionInputSinkLuidFromPoint.c)
 */

__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(
        int a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int64 a5)
{
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  _OWORD *v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v15; // [rsp+40h] [rbp-78h] BYREF
  __int64 v16; // [rsp+48h] [rbp-70h] BYREF
  __int64 v17; // [rsp+58h] [rbp-60h] BYREF
  _OWORD v18[4]; // [rsp+70h] [rbp-48h] BYREF

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v13 = 0;
  }
  else
  {
    v15 = 0LL;
    v16 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > W32UserProbeAddress )
      a2 = (__int64 *)W32UserProbeAddress;
    v17 = *a2;
    v13 = xxxCompositionInputSinkLuidFromPoint(
            a1,
            (unsigned int)&v17,
            (unsigned int)&v15,
            (unsigned int)&v16,
            (__int64)v18);
    if ( v13 )
    {
      v12 = W32UserProbeAddress;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (_QWORD *)W32UserProbeAddress;
      *a3 = v15;
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= W32UserProbeAddress )
          a4 = (_QWORD *)W32UserProbeAddress;
        *a4 = v16;
      }
      v11 = (_OWORD *)a5;
      if ( a5 )
      {
        if ( a5 >= W32UserProbeAddress )
          v11 = (_OWORD *)W32UserProbeAddress;
        *v11 = v18[0];
        v11[1] = v18[1];
        v11[2] = v18[2];
        v11[3] = v18[3];
      }
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v13;
}
