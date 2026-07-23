/*
 * XREFs of DbgkForwardException @ 0x1404BF254
 * Callers:
 *     KiSchedulerApc @ 0x1400C95C0 (KiSchedulerApc.c)
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeCopyExceptionRecord @ 0x140171CB8 (KeCopyExceptionRecord.c)
 *     PsSetProcessFaultInformation @ 0x1404D2AC8 (PsSetProcessFaultInformation.c)
 *     PsCaptureExceptionPort @ 0x1404EC620 (PsCaptureExceptionPort.c)
 *     DbgkpSendApiMessage @ 0x14061A3C0 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x14061A4BC (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 */

bool __fastcall DbgkForwardException(__int64 a1, char a2, char a3)
{
  char v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  void *v9; // rbx
  __int64 v11; // r8
  int v12; // esi
  int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v15[17]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = 1;
  if ( a3 )
  {
    v14 = 1LL;
    PsSetProcessFaultInformation(KeGetCurrentThread()->ApcState.Process, &v14);
  }
  DWORD2(v15[2]) = 0;
  *(_QWORD *)&v15[0] = 0x800D000A8LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 4) != 0 )
      v9 = 0LL;
    else
      v9 = (void *)Process[1].ActiveProcessors.Bitmap[6];
    v6 = 0;
  }
  else
  {
    v9 = (void *)PsCaptureExceptionPort(CurrentThread->ApcState.Process);
    DWORD1(v15[0]) = 7;
  }
  if ( !v9 && a2 )
    return 0;
  KeCopyExceptionRecord(&v15[3], a1);
  DWORD2(v15[12]) = a3 == 0;
  if ( v6 )
  {
    if ( !v9 )
    {
      v13 = -2147418111;
      v12 = 0;
      HIDWORD(v15[2]) = -2147418111;
      goto LABEL_18;
    }
    LOBYTE(v11) = a2;
    v12 = DbgkpSendApiMessageLpc(v15, v9, v11);
    ObfDereferenceObject(v9);
  }
  else
  {
    v12 = DbgkpSendApiMessage(Process);
  }
  v13 = HIDWORD(v15[2]);
LABEL_18:
  if ( v12 < 0 )
    return 0;
  if ( v13 == -2147418111 )
  {
    if ( !a2 )
    {
      v13 = DbgkpSendErrorMessage(a1, 2LL, v15);
      return v13 >= 0;
    }
    return 0;
  }
  return v13 >= 0;
}
