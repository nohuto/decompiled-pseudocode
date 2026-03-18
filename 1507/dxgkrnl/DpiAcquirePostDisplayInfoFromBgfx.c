/*
 * XREFs of DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00DBCF0
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C00BBD90 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C00BC1D0 (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleDevicePower @ 0x1C00BC6D0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapterThread @ 0x1C00C7120 (DpiFdoStartAdapterThread.c)
 *     DpiFdoDetectPostDevice @ 0x1C00DBAF0 (DpiFdoDetectPostDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall DpiAcquirePostDisplayInfoFromBgfx(char *a1, char a2)
{
  NTSTATUS v4; // ebp
  int v5; // ecx
  int v6; // eax
  NTSTATUS SystemInformation; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+2Ch] [rbp-2Ch]
  int v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+38h] [rbp-20h]

  v4 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &v15, 0x20u, 0LL);
  if ( v4 < 0 )
  {
    memset(a1, 0, 0x20uLL);
    *((_DWORD *)a1 + 6) = -1;
    memset(a1 + 32, 0, 0x80uLL);
  }
  else
  {
    v5 = v16;
    *((_DWORD *)a1 + 6) = -1;
    *((_DWORD *)a1 + 7) = 0;
    *(_DWORD *)a1 = v5;
    *((_DWORD *)a1 + 1) = v17;
    *((_QWORD *)a1 + 2) = v15;
    if ( v19 == 3 )
    {
      v6 = v18;
      *((_DWORD *)a1 + 3) = 20;
      *((_DWORD *)a1 + 2) = 3 * v6;
    }
    else if ( v19 == 4 )
    {
      *((_DWORD *)a1 + 2) = 4 * v18;
      *((_DWORD *)a1 + 3) = 22;
    }
    else
    {
      memset(a1, 0, 0x20uLL);
      *((_DWORD *)a1 + 6) = -1;
      memset(a1 + 32, 0, 0x80uLL);
    }
    SystemInformation = ZwQuerySystemInformation(SystemTimeAdjustmentInformation|0x80, a1 + 32, 0x80u, 0LL);
    v8 = SystemInformation;
    if ( SystemInformation < 0 )
    {
      memset(a1 + 32, 0, 0x80uLL);
      v13 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      *(_QWORD *)(v13 + 24) = DpiAcquirePostDisplayInfoFromBgfx;
      *(_QWORD *)(v13 + 32) = v8;
      WdLogEvent5_WdWarning(v13);
    }
  }
  if ( a2 )
    return InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
  else
    return (unsigned int)v4;
}
