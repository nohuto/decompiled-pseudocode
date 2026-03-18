/*
 * XREFs of rimHandlePnpWaitersOnOwnedDevices @ 0x1C0081C70
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C0081BBC (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00DB06C (WPP_RECORDER_SF_qqq.c)
 */

void __fastcall rimHandlePnpWaitersOnOwnedDevices(__int64 a1, int a2)
{
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  __int64 *i; // rdi
  __int64 *v8; // rbx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-28h]

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)16 )
      v8 = 0LL;
    else
      v8 = i + 6;
    v9 = *((unsigned __int8 *)v8 + 48);
    if ( (v9 == a2 || (_BYTE)v9 == 3 && a2 == 2) && v8[44] == a1 && (v8[23] & 0x10) != 0 )
    {
      WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6, v10, a1, v8[4], v8[41]);
      *((_DWORD *)v8 + 46) &= ~0x10u;
      KeSetEvent((PRKEVENT)v8[46], 1, 0);
    }
  }
  RIMUnlockExclusive((__int64)&gObListLock);
}
