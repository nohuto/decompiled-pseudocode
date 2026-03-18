/*
 * XREFs of FCallerOk @ 0x1C0080DDC
 * Callers:
 *     xxxSetWindowLong @ 0x1C0080CF0 (xxxSetWindowLong.c)
 *     xxxSetWindowLongPtr @ 0x1C00FBAB4 (xxxSetWindowLongPtr.c)
 *     _SetWindowWord @ 0x1C022815C (_SetWindowWord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FCallerOk(__int64 a1)
{
  __int64 v2; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  HANDLE v8; // rax
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v2 + 448) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 448LL) & 0xC) == 0 )
    return 0LL;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v2);
  v5 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v8 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v5 = gpidLogon;
    if ( v8 != (HANDLE)gpidLogon )
      return 0LL;
  }
  v6 = 0;
  if ( gbEnforceUIPI )
    return 1LL;
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    return 1LL;
  v10 = *(_QWORD *)(gptiCurrent + 384LL);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
  if ( *(_DWORD *)(v10 + 740) == *(_DWORD *)(v11 + 740) )
    return *(_DWORD *)(v10 + 744) == *(_DWORD *)(v11 + 744);
  return v6;
}
