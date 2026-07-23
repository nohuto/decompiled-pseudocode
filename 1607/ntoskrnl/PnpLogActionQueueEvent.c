/*
 * XREFs of PnpLogActionQueueEvent @ 0x14008610C
 * Callers:
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     PiProcessReenumeration @ 0x140488E80 (PiProcessReenumeration.c)
 * Callees:
 *     Template_zq @ 0x1401CFD4C (Template_zq.c)
 */

__int64 __fastcall PnpLogActionQueueEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 result; // rax
  void *v6; // rdx

  if ( a2 == 8 )
  {
    v3 = 0LL;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
        {
          if ( a1 )
            v3 = *(_QWORD *)(a1 + 48);
          v6 = &KMPnPEvt_ReenumerateDeviceOnly_Start;
          return Template_z(a1, v6, a3, v3);
        }
      }
      else if ( (_DWORD)a3 == 2 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
      {
        if ( a1 )
          v3 = *(_QWORD *)(a1 + 48);
        v6 = &KMPnPEvt_ReenumerateDeviceOnly_Stop;
        return Template_z(a1, v6, a3, v3);
      }
    }
    else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    {
      if ( a1 )
        v3 = *(_QWORD *)(a1 + 48);
      v6 = &KMPnPEvt_ReenumerateDeviceOnly_Queue;
      return Template_z(a1, v6, a3, v3);
    }
  }
  else if ( a2 > 8 && (a2 <= 10 || a2 == 14) )
  {
    LODWORD(v4) = 0;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
        {
          if ( a1 )
            v4 = *(_QWORD *)(a1 + 48);
          return Template_zq(a1, (unsigned int)&KMPnPEvt_ReenumerateDeviceTree_Start, 1, v4, a2);
        }
      }
      else if ( (_DWORD)a3 == 2 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
      {
        if ( a1 )
          v4 = *(_QWORD *)(a1 + 48);
        return Template_zq(a1, (unsigned int)&KMPnPEvt_ReenumerateDeviceTree_Stop, 2, v4, a2);
      }
    }
    else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    {
      if ( a1 )
        v4 = *(_QWORD *)(a1 + 48);
      return Template_zq(a1, (unsigned int)&KMPnPEvt_ReenumerateDeviceTree_Queue, 0, v4, a2);
    }
  }
  return result;
}
