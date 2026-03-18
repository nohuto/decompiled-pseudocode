/*
 * XREFs of FCallerOk @ 0x1C00E4510
 * Callers:
 *     xxxSetWindowLong @ 0x1C00E43F0 (xxxSetWindowLong.c)
 *     _SetWindowWord @ 0x1C022845C (_SetWindowWord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FCallerOk(__int64 a1)
{
  __int64 v2; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned int v8; // ebx
  HANDLE v10; // rax
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v2 + 440) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 0xC) == 0 )
    return 0LL;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v2);
  v7 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v10 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v7 = gpidLogon;
    if ( v10 != (HANDLE)gpidLogon )
      return 0LL;
  }
  v8 = 0;
  if ( gbEnforceUIPI )
    return 1LL;
  CurrentProcess = PsGetCurrentProcess(v7, v4, v5, v6);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    return 1LL;
  v12 = *(_QWORD *)(gptiCurrent + 376LL);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL);
  if ( *(_DWORD *)(v12 + 740) == *(_DWORD *)(v13 + 740) )
    return *(_DWORD *)(v12 + 744) == *(_DWORD *)(v13 + 744);
  return v8;
}
