/*
 * XREFs of InputApc @ 0x1C01D9D30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1C01D780C (-InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z.c)
 *     FreeDeviceInfo @ 0x1C01D9AE0 (FreeDeviceInfo.c)
 */

void __fastcall InputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _BOOL8 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 **v17; // rdx

  v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) && (unsigned int)IsDwmInputThread(v6, v5, v7, v8);
  --*((_DWORD *)ApcContext + 78);
  v10 = *((_DWORD *)ApcContext + 24);
  *((_DWORD *)ApcContext + 25) = 1;
  if ( (v10 & 4) != 0 || ApcContext[66] >= 0 )
  {
    if ( v9 )
    {
      if ( gpDitInfo )
      {
        EnterDeviceInfoListCrit_(v9);
        v15 = (__int64 *)(ApcContext + 104);
        if ( (__int64 *)*v15 == v15 )
        {
          v16 = gpDitInfo + 64;
          *(struct _IO_STATUS_BLOCK *)(ApcContext + 168) = *IoStatusBlock;
          v17 = *(__int64 ***)(v16 + 8);
          *v15 = v16;
          *((_QWORD *)ApcContext + 14) = v17;
          if ( *v17 != (__int64 *)v16 )
            __fastfail(3u);
          *v17 = v15;
          *(_QWORD *)(v16 + 8) = v15;
          ZwSetEvent(ghDITInputApcDoneEvent, 0LL);
        }
        LeaveDeviceInfoListCrit_(v15);
      }
    }
    else
    {
      InputApcCommon(ApcContext, IoStatusBlock);
      *((_DWORD *)ApcContext + 25) = 0;
    }
  }
  else
  {
    EnterCrit(1LL);
    EnterDeviceInfoListCrit_(v11);
    *((_WORD *)ApcContext + 32) &= ~2u;
    FreeDeviceInfo((__int64)ApcContext);
    LeaveDeviceInfoListCrit_(v12);
    UserSessionSwitchLeaveCrit(v14, v13);
  }
}
