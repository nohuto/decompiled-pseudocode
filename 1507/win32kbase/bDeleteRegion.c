/*
 * XREFs of bDeleteRegion @ 0x1C0044670
 * Callers:
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0042D40 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

_BOOL8 __fastcall bDeleteRegion(HRGN a1)
{
  __int64 *v1; // rax
  bool v2; // zf
  BOOL v3; // ebx
  __int64 *v5; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[40]; // [rsp+28h] [rbp-40h] BYREF
  int v7; // [rsp+50h] [rbp-18h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v5, a1, 0, 0);
  v1 = v5;
  v3 = 0;
  if ( v5 )
  {
    if ( !*((_DWORD *)v5 + 8) )
    {
      v2 = (unsigned int)RGNOBJAPI::bDeleteRGNOBJAPI(&v5) == 0;
      v1 = v5;
      if ( !v2 )
        v3 = 1;
    }
  }
  if ( !v7 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v5);
    v1 = v5;
  }
  if ( v1 )
    _InterlockedDecrement((volatile signed __int32 *)v1 + 3);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v6);
  return v3;
}
