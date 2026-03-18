/*
 * XREFs of xxxMNSwitchToAlternateMenu @ 0x1402DA6FC
 * Callers:
 *     xxxMNMouseMove @ 0x14000F5A4 (xxxMNMouseMove.c)
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     xxxMNKeyFilter @ 0x1402FC2DC (xxxMNKeyFilter.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxMNSwitchToAlternateMenu(__int64 **a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v5; // rcx
  int v6; // ecx
  __int64 *v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF

  v2 = *a1;
  v11 = 0LL;
  if ( (*(_DWORD *)*v2 & 1) == 0 || !*(_QWORD *)(**a1 + 48) || (*(_DWORD *)**a1 & 0x8000) != 0 )
    return 0LL;
  if ( !*(_QWORD *)(**a1 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1061);
  if ( !a2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1063);
    return 0LL;
  }
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, *(_QWORD *)(**a1 + 8));
  xxxMNSelectItem(a1, a2, -1);
  if ( !*(_QWORD *)(**a1 + 48) || (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(**a1 + 48)) + 25) & 1) != 0 )
  {
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    return 0LL;
  }
  if ( !*(_QWORD *)(**a1 + 40)
    || *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 80LL) != *(_QWORD *)(*(_QWORD *)(**a1 + 48) + 80LL) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1084);
  }
  v8 = &v11;
  v9 = *(_QWORD *)(**a1 + 48);
  HMAssignmentLock(&v8, 0LL);
  v5 = **a1 + 48;
  v9 = *(_QWORD *)(**a1 + 40);
  v8 = (__int64 *)v5;
  HMAssignmentLock(&v8, 0LL);
  v8 = (__int64 *)(**a1 + 40);
  v9 = v11;
  HMAssignmentLock(&v8, 0LL);
  HMAssignmentUnlock(&v11);
  if ( !*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) )
    {
      v6 = 0;
      if ( *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) == *(_QWORD *)(**a1 + 40) )
        v6 = 2;
    }
    else
    {
      v6 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 40LL) & 0x80) != 0 ? 2 : 0;
    }
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 8) & 0xFFFFFFFD | v6;
  }
  else
  {
    *(_DWORD *)(a2 + 8) &= ~2u;
  }
  *(_DWORD *)**a1 ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)(2 * *(_DWORD *)(a2 + 8))) & 4;
  xxxWindowEvent(5u, *(struct tagWND **)(**a1 + 8), ~(*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  xxxWindowEvent(4u, *(struct tagWND **)(**a1 + 8), (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  return 1LL;
}
