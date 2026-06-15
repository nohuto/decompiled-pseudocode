/*
 * XREFs of PdcpAlpcProcessMessage @ 0x1800AA1B0
 * Callers:
 *     PdcpAlpcCalback @ 0x1800AA150 (PdcpAlpcCalback.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     PdcpProcessMessageInternal @ 0x1800AA38C (PdcpProcessMessageInternal.c)
 *     PdcPrint @ 0x1800AA4B4 (PdcPrint.c)
 */

__int64 __fastcall PdcpAlpcProcessMessage(RTL_SRWLOCK *a1)
{
  PVOID Ptr; // rcx
  int v3; // ebx
  __int64 MessageAttribute; // rbp
  __int64 v6; // [rsp+40h] [rbp-1B8h] BYREF
  _BYTE v7[8]; // [rsp+48h] [rbp-1B0h] BYREF
  _BYTE v8[160]; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v9[240]; // [rsp+F0h] [rbp-108h] BYREF

  memset_0(v8, 0, 0x98uLL);
  AlpcInitializeMessageAttribute(0x20000000LL, v8, 152LL, v7);
  AcquireSRWLockShared(a1 + 2);
  Ptr = a1[1].Ptr;
  if ( Ptr )
  {
    v6 = 240LL;
    v3 = ZwAlpcSendWaitReceivePort(Ptr, 0LL, 0LL, 0LL, v9, &v6, v8, 0LL);
    MessageAttribute = AlpcGetMessageAttribute(v8, 0x20000000LL);
    if ( v3 == -1073741789 )
    {
      PdcPrint(1u, "%s: Error receiving message from PO %x\n");
      v3 = ZwAlpcCancelMessage(a1[1].Ptr, 0LL, MessageAttribute);
      ReleaseSRWLockShared(a1 + 2);
    }
    else
    {
      ReleaseSRWLockShared(a1 + 2);
      if ( v3 >= 0 )
        return (unsigned int)PdcpProcessMessageInternal(a1, v9, MessageAttribute);
      else
        PdcPrint(1u, "%s: Error receiving message from PO %x\n");
    }
  }
  else
  {
    ReleaseSRWLockShared(a1 + 2);
    return (unsigned int)-1073741758;
  }
  return (unsigned int)v3;
}
