/*
 * XREFs of PopPepUnregisterDevice @ 0x14063749C
 * Callers:
 *     PopFxUnregisterDevice @ 0x14063517C (PopFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PopPepProcessEvent @ 0x1400DB930 (PopPepProcessEvent.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14012605C (PopPepUpdateIdleStateRefCount.c)
 *     PopPepRemoveDevice @ 0x1401EE138 (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x1401EE46C (PopPepWaitForDeviceRelease.c)
 */

void __fastcall PopPepUnregisterDevice(int *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  unsigned int v4; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x92u, 3u, "PopPep: unregister device (0x%p)\n", a1);
  v2 = 0;
  PopPepProcessEvent((__int64)a1, 0LL, 6u, 5u, (__int64)Timeout, 0LL);
  KeWaitForSingleObject(a1 + 10, Executive, 0, 0, 0LL);
  PopPepWaitForDeviceRelease((__int64)a1);
  PopPepRemoveDevice((__int64 *)a1);
  v3 = a1[39];
  v4 = 0;
  if ( (_DWORD)v3 != 4 )
    v4 = a1[v3 + 35];
  PopPepUpdateIdleStateRefCount(v4, 0, 0LL);
  if ( a1[42] )
  {
    do
      PopPepUpdateIdleStateRefCount(*(_DWORD *)(*(_QWORD *)&a1[50 * v2++ + 92] + 16LL), 0, 0LL);
    while ( v2 < a1[42] );
  }
  ExFreePoolWithTag(a1, 0x54706550u);
}
