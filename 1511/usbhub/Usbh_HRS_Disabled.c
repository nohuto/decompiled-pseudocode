/*
 * XREFs of Usbh_HRS_Disabled @ 0x1C0025FD4
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001212C (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     UsbhReleaseResetLock @ 0x1C0004198 (UsbhReleaseResetLock.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_Disabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  _DWORD *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KSEMAPHORE *v14; // rax
  unsigned int v15; // ebx
  __int64 Limit; // rcx
  unsigned int v18; // r8d

  v5 = (int)a2;
  v6 = FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  FdoExt(*(_QWORD *)(a1 + 8), v7, v8, v9);
  v10 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920156755, a1, v5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_6cc22cc90471b0ccfbf317bb759a7998_Traceguids,
      v5);
  if ( (_DWORD)v5 != 1 )
  {
    if ( (_DWORD)v5 != 2 )
    {
      if ( (_DWORD)v5 == 3 || (_DWORD)v5 == 9 )
      {
        v6[640] |= 0x10u;
      }
      else if ( (int)v5 <= 9 || (int)v5 > 11 )
      {
        v18 = v10;
        return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v18);
      }
    }
    v18 = 1;
    return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v18);
  }
  v14 = (struct _KSEMAPHORE *)FdoExt(*(_QWORD *)(a1 + 8), v11, v12, v13);
  v15 = 2;
  v14[87].Limit = 2;
  *(_DWORD *)(a1 + 68) = 2;
  *(_DWORD *)(a1 + 64) = 1734964085;
  Limit = (unsigned int)v14[28].Limit;
  v14[41].Header.WaitListHead.Flink = 0LL;
  v14[Limit + 29].Header.SignalState = 2;
  KeReleaseSemaphore(v14 + 88, 16, 1, 0);
  return v15;
}
