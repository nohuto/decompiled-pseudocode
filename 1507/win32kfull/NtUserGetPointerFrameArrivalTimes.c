/*
 * XREFs of NtUserGetPointerFrameArrivalTimes @ 0x1C021B6C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     GetPointerFrameArrivalTimesInternal @ 0x1C01E0BE8 (GetPointerFrameArrivalTimesInternal.c)
 */

__int64 __fastcall NtUserGetPointerFrameArrivalTimes(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v6; // r15
  unsigned int PointerFrameArrivalTimesInternal; // ebx
  __int64 v8; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  v6 = EnterSharedCrit(1LL);
  PointerFrameArrivalTimesInternal = 0;
  if ( !a1 || HIWORD(a1) || (v8 = a2 - 1, (unsigned int)v8 > 0x63) || !a3 || a1 == 1 )
  {
    UserSetLastError(87);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
    ProbeForWrite(a3, 8LL * a2, CurrentProcessWow64Process != 0 ? 1 : 4);
    PointerFrameArrivalTimesInternal = GetPointerFrameArrivalTimesInternal(v6, a1, a2, (unsigned __int64 *)a3);
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return PointerFrameArrivalTimesInternal;
}
