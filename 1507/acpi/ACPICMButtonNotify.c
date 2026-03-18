/*
 * XREFs of ACPICMButtonNotify @ 0x1C00365E4
 * Callers:
 *     ACPICMButtonNotifyByDeviceExtension @ 0x1C0036660 (ACPICMButtonNotifyByDeviceExtension.c)
 *     ACPICMButtonNotifyByDeviceObject @ 0x1C0036670 (ACPICMButtonNotifyByDeviceObject.c)
 * Callees:
 *     ACPISetDeviceWorker @ 0x1C001A3AC (ACPISetDeviceWorker.c)
 *     ACPIButtonEvent @ 0x1C0021F50 (ACPIButtonEvent.c)
 */

void __fastcall ACPICMButtonNotify(ULONG_PTR a1, _DWORD *a2, int a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  unsigned int v9; // edx

  v4 = a2[48];
  if ( (*a2 & 0x2000LL) != 0 )
  {
    v5 = 2;
    v6 = a3 - 2;
    if ( v6 )
    {
      if ( v6 != 126 )
        return;
      v5 = 1;
    }
    v7 = v5;
    goto LABEL_6;
  }
  v8 = a3 - 2;
  if ( !v8 )
  {
    if ( !a1 )
      return;
    v9 = 0x80000000;
    goto LABEL_15;
  }
  if ( v8 == 126 )
  {
    if ( (v4 & 4) != 0 )
    {
      v7 = 0;
LABEL_6:
      ACPISetDeviceWorker((__int64)a2, v7);
      return;
    }
    if ( a1 )
    {
      v9 = v4 & 0x7FFFFFFF;
LABEL_15:
      ACPIButtonEvent(a1, v9);
    }
  }
}
