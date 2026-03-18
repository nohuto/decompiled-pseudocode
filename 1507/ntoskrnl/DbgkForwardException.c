/*
 * XREFs of DbgkForwardException @ 0x1405478A4
 * Callers:
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeCopyExceptionRecord @ 0x140195C4C (KeCopyExceptionRecord.c)
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140409B74 (DbgkpSendApiMessageLpc.c)
 *     PsCaptureExceptionPort @ 0x140420D34 (PsCaptureExceptionPort.c)
 *     PsSetProcessFaultInformation @ 0x140547A48 (PsSetProcessFaultInformation.c)
 *     DbgkpSendApiMessage @ 0x140669324 (DbgkpSendApiMessage.c)
 */

bool __fastcall DbgkForwardException(__int64 a1, char a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  void *v12; // rbx
  int v14; // esi
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v17[17]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v17, 0, sizeof(v17));
  v9 = 1;
  if ( a3 )
  {
    v16 = 1LL;
    PsSetProcessFaultInformation(KeGetCurrentThread()->ApcState.Process, &v16);
  }
  DWORD2(v17[2]) = 0;
  *(_QWORD *)&v17[0] = 0x800D000A8LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 4) != 0 )
      v12 = 0LL;
    else
      v12 = (void *)Process[1].ActiveProcessors.Bitmap[6];
    v9 = 0;
  }
  else
  {
    v12 = PsCaptureExceptionPort((__int64)CurrentThread->ApcState.Process, v6, v7, v8);
    DWORD1(v17[0]) = 7;
  }
  if ( !v12 && a2 )
    return 0;
  KeCopyExceptionRecord(&v17[3], a1);
  DWORD2(v17[12]) = a3 == 0;
  if ( v9 )
  {
    if ( !v12 )
    {
      v15 = -2147418111;
      v14 = 0;
      HIDWORD(v17[2]) = -2147418111;
      goto LABEL_18;
    }
    v14 = DbgkpSendApiMessageLpc((__int64)v17, (__int64)v12, a2);
    ObfDereferenceObject(v12);
  }
  else
  {
    v14 = DbgkpSendApiMessage(Process);
  }
  v15 = HIDWORD(v17[2]);
LABEL_18:
  if ( v14 < 0 )
    return 0;
  if ( v15 == -2147418111 )
  {
    if ( !a2 )
    {
      v15 = DbgkpSendErrorMessage(a1, 2, v17);
      return v15 >= 0;
    }
    return 0;
  }
  return v15 >= 0;
}
