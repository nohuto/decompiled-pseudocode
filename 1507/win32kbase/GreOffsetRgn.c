/*
 * XREFs of GreOffsetRgn @ 0x1C0054700
 * Callers:
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0044440 (UserSetDCVisRgn.c)
 *     NtGdiOffsetRgn @ 0x1C0053E90 (NtGdiOffsetRgn.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0056A9C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     EngOffsetRgn @ 0x1C00BDE30 (EngOffsetRgn.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C003FF30 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  unsigned int *v5; // rax
  unsigned int v6; // esi
  bool v7; // zf
  unsigned int *v9; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v10[40]; // [rsp+28h] [rbp-38h] BYREF
  int v11; // [rsp+50h] [rbp-10h]
  struct _POINTL v12; // [rsp+88h] [rbp+28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v9, a1, 0, 0);
  v5 = v9;
  v6 = 0;
  v12.x = a2;
  v12.y = a3;
  if ( v9 )
  {
    v7 = (unsigned int)RGNOBJ::bOffset(&v9, &v12) == 0;
    v5 = v9;
    if ( !v7 )
    {
      v6 = 1;
      if ( v9[21] != 1 )
        v6 = (v9[20] > 0xA0) + 2;
    }
  }
  if ( !v11 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v9);
    v5 = v9;
  }
  if ( v5 )
    _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v10);
  return v6;
}
