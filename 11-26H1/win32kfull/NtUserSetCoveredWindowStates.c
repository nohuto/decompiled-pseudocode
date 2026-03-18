/*
 * XREFs of NtUserSetCoveredWindowStates @ 0x14027A070
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??0DeferQoSReport@@QEAA@W4DeferQoSReportType@@@Z @ 0x14021DD18 (--0DeferQoSReport@@QEAA@W4DeferQoSReportType@@@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtUserSetCoveredWindowStates(__int64 a1, unsigned int a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  QualityOfService *v8; // rcx
  unsigned int i; // edi
  tagWND *v10; // rax
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v15; // [rsp+50h] [rbp-18h]
  char v16; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
  if ( (unsigned int)IsCurrentProcessDwm(v7) )
  {
    DeferQoSReport::DeferQoSReport((QualityOfService *)&v16, a3 == 0);
    for ( i = 0; i < a2; ++i )
    {
      v13 = 0LL;
      RtlCopyFromUser(&v13, (void *)(a1 + 16LL * i), 0x10uLL);
      v15 = v13;
      v10 = (tagWND *)ValidateHwndStrict(v13);
      if ( v10 )
      {
        *((_DWORD *)v10 + 98) = DWORD2(v13);
        tagWND::ComputeDominantState(v10);
      }
    }
    if ( v16 )
      QualityOfService::EndDeferReport(v8);
    v6 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14);
  UserSessionSwitchLeaveCrit(v11);
  return v6;
}
