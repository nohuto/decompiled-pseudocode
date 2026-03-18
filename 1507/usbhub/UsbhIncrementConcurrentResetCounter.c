/*
 * XREFs of UsbhIncrementConcurrentResetCounter @ 0x1C0046B08
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C0015DC8 (UsbhDispatch_HardResetEvent.c)
 *     Usbh_HRS_Queued @ 0x1C0046EEC (Usbh_HRS_Queued.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

__int64 __fastcall UsbhIncrementConcurrentResetCounter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rax
  __int64 result; // rax

  v4 = FdoExt(a1, a2, a3, a4);
  result = (unsigned int)++v4[1316];
  if ( (int)result > 20 )
    KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 1uLL, 0LL);
  return result;
}
