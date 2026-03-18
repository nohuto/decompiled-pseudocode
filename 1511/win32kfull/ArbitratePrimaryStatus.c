/*
 * XREFs of ArbitratePrimaryStatus @ 0x1C01C8F58
 * Callers:
 *     ?PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z @ 0x1C01C7698 (-PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z.c)
 *     GetPointerDeviceContactState @ 0x1C01CCC50 (GetPointerDeviceContactState.c)
 *     GetPTPContactState @ 0x1C01D0F54 (GetPTPContactState.c)
 * Callees:
 *     ?UpdatePrimaryDevice@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z @ 0x1C01C85C4 (-UpdatePrimaryDevice@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z.c)
 *     IsFrameReportingPointerDevice @ 0x1C01CDBF0 (IsFrameReportingPointerDevice.c)
 *     IsPointerInputRedirected @ 0x1C01FBE2C (IsPointerInputRedirected.c)
 */

void __fastcall ArbitratePrimaryStatus(struct tagHID_POINTER_DEVICE_INFO *a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 CurrentProcessWin32Process; // rax
  int v8; // r8d
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  bool v12; // zf

  v2 = a2;
  if ( !(unsigned int)IsFrameReportingPointerDevice(a1) || !*(_DWORD *)(*(_QWORD *)(v4 + 712) + 56LL) )
  {
    v5 = *(unsigned int *)(v4 + 24);
    if ( (unsigned int)(v5 - 1) > 4 )
    {
      if ( (unsigned int)(v5 - 6) > 1 )
      {
        v6 = 1;
        if ( (_DWORD)v5 == 8 )
          v6 = 5;
      }
      else
      {
        v6 = 3;
      }
    }
    else
    {
      v6 = 2;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v8 = IsPointerInputRedirected(CurrentProcessWin32Process, *(_QWORD *)(grpdeskRitInput + 8LL), v6, 0LL);
    if ( gPrimaryPointerDevice )
    {
      v10 = *((_DWORD *)a1 + 373);
      v11 = *(_DWORD *)(gPrimaryPointerDevice + 1492LL);
      if ( v10 > v11
        || v10 == v11
        && (dword_1C032BAEC
          ? (v12 = (*(_DWORD *)(2400LL * (unsigned int)dword_1C032BAE8
                              + *(_QWORD *)(gPrimaryPointerDevice + 696LL)
                              + 2392) & 0x20) == 0)
          : (v12 = (*(_DWORD *)(2400 * v2 + *((_QWORD *)a1 + 87) + 2392) & 2) == 0),
            !v12 || dword_1C032BAF0 && !v8) )
      {
LABEL_23:
        UpdatePrimaryDevice(a1, v2, v8);
      }
    }
    else
    {
      v9 = *((_DWORD *)a1 + 6);
      if ( ((unsigned int)(v9 - 1) <= 4 || v9 == 8) && !dword_1C0323FA4 || (unsigned int)(v9 - 6) <= 1 )
        goto LABEL_23;
    }
  }
}
