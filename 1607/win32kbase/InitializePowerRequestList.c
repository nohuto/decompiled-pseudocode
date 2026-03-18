/*
 * XREFs of InitializePowerRequestList @ 0x1C01550AC
 * Callers:
 *     NtUserInitialize @ 0x1C0051920 (NtUserInitialize.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C00531CC (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

NTSTATUS __fastcall InitializePowerRequestList(HANDLE Handle)
{
  unsigned int *v2; // rbx
  int v3; // edi
  NTSTATUS result; // eax
  struct _FAST_MUTEX *v5; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-A9h] BYREF
  unsigned __int8 OutputBuffer[4]; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-75h] BYREF
  PVOID Object; // [rsp+38h] [rbp-71h] BYREF
  _DWORD InputBuffer[20]; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v11[20]; // [rsp+90h] [rbp-19h] BYREF

  ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, OutputBuffer, 1u);
  v2 = (unsigned int *)&unk_1C0118A50;
  gSystemIsAoAc = OutputBuffer[0];
  v3 = 0;
  do
  {
    if ( (unsigned int)GetConfigUlong(
                         L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Power",
                         *((PCWSTR *)v2 - 1),
                         &v8) == 1 )
    {
      *v2 = v8;
    }
    else if ( gSystemIsAoAc != 1 )
    {
      goto LABEL_4;
    }
    ++v3;
    v2 += 6;
  }
  while ( (unsigned __int64)v3 < 5 );
  memset(InputBuffer, 0, sizeof(InputBuffer));
  InputBuffer[0] = 21;
  result = ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x50u, &gpRequestQueueWatchdog, 8u);
  if ( result < 0 )
    return result;
  memset(v11, 0, sizeof(v11));
  v11[0] = 21;
  result = ZwPowerInformation(SystemPowerStateLogging|0x40, v11, 0x50u, &gpRequestWorkerWatchdog, 8u);
  if ( result < 0 )
    return result;
LABEL_4:
  qword_1C011BCF8 = (__int64)&gPowerRequestList;
  gPowerRequestList.Flink = &gPowerRequestList;
  result = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  gpEventPowerRequest = (PRKEVENT)Object;
  if ( result >= 0 )
  {
    v5 = (struct _FAST_MUTEX *)Win32AllocPoolNonPaged();
    gpPowerRequestMutex = v5;
    if ( v5 )
    {
      v5->Owner = 0LL;
      v5->Contention = 0;
      v5->Count = 1;
      KeInitializeEvent(&v5->Event, SynchronizationEvent, 0);
      gbPowerCalloutsReady = 1;
      _InterlockedOr(v6, 0);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
