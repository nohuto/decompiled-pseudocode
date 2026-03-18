/*
 * XREFs of InitializePowerRequestList @ 0x1C013C6F0
 * Callers:
 *     NtUserInitialize @ 0x1C007DC70 (NtUserInitialize.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 */

NTSTATUS __fastcall InitializePowerRequestList(void *a1)
{
  NTSTATUS result; // eax
  struct _FAST_MUTEX *v2; // rax
  signed __int32 v3[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  qword_1C01048F0 = (__int64)&gPowerRequestList;
  gPowerRequestList.Flink = &gPowerRequestList;
  result = ObReferenceObjectByHandle(a1, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  gpEventPowerRequest = (PRKEVENT)Object;
  if ( result >= 0 )
  {
    v2 = (struct _FAST_MUTEX *)Win32AllocPoolNonPaged();
    gpPowerRequestMutex = v2;
    if ( v2 )
    {
      v2->Owner = 0LL;
      v2->Contention = 0;
      v2->Count = 1;
      KeInitializeEvent(&v2->Event, SynchronizationEvent, 0);
      gbPowerCalloutsReady = 1;
      _InterlockedOr(v3, 0);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
