/*
 * XREFs of Usbh_PCE_ResumeDone_Action @ 0x1C00424BC
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhPCE_Suspend @ 0x1C001E798 (UsbhPCE_Suspend.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0024950 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1C0024A00 (UsbhLockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_ResumeDone_Action(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // r9
  int v9; // r10d
  int v10; // r11d
  KIRQL v11; // r8
  __int64 v12; // rax
  int v13; // r10d
  __int64 v14; // r9
  __int64 v15; // rax
  KIRQL v16; // [rsp+48h] [rbp+10h] BYREF

  FdoExt((__int64)a1, a2, a3, a4);
  v7 = UsbhLockPcqWithTag((__int64)a1, a2, 21, &v16, 0);
  Log((__int64)a1, 512, 842100784, v7, *(unsigned __int16 *)(a2 + 4));
  if ( v9 >= 2 && (v9 <= 4 || v9 == 14) )
  {
    Log((__int64)a1, v10, 842100785, v8, *(unsigned __int16 *)(a2 + 4));
    v11 = v16;
    v12 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v13;
    *(_DWORD *)(v12 + a2 + 1384) = v13;
    UsbhUnlockPcqWithTag((__int64)a1, a2, v11, 0);
    UsbhPCE_Suspend(a1, a3, *(unsigned __int16 *)(a2 + 4), v14);
  }
  else
  {
    Log((__int64)a1, v10, 842100824, v8, *(unsigned __int16 *)(a2 + 4));
    v15 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(32 * v15 + a2 + 1384) = 19;
    UsbhUnlockPcqWithTag((__int64)a1, a2, v16, 0);
  }
}
