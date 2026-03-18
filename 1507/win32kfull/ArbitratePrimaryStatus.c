/*
 * XREFs of ArbitratePrimaryStatus @ 0x1C01C7398
 * Callers:
 *     ?PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z @ 0x1C01C5AD8 (-PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z.c)
 *     GetPointerDeviceContactState @ 0x1C01CB070 (GetPointerDeviceContactState.c)
 *     GetPTPContactState @ 0x1C01CF2F0 (GetPTPContactState.c)
 * Callees:
 *     ?UpdatePrimaryDevice@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z @ 0x1C01C6A04 (-UpdatePrimaryDevice@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z.c)
 *     IsFrameReportingPointerDevice @ 0x1C01CC010 (IsFrameReportingPointerDevice.c)
 *     IsPointerInputRedirected @ 0x1C01FB9AC (IsPointerInputRedirected.c)
 */

void __fastcall ArbitratePrimaryStatus(struct tagHID_POINTER_DEVICE_INFO *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // r8
  int v7; // r8d
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  bool v11; // zf

  v2 = a2;
  if ( !(unsigned int)IsFrameReportingPointerDevice(a1) || !*(_DWORD *)(*(_QWORD *)(v4 + 696) + 56LL) )
  {
    v5 = *(_DWORD *)(v4 + 24);
    if ( (unsigned int)(v5 - 1) > 4 )
    {
      if ( (unsigned int)(v5 - 6) > 1 )
      {
        v6 = 1LL;
        if ( v5 == 8 )
          v6 = 5LL;
      }
      else
      {
        v6 = 3LL;
      }
    }
    else
    {
      v6 = 2LL;
    }
    v7 = IsPointerInputRedirected(gptiCurrent, *(_QWORD *)(grpdeskRitInput + 8LL), v6, 0LL);
    if ( gPrimaryPointerDevice )
    {
      v9 = *((_DWORD *)a1 + 369);
      v10 = *(_DWORD *)(gPrimaryPointerDevice + 1476LL);
      if ( v9 > v10
        || v9 == v10
        && (dword_1C032CB1C
          ? (v11 = (*(_DWORD *)(2400LL * (unsigned int)dword_1C032CB18
                              + *(_QWORD *)(gPrimaryPointerDevice + 680LL)
                              + 2392) & 0x20) == 0)
          : (v11 = (*(_DWORD *)(2400 * v2 + *((_QWORD *)a1 + 85) + 2392) & 2) == 0),
            !v11 || dword_1C032CB20 && !v7) )
      {
LABEL_23:
        UpdatePrimaryDevice(a1, v2, v7);
      }
    }
    else
    {
      v8 = *((_DWORD *)a1 + 6);
      if ( ((unsigned int)(v8 - 1) <= 4 || v8 == 8) && !dword_1C0324794 || (unsigned int)(v8 - 6) <= 1 )
        goto LABEL_23;
    }
  }
}
