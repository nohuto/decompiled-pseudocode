/*
 * XREFs of Usbh_PCE_ResumeDone_Action @ 0x1C0041F68
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhPCE_Suspend @ 0x1C000AD20 (UsbhPCE_Suspend.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhUnlockPcqWithTag @ 0x1C00241A0 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1C0024260 (UsbhLockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_ResumeDone_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v7; // eax
  __int64 v8; // r9
  int v9; // r10d
  int v10; // r11d
  KIRQL v11; // r8
  __int64 v12; // rax
  int v13; // r10d
  __int64 v14; // rax
  KIRQL v15; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3;
  FdoExt(a1, a2, a3, a4);
  v7 = UsbhLockPcqWithTag(a1, a2, 21, &v15, 0);
  Log(a1, 512, 842100784, v7, *(unsigned __int16 *)(a2 + 4));
  if ( v9 >= 2 && (v9 <= 4 || v9 == 14) )
  {
    Log(a1, v10, 842100785, v8, *(unsigned __int16 *)(a2 + 4));
    v11 = v15;
    v12 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v13;
    *(_DWORD *)(v12 + a2 + 1384) = v13;
    UsbhUnlockPcqWithTag(a1, a2, v11, 0);
    UsbhPCE_Suspend(a1, v4, *(_WORD *)(a2 + 4));
  }
  else
  {
    Log(a1, v10, 842100824, v8, *(unsigned __int16 *)(a2 + 4));
    v14 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(32 * v14 + a2 + 1384) = 19;
    UsbhUnlockPcqWithTag(a1, a2, v15, 0);
  }
}
