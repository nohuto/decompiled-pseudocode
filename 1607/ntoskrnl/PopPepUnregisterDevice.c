/*
 * XREFs of PopPepUnregisterDevice @ 0x14066F9A4
 * Callers:
 *     PopFxUnregisterDevice @ 0x14066D670 (PopFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     PopPepProcessEvent @ 0x1400C00D8 (PopPepProcessEvent.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140130DD8 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepRemoveDevice @ 0x140206AE8 (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x140206E1C (PopPepWaitForDeviceRelease.c)
 */

void __fastcall PopPepUnregisterDevice(__int64 *a1)
{
  unsigned int v2; // edi
  int v3; // eax
  unsigned int v4; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x92u, 3u, "PopPep: unregister device (0x%p)\n", a1);
  v2 = 0;
  PopPepProcessEvent((__int64)a1, 0LL, 6u, 5u, (__int64)Timeout, 0LL);
  KeWaitForSingleObject(a1 + 5, Executive, 0, 0, 0LL);
  PopPepWaitForDeviceRelease((__int64)a1);
  PopPepRemoveDevice(a1);
  v3 = *((_DWORD *)a1 + 39);
  v4 = 0;
  if ( v3 != 4 )
    v4 = *((_DWORD *)a1 + v3 + 35);
  PopPepUpdateIdleStateRefCount(v4, 0, 0);
  if ( *((_DWORD *)a1 + 42) )
  {
    do
      PopPepUpdateIdleStateRefCount(*(_DWORD *)(a1[25 * v2++ + 46] + 16), 0, 0);
    while ( v2 < *((_DWORD *)a1 + 42) );
  }
  ExFreePoolWithTag(a1, 0x54706550u);
}
