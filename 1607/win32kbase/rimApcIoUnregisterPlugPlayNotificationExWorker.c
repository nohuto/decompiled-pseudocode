/*
 * XREFs of rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C0081BBC
 * Callers:
 *     rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C0081BB0 (rimNormalApcIoUnregisterPlugPlayNotificationEx.c)
 *     rimRundownApcIoUnregisterPlugPlayNotificationEx @ 0x1C00DB380 (rimRundownApcIoUnregisterPlugPlayNotificationEx.c)
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0010E6C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0010E90 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C0081C70 (rimHandlePnpWaitersOnOwnedDevices.c)
 */

LONG_PTR __fastcall rimApcIoUnregisterPlugPlayNotificationExWorker(__int64 a1)
{
  _BYTE *v1; // rsi
  __int64 v2; // rdi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_BYTE **)(a1 + 88);
  v2 = *(unsigned int *)(a1 + 96);
  RIMLockExclusive((__int64)(v1 + 96));
  rimHandlePnpWaitersOnOwnedDevices(v1, (unsigned int)v2);
  RIMUnlockExclusive((__int64)(v1 + 96));
  IoUnregisterPlugPlayNotificationEx(*(PVOID *)&v1[8 * v2 + 360]);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v4, 1);
  *(_QWORD *)&v1[8 * (unsigned int)v2 + 360] = 0LL;
  *(_DWORD *)&v1[4 * (unsigned int)v2 + 432] = 0;
  if ( v1[72] || v1[73] )
  {
    Win32FreePool();
    *(_QWORD *)&v1[8 * (unsigned int)v2 + 448] = 0LL;
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v4);
  return ObfDereferenceObject(v1);
}
