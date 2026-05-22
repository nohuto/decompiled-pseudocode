/*
 * XREFs of ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18007286C
 * Callers:
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x180071F60 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18007DC14 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z @ 0x180073258 (-RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::InitializeSyncObjects(RIMDeviceCollection *this)
{
  HANDLE CurrentProcess; // rax
  void *v3; // rbp
  HANDLE EventW; // rax
  __int64 v5; // rcx
  signed int LastError; // ebx
  HANDLE v7; // rax
  __int64 v8; // rcx
  RIMDeviceCollection *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  HANDLE v13; // rax
  __int64 v14; // rcx
  RIMDeviceCollection *v15; // rcx
  HANDLE WaitableTimer; // rax
  __int64 v17; // rcx
  RIMDeviceCollection *v18; // rcx
  HANDLE v19; // rax
  __int64 v20; // rcx
  RIMDeviceCollection *v21; // rcx
  HANDLE TargetHandle; // [rsp+60h] [rbp+8h] BYREF

  CurrentProcess = GetCurrentProcess();
  TargetHandle = 0LL;
  v3 = CurrentProcess;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 5) = EventW;
  if ( !EventW )
  {
    LastError = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
    if ( LastError < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v5, &MinInput_Warning_CheckResult, 2, 799, LastError);
      return (unsigned int)LastError;
    }
  }
  v7 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 6) = v7;
  if ( !v7 )
  {
    LastError = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
    if ( LastError < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v8, &MinInput_Warning_CheckResult, 2, 810, LastError);
      return (unsigned int)LastError;
    }
  }
  if ( !DuplicateHandle(v3, *((HANDLE *)this + 6), v3, &TargetHandle, 0, 0, 2u) )
  {
    LastError = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
    if ( LastError < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq((__int64)v9, &MinInput_Warning_CheckResult, 2, 822, LastError);
      return (unsigned int)LastError;
    }
  }
  v10 = RIMDeviceCollection::RegisterWaitHandler(
          v9,
          TargetHandle,
          (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMPnpEventStatic,
          this);
  LastError = v10;
  if ( v10 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return (unsigned int)LastError;
    v12 = 828;
    goto LABEL_76;
  }
  v13 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 7) = v13;
  if ( v13
    || ((int)GetLastError() > 0
      ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
      : (LastError = GetLastError()),
        LastError >= 0) )
  {
    if ( DuplicateHandle(v3, *((HANDLE *)this + 7), v3, &TargetHandle, 0, 0, 2u)
      || ((int)GetLastError() > 0
        ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
        : (LastError = GetLastError()),
          LastError >= 0) )
    {
      v10 = RIMDeviceCollection::RegisterWaitHandler(
              v15,
              TargetHandle,
              (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMDeferredRead,
              this);
      LastError = v10;
      if ( v10 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return (unsigned int)LastError;
        v12 = 856;
        goto LABEL_76;
      }
      WaitableTimer = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
      *((_QWORD *)this + 8) = WaitableTimer;
      if ( WaitableTimer
        || ((int)GetLastError() > 0
          ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
          : (LastError = GetLastError()),
            LastError >= 0) )
      {
        if ( DuplicateHandle(v3, *((HANDLE *)this + 8), v3, &TargetHandle, 0, 0, 2u)
          || ((int)GetLastError() > 0
            ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
            : (LastError = GetLastError()),
              LastError >= 0) )
        {
          v10 = RIMDeviceCollection::RegisterWaitHandler(
                  v18,
                  TargetHandle,
                  (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMTimerEventStatic,
                  this);
          LastError = v10;
          if ( v10 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              return (unsigned int)LastError;
            v12 = 884;
            goto LABEL_76;
          }
          v19 = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
          *((_QWORD *)this + 9) = v19;
          if ( v19
            || ((int)GetLastError() > 0
              ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
              : (LastError = GetLastError()),
                LastError >= 0) )
          {
            if ( DuplicateHandle(v3, *((HANDLE *)this + 9), v3, &TargetHandle, 0, 0, 2u)
              || ((int)GetLastError() > 0
                ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
                : (LastError = GetLastError()),
                  LastError >= 0) )
            {
              v10 = RIMDeviceCollection::RegisterWaitHandler(
                      v21,
                      TargetHandle,
                      (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMAutoRepeatEventStatic,
                      this);
              LastError = v10;
              if ( v10 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
                return (unsigned int)LastError;
              v12 = 911;
LABEL_76:
              Template_qqq(v11, &MinInput_Warning_CheckResult, 2, v12, v10);
              return (unsigned int)LastError;
            }
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq((__int64)v21, &MinInput_Warning_CheckResult, 2, 905, LastError);
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            Template_qqq(v20, &MinInput_Warning_CheckResult, 2, 893, LastError);
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          Template_qqq((__int64)v18, &MinInput_Warning_CheckResult, 2, 878, LastError);
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v17, &MinInput_Warning_CheckResult, 2, 866, LastError);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq((__int64)v15, &MinInput_Warning_CheckResult, 2, 850, LastError);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v14, &MinInput_Warning_CheckResult, 2, 838, LastError);
  }
  return (unsigned int)LastError;
}
