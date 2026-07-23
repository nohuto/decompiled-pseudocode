/*
 * XREFs of SepImageVerificationCallbackWorker @ 0x1404D10DC
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyWithProcessing @ 0x1400098E0 (ExNotifyWithProcessing.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SepImageVerificationCallbackWorker(__int64 a1)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v2[1] = 0LL;
  v2[0] = SepImageVerificationCallbackPreProcess;
  v2[2] = *(_QWORD *)(a1 + 32);
  v2[3] = *(unsigned int *)(a1 + 40);
  ExNotifyWithProcessing((__int64)ExCbSeImageVerificationDriverInfo, 1LL, a1 + 48, (__int64)v2);
  ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0x63734943u);
  ExFreePoolWithTag((PVOID)a1, 0x63734943u);
}
