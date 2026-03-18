/*
 * XREFs of ?HidDeviceStartStop@@YAXXZ @ 0x1C0078C78
 * Callers:
 *     FreeProcessHidTable @ 0x1C0077440 (FreeProcessHidTable.c)
 *     _RegisterRawInputDevices @ 0x1C0078618 (_RegisterRawInputDevices.c)
 * Callees:
 *     HidTLCActive @ 0x1C01D3AB0 (HidTLCActive.c)
 *     RequestDeviceChange @ 0x1C01E0174 (RequestDeviceChange.c)
 */

void __fastcall HidDeviceStartStop(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
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
          if ( *(_QWORD *)(i + 224) )
            continue;
        }
        else if ( !*(_QWORD *)(i + 224) )
        {
          continue;
        }
        RequestDeviceChange((struct DEVICEINFO *)i);
      }
    }
  }
  v2 = *(_QWORD *)&aDeviceTemplate[312];
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 32);
    if ( v3 == PsGetCurrentProcess(a1, a2) )
      RIMDirectStartStopDeviceRead(*(_QWORD *)&aDeviceTemplate[310]);
    else
      KeSetEvent(*(PRKEVENT *)&aDeviceTemplate[376], 1, 0);
  }
}
