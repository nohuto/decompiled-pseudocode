/*
 * XREFs of PiCMReturnHandleResultData @ 0x140442B30
 * Callers:
 *     PiCMOpenClassKey @ 0x1404428B0 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1404451DC (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14054BB34 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1406932CC (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnHandleResultData(int a1, __int64 a2, int a3, _OWORD *a4, unsigned int Length, _DWORD *a6)
{
  unsigned int v7; // ebx
  __int128 v9; // [rsp+20h] [rbp-18h]

  *a6 = 0;
  v7 = 0;
  if ( Length >= 0x10 && a3 == 16 )
  {
    LODWORD(v9) = 16;
    DWORD1(v9) = a1;
    *((_QWORD *)&v9 + 1) = a2;
    ProbeForWrite(a4, Length, 4u);
    *a4 = v9;
    *a6 = 16;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
