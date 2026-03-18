/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0122070
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     DCEPtInRect @ 0x1C0085628 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 CurrentProcessWin32Process; // rcx
  int MonitorFlags; // eax
  unsigned int v12; // ebx
  unsigned __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  EnterSharedCrit(1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
    {
      v12 = 0;
      goto LABEL_15;
    }
  }
  v6 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v6 = (unsigned __int64 *)W32UserProbeAddress;
  *v6 = *v6;
  v14 = *a2;
  if ( !a1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) + 224LL) & 1) != 0
    || (v7 = *(_QWORD *)(a1 + 16),
        v8 = PsGetCurrentProcessWin32Process(0x100000000000000LL),
        (unsigned int)SameCoordinateSpace(v8, *(_QWORD *)(v7 + 384))) )
  {
    v9 = v14;
  }
  else
  {
    TransformPointBetweenCoordinateSpaces(&v15, &v14, a1, 0LL);
    v9 = v15;
  }
  if ( DCEPtInRect((_DWORD *)(a1 + 112), v9) )
  {
    CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
LABEL_12:
    MonitorFlags = GetMonitorFlags(CurrentProcessWin32Process);
    LogicalToPhysicalDPIPoint(&v14, &v14, MonitorFlags | 0x100u, 0LL);
    v12 = 1;
    goto LABEL_13;
  }
  v12 = 0;
LABEL_13:
  if ( v12 == 1 )
    *a2 = v14;
LABEL_15:
  UserSessionSwitchLeaveCrit(v4, v5);
  return v12;
}
