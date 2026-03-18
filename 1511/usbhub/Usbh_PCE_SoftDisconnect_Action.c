/*
 * XREFs of Usbh_PCE_SoftDisconnect_Action @ 0x1C00425DC
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhFlushPortChangeQueue @ 0x1C001D114 (UsbhFlushPortChangeQueue.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0024080 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1C0024140 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 *     UsbhPCE_Disable @ 0x1C0040E50 (UsbhPCE_Disable.c)
 *     UsbhPCE_SD_Resume @ 0x1C00413BC (UsbhPCE_SD_Resume.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044578 (UsbhSoftDisconnectPdo.c)
 */

void __fastcall Usbh_PCE_SoftDisconnect_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  KIRQL v13; // r8
  __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // rax
  KIRQL v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  KIRQL v20; // [rsp+68h] [rbp+10h] BYREF

  FdoExt(a1, a2, a3, a4);
  v7 = (int)UsbhLockPcqWithTag(a1, a2, 8, &v20, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v8,
      0xDu,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(unsigned __int16 *)(a2 + 4),
      a2);
  Log(a1, 512, 1597534256, v7, *(unsigned __int16 *)(a2 + 4));
  if ( (int)v7 <= 11 )
  {
    if ( (_DWORD)v7 == 11 || (_DWORD)v7 == 1 )
      goto LABEL_21;
    if ( (int)v7 > 1 )
    {
      if ( (int)v7 > 4 )
      {
        if ( (_DWORD)v7 == 5 )
          goto LABEL_11;
        if ( (_DWORD)v7 != 6 )
        {
          if ( (_DWORD)v7 == 7 )
          {
            Log(a1, 512, 1597534257, v9, *(unsigned __int16 *)(a2 + 4));
            v13 = v20;
            v14 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 400) = 0;
            *(_DWORD *)(a2 + 12) = v15;
            *(_DWORD *)(v14 + a2 + 1384) = v15;
            UsbhUnlockPcqWithTag(a1, a2, v13, 0);
            v12 = 20LL;
            goto LABEL_12;
          }
LABEL_11:
          Log(a1, 512, 1597534261, v9, *(unsigned __int16 *)(a2 + 4));
          UsbhFlushPortChangeQueue(a1, a2, v10, v11);
          UsbhUnlockPcqWithTag(a1, a2, v20, 0);
          v12 = 23LL;
LABEL_12:
          UsbhSoftDisconnectPdo(a1, v12, a3);
          return;
        }
LABEL_21:
        Log(a1, 512, 1597534258, v9, *(unsigned __int16 *)(a2 + 4));
        UsbhUnlockPcqWithTag(a1, a2, v20, 0);
        v12 = 21LL;
        goto LABEL_12;
      }
      goto LABEL_22;
    }
LABEL_20:
    v16 = *(unsigned int *)(a2 + 2400);
    v17 = v20;
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(32 * v16 + a2 + 1384) = 19;
    UsbhUnlockPcqWithTag(a1, a2, v17, 0);
    return;
  }
  if ( (int)v7 <= 13 )
    goto LABEL_11;
  if ( (_DWORD)v7 != 14 )
  {
    if ( (_DWORD)v7 == 15 )
      goto LABEL_21;
    if ( (int)v7 <= 17 )
      goto LABEL_11;
    if ( (_DWORD)v7 == 18 || (_DWORD)v7 == 20 )
      goto LABEL_21;
    goto LABEL_20;
  }
LABEL_22:
  Log(a1, 512, 1597534259, v9, *(unsigned __int16 *)(a2 + 4));
  UsbhUnlockPcqWithTag(a1, a2, v20, 0);
  UsbhPCE_Disable(a1, *(unsigned __int16 *)(a2 + 4), a3, v18);
  Log(a1, 512, 1597534260, a3, *(unsigned __int16 *)(a2 + 4));
  UsbhSoftDisconnectPdo(a1, 22LL, a3);
  UsbhPCE_SD_Resume(a1, a2, a3, v19);
}
