/*
 * XREFs of GreSetRectRgn @ 0x1C0042B20
 * Callers:
 *     EngSetRectRgn @ 0x1C0010FA0 (EngSetRectRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0056A9C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     NtGdiSetRectRgn @ 0x1C00B2C80 (NtGdiSetRectRgn.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B4270 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetRectRgn(HRGN a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  __int64 v8; // rax
  unsigned int v9; // r14d
  struct _RECTL v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v13[40]; // [rsp+38h] [rbp-38h] BYREF
  int v14; // [rsp+60h] [rbp-10h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v12, a1, 0, 0);
  v8 = v12;
  v9 = 0;
  if ( v12 )
  {
    v11.left = a2;
    v11.top = a3;
    v11.right = a4;
    v11.bottom = a5;
    if ( (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      ERECTL::vOrder((ERECTL *)&v11);
      RGNOBJ::vSet((RGNOBJ *)&v12, &v11);
      v8 = v12;
      v9 = 1;
    }
  }
  if ( !v14 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v12);
    v8 = v12;
  }
  if ( v8 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v13);
  return v9;
}
