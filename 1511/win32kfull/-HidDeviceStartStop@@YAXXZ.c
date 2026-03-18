/*
 * XREFs of ?HidDeviceStartStop@@YAXXZ @ 0x1C0089F88
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00893B4 (_RegisterRawInputDevices.c)
 *     FreeProcessHidTable @ 0x1C01070F0 (FreeProcessHidTable.c)
 * Callees:
 *     HidTLCActive @ 0x1C01D5530 (HidTLCActive.c)
 *     RequestDeviceChange @ 0x1C01E0784 (RequestDeviceChange.c)
 */

void __fastcall HidDeviceStartStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 i; // rbx

  if ( !aDeviceTemplate[308] )
  {
    for ( i = gpDeviceInfoList; ; i = *(_QWORD *)(i + 56) )
    {
      if ( !i )
        return;
      if ( (*(_BYTE *)(i + 64) & 0x40) == 0 && (*(_WORD *)(i + 66) & 0x28F) == 0 && *(_BYTE *)(i + 48) == 2 )
      {
        if ( (unsigned int)HidTLCActive(*(_QWORD *)(i + 408)) )
        {
          if ( *(_QWORD *)(i + 216) )
            continue;
        }
        else if ( !*(_QWORD *)(i + 216) )
        {
          continue;
        }
        RequestDeviceChange((struct DEVICEINFO *)i);
      }
    }
  }
  v4 = *(_QWORD *)&aDeviceTemplate[312];
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 32);
    if ( v5 == PsGetCurrentProcess(a1, a2, a3, a4) )
      RIMDirectStartStopDeviceRead(*(_QWORD *)&aDeviceTemplate[310]);
    else
      KeSetEvent(*(PRKEVENT *)&aDeviceTemplate[376], 1, 0);
  }
}
