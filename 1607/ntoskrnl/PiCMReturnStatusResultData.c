/*
 * XREFs of PiCMReturnStatusResultData @ 0x1404DA414
 * Callers:
 *     PiCMGetDeviceStatus @ 0x1404DA320 (PiCMGetDeviceStatus.c)
 * Callees:
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnStatusResultData(
        unsigned int a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        _OWORD *Address,
        SIZE_T Length,
        _DWORD *a8)
{
  unsigned int v9; // edi
  __int128 v11; // [rsp+20h] [rbp-28h]

  *a8 = 0;
  v9 = 0;
  if ( (unsigned int)Length >= 0x14 && a5 == 20 )
  {
    LODWORD(v11) = 20;
    *(_QWORD *)((char *)&v11 + 4) = __PAIR64__(a2, a1);
    HIDWORD(v11) = a3;
    ProbeForWrite(Address, (unsigned int)Length, 4u);
    *Address = v11;
    *((_DWORD *)Address + 4) = a4;
    *a8 = 20;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
