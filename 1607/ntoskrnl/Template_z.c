/*
 * XREFs of Template_z @ 0x1401CDE1C
 * Callers:
 *     PnpLogActionQueueEvent @ 0x14008610C (PnpLogActionQueueEvent.c)
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 *     PnpProcessTargetDeviceEvent @ 0x14048A17C (PnpProcessTargetDeviceEvent.c)
 *     PnpInsertEventInQueue @ 0x14048AC64 (PnpInsertEventInQueue.c)
 *     PiUEventSendDeviceInstallNotification @ 0x14062E6E0 (PiUEventSendDeviceInstallNotification.c)
 *     PiCMQueryRemove @ 0x14064810C (PiCMQueryRemove.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_z(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  ULONG v5; // ecx
  const wchar_t *v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  UserData.Size = v5;
  v6 = L"NULL";
  UserData.Reserved = 0;
  if ( a4 )
    v6 = a4;
  UserData.Ptr = (ULONGLONG)v6;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 1u, &UserData);
}
