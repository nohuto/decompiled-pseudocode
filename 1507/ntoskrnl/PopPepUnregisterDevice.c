/*
 * XREFs of PopPepUnregisterDevice @ 0x1406B72FC
 * Callers:
 *     PopFxUnregisterDevice @ 0x1406B4870 (PopFxUnregisterDevice.c)
 * Callees:
 *     PopPepProcessEvent @ 0x140027CF4 (PopPepProcessEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1401386E8 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepRemoveDevice @ 0x14023C408 (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x14023C834 (PopPepWaitForDeviceRelease.c)
 */

void __fastcall PopPepUnregisterDevice(int *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int v7; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x92u, 3u, "PopPep: unregister device (0x%p)\n", a1);
  v2 = 0;
  PopPepProcessEvent((__int64)a1, 0LL, 6, 5u, (__int64)Timeout, 0LL);
  KeWaitForSingleObject(a1 + 10, Executive, 0, 0, 0LL);
  PopPepWaitForDeviceRelease((__int64)a1);
  PopPepRemoveDevice((__int64 *)a1, v3, v4, v5);
  v6 = a1[39];
  v7 = 0;
  if ( (_DWORD)v6 != 4 )
    v7 = a1[v6 + 35];
  PopPepUpdateIdleStateRefCount(v7, 0, 0);
  if ( a1[42] )
  {
    do
      PopPepUpdateIdleStateRefCount(*(_DWORD *)(*(_QWORD *)&a1[50 * v2++ + 92] + 16LL), 0, 0);
    while ( v2 < a1[42] );
  }
  ExFreePoolWithTag(a1, 0x54706550u);
}
