/*
 * XREFs of StartDeviceRead @ 0x1C01E0354
 * Callers:
 *     RitTakeOver @ 0x1C01323F8 (RitTakeOver.c)
 *     DitTakeOver @ 0x1C0150074 (DitTakeOver.c)
 *     ?InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1C01D780C (-InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z.c)
 *     DitStartRead @ 0x1C01DF998 (DitStartRead.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     MonotonicTick @ 0x1C004B514 (MonotonicTick.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C007F108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     FreeDeviceInfo @ 0x1C01D9AE0 (FreeDeviceInfo.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01DE20C (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall StartDeviceRead(struct _IO_STATUS_BLOCK *ApcContext)
{
  NTSTATUS Status; // eax
  __int16 v3; // cx
  BOOLEAN v4; // al
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 Status_low; // rax
  unsigned int *v12; // r8
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v14; // rcx
  int v15; // esi
  _QWORD *Pointer; // rax
  char *Buffer; // rsi
  ULONG Length; // ebp
  BOOLEAN v19; // al
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  void (__stdcall *v27)(PVOID, PIO_STATUS_BLOCK, ULONG); // r8
  __int64 v28; // rax
  bool v29; // sf
  BOOLEAN v30; // al
  int v31; // [rsp+68h] [rbp+10h] BYREF

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit )
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
  v3 = WORD1(ApcContext[4].Pointer);
  if ( (v3 & 0x80u) == 0 )
  {
    if ( gbExitInProgress || gbStopReadInput )
    {
      ApcContext[16].Status = -1073741823;
      goto LABEL_47;
    }
    if ( (v3 & 8) != 0 )
    {
      ApcContext[16].Status = -2147483000;
LABEL_47:
      LOWORD(ApcContext[4].Status) &= ~2u;
      return 0LL;
    }
    Status_low = LOBYTE(ApcContext[3].Status);
    ApcContext[16].Information = 0LL;
    ApcContext[16].Status = -1073741823;
    v12 = &aDeviceTemplate[142 * Status_low];
    if ( (_BYTE)Status_low == 2 )
    {
      if ( !ApcContext[14].Pointer )
      {
        IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
        v15 = IsResourceAcquiredExclusiveLite;
        if ( !IsResourceAcquiredExclusiveLite )
          EnterDeviceInfoListCrit_(v14);
        if ( !ApcContext[14].Pointer )
        {
          v14 = LOWORD(ApcContext[4].Status);
          if ( (v14 & 2) != 0 )
          {
            LOWORD(v14) = v14 & 0xFFFD;
            LOWORD(ApcContext[4].Status) = v14;
          }
        }
        goto LABEL_24;
      }
      Pointer = ApcContext[25].Pointer;
      Buffer = (char *)Pointer[3];
      Length = 10 * *((unsigned __int16 *)Pointer + 22);
    }
    else
    {
      Length = v12[16];
      Buffer = (char *)ApcContext + v12[15];
    }
    if ( ApcContext[14].Pointer )
    {
      LOWORD(ApcContext[4].Status) |= 2u;
      v20 = MonotonicTick();
      ++LODWORD(ApcContext[19].Information);
      LOBYTE(v21) = ApcContext[3].Status;
      ApcContext[5].Pointer = (PVOID)v20;
      EtwTraceStartInputDeviceRead(v21, *(unsigned int *)(v22 + 88));
      if ( (unsigned int)IsDwmInputThread(v24, v23, v25, v26) && gbDITUseIocp )
        v27 = 0LL;
      else
        v27 = (void (__stdcall *)(PVOID, PIO_STATUS_BLOCK, ULONG))InputApc;
      ApcContext[17].Status = ZwReadFile(
                                ApcContext[14].Pointer,
                                0LL,
                                v27,
                                ApcContext,
                                ApcContext + 16,
                                Buffer,
                                Length,
                                gZero,
                                0LL);
      v28 = MonotonicTick();
      v29 = ApcContext[17].Status < 0;
      ApcContext[5].Information = v28;
      if ( !v29 )
      {
        BYTE4(ApcContext[12].Information) = 0;
        return 0LL;
      }
      v30 = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
      v15 = v30;
      if ( !v30 )
        EnterDeviceInfoListCrit_(v14);
      if ( ApcContext[17].Status == -1073741670 )
      {
        LOBYTE(v14) = BYTE4(ApcContext[12].Information);
        BYTE4(ApcContext[12].Information) = v14 + 1;
        if ( (unsigned __int8)v14 < 5u )
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
      v19 = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
      v15 = v19;
      if ( !v19 )
        EnterDeviceInfoListCrit_(v14);
      if ( !ApcContext[14].Pointer )
      {
        ApcContext[17].Status = -1073741816;
        LOWORD(ApcContext[4].Status) &= ~2u;
      }
    }
LABEL_24:
    if ( !v15 )
      LeaveDeviceInfoListCrit_(v14);
    return 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v31);
  v4 = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  v6 = v4;
  if ( !v4 )
    EnterDeviceInfoListCrit_(v5);
  LOWORD(ApcContext[4].Status) &= ~2u;
  v9 = FreeDeviceInfo((__int64)ApcContext);
  if ( !v6 )
    LeaveDeviceInfoListCrit_(v8);
  if ( !v31 )
    UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
