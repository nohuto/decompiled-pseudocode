/*
 * XREFs of UsbhHandleOvercurrent @ 0x1C00502F4
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0011DC0 (UsbhHubDispatchPortEvent.c)
 *     UsbhWaitConnect @ 0x1C00150A0 (UsbhWaitConnect.c)
 *     UsbhHandleSuspend @ 0x1C0026828 (UsbhHandleSuspend.c)
 *     UsbhEnumerate1 @ 0x1C0027540 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x1C004FF08 (UsbhEnumerate2.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhCancelEnumeration @ 0x1C0027BB0 (UsbhCancelEnumeration.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x1C0051BB4 (Usbh_OvercurrentRefHubBusy.c)
 */

__int64 __fastcall UsbhHandleOvercurrent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // ebp
  _DWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r8
  const void *v15; // r9

  v6 = a2;
  v8 = FdoExt(a1, a2, a3, a4);
  v11 = *(unsigned __int16 *)(a4 + 420);
  if ( (v11 & 0x100) == 0 || (v8[640] & 0x10000000) != 0 )
  {
    ++*(_DWORD *)(a4 + 2404);
    if ( a5 && PdoExt(a5, v11, v9, v10)[280] == 101 )
    {
      Usbh_OvercurrentRefHubBusy(a1, a4, 0LL);
      UsbhException(
        a1,
        *(unsigned __int16 *)(a4 + 4),
        115LL,
        (const void *)a4,
        0xB70u,
        0,
        0,
        usbfile_busfunc_c,
        2853,
        0);
      v6 = 4;
      _InterlockedExchange((volatile __int32 *)(a4 + 428), 4);
    }
    else
    {
      UsbhCancelEnumeration(a1, v6, a4, a5);
      if ( *(_DWORD *)(a4 + 2404) >= 3u )
      {
        Log(a1, 1024, 1884247634, a4, 0LL);
        UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 107LL, v15, 0xB70u, 0, 0, usbfile_busfunc_c, 2892, 0);
        v6 = 4;
        _InterlockedExchange((volatile __int32 *)(a4 + 428), 4);
        Usbh_OvercurrentRefHubBusy(a1, a4, 0LL);
        UsbhException(
          a1,
          *(unsigned __int16 *)(a4 + 4),
          6LL,
          (const void *)a4,
          0xB70u,
          0,
          0,
          usbfile_busfunc_c,
          2903,
          0);
      }
      else
      {
        LOBYTE(v14) = 1;
        Usbh_OvercurrentRefHubBusy(a1, a4, v14);
        UsbhException(
          a1,
          *(unsigned __int16 *)(a4 + 4),
          108LL,
          (const void *)a4,
          0xB70u,
          0,
          0,
          usbfile_busfunc_c,
          2878,
          0);
        return 4;
      }
    }
  }
  else
  {
    v12 = (v11 & 8) == 0;
    v13 = *(unsigned __int16 *)(a4 + 4);
    if ( v12 )
      UsbhException(a1, v13, 105LL, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2816, 0);
    else
      UsbhException(a1, v13, 106LL, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2828, 0);
  }
  return v6;
}
