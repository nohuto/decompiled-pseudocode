/*
 * XREFs of GreRectInRegion @ 0x1C0074D50
 * Callers:
 *     NtGdiRectInRegion @ 0x1C00C0100 (NtGdiRectInRegion.c)
 *     EngRectInRgn @ 0x1C00CB680 (EngRectInRgn.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C002D3A0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z @ 0x1C002DF50 (-bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreRectInRegion(HRGN a1, struct _RECTL *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[40]; // [rsp+28h] [rbp-40h] BYREF
  int v8; // [rsp+50h] [rbp-18h]

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v6, a1, 1, 0);
  v4 = v6;
  if ( a2 && v6 )
    LOBYTE(v3) = (unsigned int)RGNOBJ::bInside((RGNOBJ *)&v6, a2) == 2;
  if ( !v8 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v6);
    v4 = v6;
  }
  if ( v4 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v7);
  return v3;
}
