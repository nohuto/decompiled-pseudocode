/*
 * XREFs of PopDiagTraceIoCoalescingDiskIdle @ 0x140208FF0
 * Callers:
 *     PopScanIdleList @ 0x140009938 (PopScanIdleList.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIoCoalescingDiskIdle(__int64 a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  __int64 v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_IO_COALESCING_DSK_IDLE) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 8;
      EtwWrite(v1, &POP_ETW_IO_COALESCING_DSK_IDLE, 0LL, 1u, &UserData);
    }
  }
}
