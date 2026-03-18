/*
 * XREFs of InputApc @ 0x1C01D20F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1C01D0194 (-InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z.c)
 */

void __fastcall InputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, __int64 Reserved, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BOOL8 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rdx

  v8 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)IoStatusBlock, Reserved, a4)
    && (unsigned int)IsDwmInputThread(v7, v6);
  --*((_DWORD *)ApcContext + 78);
  v9 = *((_DWORD *)ApcContext + 24);
  *((_DWORD *)ApcContext + 25) = 1;
  if ( (v9 & 4) != 0 || ApcContext[66] >= 0 )
  {
    if ( v8 )
    {
      if ( gpDitInfo )
      {
        EnterDeviceInfoListCrit_(v8);
        v16 = (__int64 *)(ApcContext + 104);
        if ( (__int64 *)*v16 == v16 )
        {
          v17 = gpDitInfo + 64;
          *(struct _IO_STATUS_BLOCK *)(ApcContext + 168) = *IoStatusBlock;
          v18 = *(__int64 ***)(v17 + 8);
          if ( *v18 != (__int64 *)v17 )
            __fastfail(3u);
          *((_QWORD *)ApcContext + 14) = v18;
          *v16 = v17;
          *v18 = v16;
          *(_QWORD *)(v17 + 8) = v16;
          ZwSetEvent(ghDITInputApcDoneEvent, 0LL);
        }
        LeaveDeviceInfoListCrit_(v16, v15);
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
    EnterCrit(0LL, 1LL);
    EnterDeviceInfoListCrit_(v10);
    *((_WORD *)ApcContext + 32) &= ~2u;
    LeaveDeviceInfoListCrit_(v12, v11);
    UserSessionSwitchLeaveCrit(v14, v13);
  }
}
