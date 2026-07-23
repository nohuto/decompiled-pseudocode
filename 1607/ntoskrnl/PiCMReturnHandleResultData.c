/*
 * XREFs of PiCMReturnHandleResultData @ 0x1404DCA48
 * Callers:
 *     PiCMOpenDeviceKey @ 0x1404B9A1C (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x1404C94B4 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x1404DCACC (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140647EF4 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
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
