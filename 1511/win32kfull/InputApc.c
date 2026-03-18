/*
 * XREFs of InputApc @ 0x1C01DA340
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1C01D8628 (-InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z.c)
 *     FreeDeviceInfo @ 0x1C01DA0F0 (FreeDeviceInfo.c)
 */

void __fastcall InputApc(struct _IO_STATUS_BLOCK *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _BOOL8 v9; // rcx
  int Information; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *p_Pointer; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rdx

  v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) && (unsigned int)IsDwmInputThread(v6, v5, v7, v8);
  --ApcContext[19].Status;
  Information = ApcContext[5].Information;
  HIDWORD(ApcContext[5].Information) = 1;
  if ( (Information & 4) != 0 || SBYTE2(ApcContext[4].Pointer) >= 0 )
  {
    if ( v9 )
    {
      if ( gpDitInfo )
      {
        EnterDeviceInfoListCrit_(v9);
        p_Pointer = &ApcContext[6].Pointer;
        if ( (_QWORD *)*p_Pointer == p_Pointer )
        {
          v16 = gpDitInfo + 64;
          ApcContext[10] = *IoStatusBlock;
          v17 = *(_QWORD **)(v16 + 8);
          *p_Pointer = v16;
          ApcContext[6].Information = (ULONG_PTR)v17;
          if ( *v17 != v16 )
            __fastfail(3u);
          *v17 = p_Pointer;
          *(_QWORD *)(v16 + 8) = p_Pointer;
          ZwSetEvent(ghDITInputApcDoneEvent, 0LL);
        }
        LeaveDeviceInfoListCrit_(p_Pointer);
      }
    }
    else
    {
      InputApcCommon(ApcContext, IoStatusBlock);
      HIDWORD(ApcContext[5].Information) = 0;
    }
  }
  else
  {
    EnterCrit(0LL, 1LL);
    EnterDeviceInfoListCrit_(v11);
    LOWORD(ApcContext[4].Status) &= ~2u;
    FreeDeviceInfo((__int64)ApcContext);
    LeaveDeviceInfoListCrit_(v12);
    UserSessionSwitchLeaveCrit(v14, v13);
  }
}
