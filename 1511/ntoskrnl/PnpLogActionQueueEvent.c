/*
 * XREFs of PnpLogActionQueueEvent @ 0x1400D18D4
 * Callers:
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     PiProcessReenumeration @ 0x140495ADC (PiProcessReenumeration.c)
 * Callees:
 *     Template_zq @ 0x1401C09D0 (Template_zq.c)
 */

__int64 __fastcall PnpLogActionQueueEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 result; // rax
  void *v6; // rdx

  if ( a2 == 8 )
  {
    v4 = 0LL;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) == 0 )
          return result;
        if ( a1 )
          v4 = *(_QWORD *)(a1 + 48);
        v6 = &KMPnPEvt_ReenumerateDeviceOnly_Start;
      }
      else
      {
        if ( (_DWORD)a3 != 2 || (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) == 0 )
          return result;
        if ( a1 )
          v4 = *(_QWORD *)(a1 + 48);
        v6 = &KMPnPEvt_ReenumerateDeviceOnly_Stop;
      }
    }
    else
    {
      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) == 0 )
        return result;
      if ( a1 )
        v4 = *(_QWORD *)(a1 + 48);
      v6 = &KMPnPEvt_ReenumerateDeviceOnly_Queue;
    }
    return Template_z(a1, v6, a3, v4);
  }
  if ( a2 > 8 && (a2 <= 10 || a2 == 14) )
  {
    LODWORD(v3) = 0;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
        {
          if ( a1 )
            v3 = *(_QWORD *)(a1 + 48);
          return Template_zq(a1, (unsigned int)&KMPnPEvt_ReenumerateDeviceTree_Start, 1, v3, a2);
        }
      }
      else if ( (_DWORD)a3 == 2 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
      {
        if ( a1 )
          v3 = *(_QWORD *)(a1 + 48);
        return Template_zq(a1, (unsigned int)&KMPnPEvt_ReenumerateDeviceTree_Stop, 2, v3, a2);
      }
    }
    else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    {
      if ( a1 )
        v3 = *(_QWORD *)(a1 + 48);
      return Template_zq(a1, (unsigned int)&KMPnPEvt_ReenumerateDeviceTree_Queue, 0, v3, a2);
    }
  }
  return result;
}
