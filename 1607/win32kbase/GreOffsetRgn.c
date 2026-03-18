/*
 * XREFs of GreOffsetRgn @ 0x1C0036A90
 * Callers:
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0034760 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     UserSetDCVisRgn @ 0x1C0036CE0 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0078F90 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     NtGdiOffsetRgn @ 0x1C007B8B0 (NtGdiOffsetRgn.c)
 *     EngOffsetRgn @ 0x1C00CB610 (EngOffsetRgn.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C002D3A0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C002E420 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  int *v5; // rax
  unsigned int v6; // esi
  bool v7; // zf
  int *v9; // [rsp+20h] [rbp-40h] BYREF
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
        v6 = ((unsigned int)v9[20] > 0xA0) + 2;
    }
  }
  if ( !v11 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v9);
    v5 = v9;
  }
  if ( v5 )
    _InterlockedDecrement(v5 + 3);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v10);
  return v6;
}
