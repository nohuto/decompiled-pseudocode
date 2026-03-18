/*
 * XREFs of NtGdiGetDeviceWidth @ 0x1C02A6F20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetDeviceWidth(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(v3[0] + 1432LL) - *(_DWORD *)(v3[0] + 1424LL);
    DCOBJ::~DCOBJ((DCOBJ *)v3);
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v3);
    return (unsigned int)-1;
  }
  return v1;
}
