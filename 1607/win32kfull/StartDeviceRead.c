/*
 * XREFs of StartDeviceRead @ 0x1C01D6BC0
 * Callers:
 *     ?InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1C01D0194 (-InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z.c)
 *     DitStartRead @ 0x1C01D69E4 (DitStartRead.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     MonotonicTick @ 0x1C00E15A4 (MonotonicTick.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01D5F4C (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall StartDeviceRead(struct _IO_STATUS_BLOCK *ApcContext, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS Status; // eax
  unsigned __int16 v6; // cx
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // esi
  __int64 Status_low; // rax
  _QWORD *v12; // r8
  BOOLEAN v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  _QWORD *Pointer; // rax
  char *Buffer; // rsi
  ULONG Length; // ebp
  BOOLEAN v20; // al
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  void (__stdcall *v26)(PVOID, PIO_STATUS_BLOCK, ULONG); // r8
  __int64 v27; // rax
  bool v28; // sf
  BOOLEAN v29; // al
  int v31; // [rsp+68h] [rbp+10h] BYREF

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) == gptiRit )
  {
    Status = ApcContext[6].Status;
    if ( (Status & 4) != 0 )
    {
      if ( !HIDWORD(ApcContext[6].Pointer) )
      {
        ApcContext[6].Status = Status | 0x20;
        RitWakeDITAndWaitForResponse(4u);
      }
      return 0LL;
    }
  }
  v6 = WORD1(ApcContext[4].Pointer);
  if ( (v6 & 0x80u) != 0 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v31);
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    v10 = IsResourceAcquiredExclusiveLite;
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_(v9);
    LOWORD(ApcContext[4].Status) &= ~2u;
    if ( gfRecordPnpNotification )
      RecordPnpNotification(14LL, ApcContext, 0LL);
    if ( !v10 )
      LeaveDeviceInfoListCrit_(v9, v8);
    if ( !v31 )
      UserSessionSwitchLeaveCrit(v9, v8);
    return 0LL;
  }
  if ( gbExitInProgress || gbStopReadInput )
  {
    ApcContext[16].Status = -1073741823;
LABEL_50:
    LOWORD(ApcContext[4].Status) &= ~2u;
    return 0LL;
  }
  if ( (v6 & 8) != 0 )
  {
    if ( gfRecordPnpNotification )
      RecordPnpNotification(21LL, ApcContext, v6);
    ApcContext[16].Status = -2147483000;
    goto LABEL_50;
  }
  Status_low = LOBYTE(ApcContext[3].Status);
  ApcContext[16].Information = 0LL;
  ApcContext[16].Status = -1073741823;
  v12 = &aDeviceTemplate[70 * Status_low];
  if ( (_BYTE)Status_low != 2 )
  {
    Length = *((_DWORD *)v12 + 16);
    Buffer = (char *)ApcContext + *((unsigned int *)v12 + 15);
LABEL_31:
    if ( ApcContext[14].Pointer )
    {
      LOWORD(ApcContext[4].Status) |= 2u;
      v21 = MonotonicTick();
      ++LODWORD(ApcContext[19].Information);
      LOBYTE(v22) = ApcContext[3].Status;
      ApcContext[5].Pointer = (PVOID)v21;
      EtwTraceStartInputDeviceRead(v22, *(unsigned int *)(v23 + 88));
      if ( (unsigned int)IsDwmInputThread(v25, v24) && gbDITUseIocp )
        v26 = 0LL;
      else
        v26 = (void (__stdcall *)(PVOID, PIO_STATUS_BLOCK, ULONG))InputApc;
      ApcContext[17].Status = ZwReadFile(
                                ApcContext[14].Pointer,
                                0LL,
                                v26,
                                ApcContext,
                                ApcContext + 16,
                                Buffer,
                                Length,
                                gZero,
                                0LL);
      v27 = MonotonicTick();
      v28 = ApcContext[17].Status < 0;
      ApcContext[5].Information = v27;
      if ( !v28 )
      {
        BYTE4(ApcContext[12].Information) = 0;
        return 0LL;
      }
      v29 = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
      v16 = v29;
      if ( !v29 )
        EnterDeviceInfoListCrit_(v15);
      if ( ApcContext[17].Status == -1073741670 )
      {
        LOBYTE(v15) = BYTE4(ApcContext[12].Information);
        BYTE4(ApcContext[12].Information) = v15 + 1;
        if ( (unsigned __int8)v15 < 5u )
        {
          WORD1(ApcContext[4].Pointer) |= 0x200u;
          ++gnRetryReadInput;
        }
      }
      else
      {
        LOWORD(ApcContext[4].Status) &= ~2u;
      }
      --LODWORD(ApcContext[19].Information);
    }
    else
    {
      v20 = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
      v16 = v20;
      if ( !v20 )
        EnterDeviceInfoListCrit_(v15);
      if ( !ApcContext[14].Pointer )
      {
        ApcContext[17].Status = -1073741816;
        LOWORD(ApcContext[4].Status) &= ~2u;
      }
    }
    goto LABEL_27;
  }
  if ( ApcContext[14].Pointer )
  {
    Pointer = ApcContext[29].Pointer;
    Buffer = (char *)Pointer[3];
    Length = 10 * *((unsigned __int16 *)Pointer + 22);
    goto LABEL_31;
  }
  v13 = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  v16 = v13;
  if ( !v13 )
    EnterDeviceInfoListCrit_(v15);
  if ( !ApcContext[14].Pointer )
  {
    v15 = LOWORD(ApcContext[4].Status);
    if ( (v15 & 2) != 0 )
    {
      LOWORD(v15) = v15 & 0xFFFD;
      LOWORD(ApcContext[4].Status) = v15;
    }
  }
LABEL_27:
  if ( !v16 )
    LeaveDeviceInfoListCrit_(v15, v14);
  return 0LL;
}
