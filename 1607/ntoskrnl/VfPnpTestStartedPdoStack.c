/*
 * XREFs of VfPnpTestStartedPdoStack @ 0x1407186C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VfIrpSendSynchronousIrp @ 0x14070BF30 (VfIrpSendSynchronousIrp.c)
 */

__int64 __fastcall VfPnpTestStartedPdoStack(struct _DEVICE_OBJECT *a1)
{
  PVOID v2; // rbx
  _BYTE v4[32]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v5[10]; // [rsp+60h] [rbp-19h] BYREF
  NTSTATUS v6; // [rsp+E8h] [rbp+6Fh] BYREF
  PVOID P; // [rsp+F0h] [rbp+77h] BYREF

  memset(v5, 0, 0x48uLL);
  LOWORD(v5[0]) = -229;
  VfIrpSendSynchronousIrp(a1, (__int64)v5, 1, -1073741637, 0LL, 0LL, 0LL);
  LODWORD(v5[1]) = -1;
  BYTE1(v5[0]) = 7;
  VfIrpSendSynchronousIrp(a1, (__int64)v5, 1, -1073741637, 0LL, 0LL, 0LL);
  if ( (MmVerifierData & 0x10) != 0 )
  {
    BYTE1(v5[0]) = 7;
    LODWORD(v5[1]) = -1;
    VfIrpSendSynchronousIrp(a1, (__int64)v5, 1, -1073741637, 0xFFFFFFFFFFFFFFFFuLL, 0LL, 0LL);
  }
  BYTE1(v5[0]) = 12;
  LODWORD(v5[1]) = -1;
  VfIrpSendSynchronousIrp(a1, (__int64)v5, 1, -1073741637, 0LL, 0LL, 0LL);
  BYTE1(v5[0]) = 19;
  LODWORD(v5[1]) = -1;
  VfIrpSendSynchronousIrp(a1, (__int64)v5, 1, -1073741637, 0LL, 0LL, 0LL);
  BYTE1(v5[0]) = 7;
  LODWORD(v5[1]) = 4;
  P = 0LL;
  if ( (unsigned int)VfIrpSendSynchronousIrp(a1, (__int64)v5, 0, -1073741637, 0LL, (ULONG_PTR *)&P, &v6) && v6 >= 0 )
  {
    v2 = P;
    ObfDereferenceObject(*((PVOID *)P + 1));
    ExFreePoolWithTag(v2, 0);
  }
  memset(v4, 0, sizeof(v4));
  v5[3] = v4;
  BYTE1(v5[0]) = 8;
  LODWORD(v5[2]) = 0x1FFFF;
  v5[1] = &GUID_BOGUS_INTERFACE;
  v5[4] = -1LL;
  VfIrpSendSynchronousIrp(a1, (__int64)v5, 1, -1073741637, 0LL, 0LL, 0LL);
  memset(v4, 0, sizeof(v4));
  v5[3] = v4;
  BYTE1(v5[0]) = 8;
  LODWORD(v5[2]) = 0x1FFFF;
  v5[1] = &GUID_BOGUS_INTERFACE;
  v5[4] = -1LL;
  return VfIrpSendSynchronousIrp(a1, (__int64)v5, 1, 0, 0LL, 0LL, 0LL);
}
