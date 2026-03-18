/*
 * XREFs of GreMoveTo @ 0x1C0291DAC
 * Callers:
 *     NtGdiMoveTo @ 0x1C02A9060 (NtGdiMoveTo.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreMoveTo(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // r10
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[6]; // [rsp+30h] [rbp-30h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v7 = v11[0];
  v8 = 0;
  if ( !v11[0] || (*(_DWORD *)(v11[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_12;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 8LL) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v11, 0x402u);
      if ( !v10[0] )
        goto LABEL_12;
      EXFORMOBJ::bXform(
        (EXFORMOBJ *)v10,
        (struct _POINTFIX *)(*(_QWORD *)(v11[0] + 80LL) + 84LL),
        (struct _POINTL *)(*(_QWORD *)(v11[0] + 80LL) + 76LL),
        1uLL);
      v7 = v11[0];
    }
    *a4 = *(_QWORD *)(*(_QWORD *)(v7 + 80) + 76LL);
  }
  *(_DWORD *)(*(_QWORD *)(v7 + 80) + 76LL) = a2;
  *(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 80LL) = a3;
  *(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 8LL) |= 0x200u;
  *(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 8LL) &= ~0x100u;
  if ( (*(_DWORD *)(v11[0] + 176LL) & 1) == 0 )
    *(_DWORD *)(v11[0] + 216LL) = 0;
  v8 = 1;
LABEL_12:
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v8;
}
