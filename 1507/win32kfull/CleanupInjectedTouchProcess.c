/*
 * XREFs of CleanupInjectedTouchProcess @ 0x1C01DC600
 * Callers:
 *     _InitializeTouchInjectionWithQDCData @ 0x1C01DC9E8 (_InitializeTouchInjectionWithQDCData.c)
 * Callees:
 *     WakeRIT @ 0x1C00F42E4 (WakeRIT.c)
 */

__int64 __fastcall CleanupInjectedTouchProcess(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  void *v4; // rbx
  __int64 v5; // rbp
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx

  v2 = *(_QWORD **)(a1 + 848);
  if ( LODWORD(aDeviceTemplate[154]) )
  {
    v4 = (void *)v2[10];
    v5 = v2[11];
    if ( v4 && v5 )
    {
      HMAssignmentUnlock(v2 + 1);
      RIMRemoveInjectionDevice(v4, v5);
      ZwClose(v4);
    }
    Win32FreePool(v2[9]);
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 848) = 0LL;
  }
  else
  {
    *(_WORD *)(v2[1] + 66LL) = 8;
    EnterDeviceInfoListCrit_(8LL);
    HMAssignmentUnlock(v2 + 1);
    LeaveDeviceInfoListCrit_(v3);
    Win32FreePool(v2[9]);
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 848) = 0LL;
    WakeRIT(2u);
  }
  v6 = (_QWORD *)gpTouchInjectorProcesses;
  v7 = 0LL;
  while ( v6 )
  {
    if ( v6[1] == a1 )
    {
      if ( v7 )
        *v7 = *v6;
      else
        gpTouchInjectorProcesses = *v6;
      Win32FreePool(v6);
      return 1LL;
    }
    v7 = v6;
    v6 = (_QWORD *)*v6;
  }
  return 1LL;
}
