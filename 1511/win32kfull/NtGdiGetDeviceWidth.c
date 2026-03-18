/*
 * XREFs of NtGdiGetDeviceWidth @ 0x1C02A6730
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiGetDeviceWidth(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(v3[0] + 1432LL) - *(_DWORD *)(v3[0] + 1424LL);
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
  }
  else
  {
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v3);
    return (unsigned int)-1;
  }
  return v1;
}
