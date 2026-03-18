/*
 * XREFs of StartDeviceRead @ 0x1C01E0968
 * Callers:
 *     RitTakeOver @ 0x1C009F9A4 (RitTakeOver.c)
 *     DitTakeOver @ 0x1C00A0698 (DitTakeOver.c)
 *     ?InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1C01D8628 (-InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z.c)
 *     DitStartRead @ 0x1C01DFF9C (DitStartRead.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     MonotonicTick @ 0x1C00856E4 (MonotonicTick.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00CF948 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     FreeDeviceInfo @ 0x1C01DA0F0 (FreeDeviceInfo.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01DE810 (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall StartDeviceRead(unsigned __int8 *ApcContext)
{
  int v2; // eax
  __int16 v3; // cx
  BOOLEAN v4; // al
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rax
  unsigned __int8 *Buffer; // rsi
  ULONG Length; // ebp
  BOOLEAN v19; // al
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  void (__stdcall *v27)(PVOID, PIO_STATUS_BLOCK, ULONG); // r8
  int v28; // eax
  bool v29; // sf
  BOOLEAN v30; // al
  int v31; // [rsp+68h] [rbp+10h] BYREF

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit )
  {
    v2 = *((_DWORD *)ApcContext + 22);
    if ( (v2 & 4) != 0 )
    {
      if ( !*((_DWORD *)ApcContext + 23) )
      {
        *((_DWORD *)ApcContext + 22) = v2 | 0x20;
        RitWakeDITAndWaitForResponse(4u);
      }
      return 0LL;
    }
  }
  v3 = *((_WORD *)ApcContext + 33);
  if ( (v3 & 0x80u) == 0 )
  {
    if ( gbExitInProgress || gbStopReadInput )
    {
      *((_DWORD *)ApcContext + 62) = -1073741823;
      goto LABEL_47;
    }
    if ( (v3 & 8) != 0 )
    {
      *((_DWORD *)ApcContext + 62) = -2147483000;
LABEL_47:
      *((_WORD *)ApcContext + 32) &= ~2u;
      return 0LL;
    }
    v11 = ApcContext[48];
    *((_QWORD *)ApcContext + 32) = 0LL;
    *((_DWORD *)ApcContext + 62) = -1073741823;
    v12 = &aDeviceTemplate[71 * v11];
    if ( (_BYTE)v11 == 2 )
    {
      if ( !*((_QWORD *)ApcContext + 27) )
      {
        IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
        v15 = IsResourceAcquiredExclusiveLite;
        if ( !IsResourceAcquiredExclusiveLite )
          EnterDeviceInfoListCrit_(v14);
        if ( !*((_QWORD *)ApcContext + 27) )
        {
          v14 = *((unsigned __int16 *)ApcContext + 32);
          if ( (v14 & 2) != 0 )
          {
            LOWORD(v14) = v14 & 0xFFFD;
            *((_WORD *)ApcContext + 32) = v14;
          }
        }
        goto LABEL_24;
      }
      v16 = *((_QWORD *)ApcContext + 50);
      Buffer = *(unsigned __int8 **)(v16 + 24);
      Length = 10 * *(unsigned __int16 *)(v16 + 44);
    }
    else
    {
      Length = *((_DWORD *)v12 + 16);
      Buffer = &ApcContext[*((unsigned int *)v12 + 15)];
    }
    if ( *((_QWORD *)ApcContext + 27) )
    {
      *((_WORD *)ApcContext + 32) |= 2u;
      v20 = MonotonicTick();
      ++*((_DWORD *)ApcContext + 76);
      LOBYTE(v21) = ApcContext[48];
      *((_DWORD *)ApcContext + 20) = v20;
      EtwTraceStartInputDeviceRead(v21, *(unsigned int *)(v22 + 88));
      if ( (unsigned int)IsDwmInputThread(v24, v23, v25, v26) && gbDITUseIocp )
        v27 = 0LL;
      else
        v27 = (void (__stdcall *)(PVOID, PIO_STATUS_BLOCK, ULONG))InputApc;
      *((_DWORD *)ApcContext + 66) = ZwReadFile(
                                       *((HANDLE *)ApcContext + 27),
                                       0LL,
                                       v27,
                                       ApcContext,
                                       (PIO_STATUS_BLOCK)(ApcContext + 248),
                                       Buffer,
                                       Length,
                                       gZero,
                                       0LL);
      v28 = MonotonicTick();
      v29 = *((int *)ApcContext + 66) < 0;
      *((_DWORD *)ApcContext + 21) = v28;
      if ( !v29 )
      {
        ApcContext[196] = 0;
        return 0LL;
      }
      v30 = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
      v15 = v30;
      if ( !v30 )
        EnterDeviceInfoListCrit_(v14);
      if ( *((_DWORD *)ApcContext + 66) == -1073741670 )
      {
        LOBYTE(v14) = ApcContext[196];
        ApcContext[196] = v14 + 1;
        if ( (unsigned __int8)v14 < 5u )
        {
          *((_WORD *)ApcContext + 33) |= 0x200u;
          ++gnRetryReadInput;
        }
      }
      else
      {
        *((_WORD *)ApcContext + 32) &= ~2u;
      }
      --*((_DWORD *)ApcContext + 76);
    }
    else
    {
      v19 = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
      v15 = v19;
      if ( !v19 )
        EnterDeviceInfoListCrit_(v14);
      if ( !*((_QWORD *)ApcContext + 27) )
      {
        *((_DWORD *)ApcContext + 66) = -1073741816;
        *((_WORD *)ApcContext + 32) &= ~2u;
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
  *((_WORD *)ApcContext + 32) &= ~2u;
  v9 = FreeDeviceInfo((__int64)ApcContext);
  if ( !v6 )
    LeaveDeviceInfoListCrit_(v8);
  if ( !v31 )
    UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
