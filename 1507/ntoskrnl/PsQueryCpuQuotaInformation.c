/*
 * XREFs of PsQueryCpuQuotaInformation @ 0x1401707F4
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiGetNextSession @ 0x1400FD468 (MiGetNextSession.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x14046A53C (MmGetSessionSchedulingGroupByProcess.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     MmQuitNextSession @ 0x14051C278 (MmQuitNextSession.c)
 */

__int64 __fastcall PsQueryCpuQuotaInformation(_DWORD *Address, SIZE_T Length, KPROCESSOR_MODE PreviousMode, _DWORD *a4)
{
  SIZE_T v6; // rdi
  unsigned int v9; // r14d
  __int64 v10; // rdi
  _QWORD *i; // rcx
  __int64 NextSession; // rax
  _QWORD *v13; // rsi
  struct _KPROCESS *v14; // rcx
  unsigned __int16 *SessionSchedulingGroupByProcess; // r12

  v6 = (unsigned int)Length;
  if ( !PsCpuFairShareEnabled )
    return 3221225897LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( (_DWORD)v6 )
  {
    if ( (((_BYTE)v6 - 4) & 7) != 0 || (unsigned int)v6 < 4 )
      return 3221225476LL;
    v9 = (unsigned int)(v6 - 4) >> 3;
    if ( PreviousMode == 1 )
      ProbeForWrite(Address, v6, 4u);
  }
  else
  {
    v9 = 0;
    Address = 0LL;
  }
  v10 = 0LL;
  for ( i = 0LL; ; i = v13 )
  {
    NextSession = MiGetNextSession(i);
    v13 = (_QWORD *)NextSession;
    if ( !NextSession )
      break;
    SessionSchedulingGroupByProcess = (unsigned __int16 *)MmGetSessionSchedulingGroupByProcess(NextSession);
    if ( SessionSchedulingGroupByProcess )
    {
      if ( (unsigned int)v10 < v9 )
      {
        Address[2 * v10 + 1] = MmGetSessionIdEx(v14);
        Address[2 * v10 + 2] = *SessionSchedulingGroupByProcess;
      }
      v10 = (unsigned int)(v10 + 1);
    }
  }
  if ( Address )
    *Address = v10;
  *a4 = 8 * v10 + 4;
  return v9 < (unsigned int)v10 ? 0xC0000023 : 0;
}
