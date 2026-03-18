/*
 * XREFs of NtGdiComputeXformCoefficients @ 0x1C00F5FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

_BOOL8 __fastcall NtGdiComputeXformCoefficients(HDC a1)
{
  BOOL v1; // ebx
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v4[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v3, (struct XDCOBJ *)v4, 0x204u);
    v1 = (*(_BYTE *)(v3 + 32) & 1) != 0;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v4);
  return v1;
}
