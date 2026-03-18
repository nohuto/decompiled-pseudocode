/*
 * XREFs of RIMDoMobileKeyboardInvalidation @ 0x1C00CE90C
 * Callers:
 *     RIMOnPowerNotification @ 0x1C0086BF0 (RIMOnPowerNotification.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C00D88E8 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 * Callees:
 *     rimSignalReadComplete @ 0x1C00104A4 (rimSignalReadComplete.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00105A4 (WPP_RECORDER_SF_qq.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C00DF274 (rimInvalidateHidKeyboardDeviceKeys.c)
 */

ULONG __fastcall RIMDoMobileKeyboardInvalidation(_BYTE *a1, __int64 a2)
{
  ULONG result; // eax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx

  result = *(_DWORD *)(a2 + 184);
  if ( (result & 0x80u) == 0 )
  {
    v5 = *(_QWORD *)(a2 + 488);
    if ( *(_DWORD *)(v5 + 292) )
    {
      if ( a1[712] )
      {
        v6 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 464) + 44LL);
        *(_DWORD *)(a2 + 256) = 0;
        *(_QWORD *)(a2 + 264) = v6;
        rimInvalidateHidKeyboardDeviceKeys(a1, a2, v5, 0LL);
        if ( a1[712] )
        {
          WPP_RECORDER_SF_qq(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v7,
            5u,
            0x4Au,
            (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
            a1,
            a2);
          return DbgPrintRIMAlways(
                   "pRimObj:%p, pRimDev:%p rimInvalidateHidKeyboardDeviceKeys failed!\n",
                   a1,
                   (const void *)a2);
        }
        else
        {
          return rimSignalReadComplete((__int64)a1, a2);
        }
      }
    }
  }
  return result;
}
