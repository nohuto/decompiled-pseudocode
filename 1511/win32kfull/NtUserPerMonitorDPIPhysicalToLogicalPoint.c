/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C021E840
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     DCEPtInRect @ 0x1C0075580 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 *v6; // rdx
  __int64 v7; // rsi
  __int64 CurrentProcessWin32Process; // rax
  int MonitorFlags; // eax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
      goto LABEL_15;
  }
  v6 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v6 = (unsigned __int64 *)W32UserProbeAddress;
  *v6 = *v6;
  v14 = *a2;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) == 0 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
      SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v7 + 376));
    }
    MonitorFlags = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL));
    PhysicalToLogicalDPIPoint(&v14, &v14, MonitorFlags | 0x100u, 0LL);
    if ( !DCEPtInRect((_DWORD *)(a1 + 112), v14) )
    {
      LODWORD(a1) = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v11 = PsGetCurrentProcessWin32Process(v4);
    v12 = GetMonitorFlags(v11);
    PhysicalToLogicalDPIPoint(&v14, &v14, v12 | 0x100u, 0LL);
    v10 = v14;
  }
  LODWORD(a1) = 1;
LABEL_13:
  if ( (_DWORD)a1 )
  {
    *a2 = v10;
    LODWORD(a1) = 1;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v4, v5);
  return (unsigned int)a1;
}
