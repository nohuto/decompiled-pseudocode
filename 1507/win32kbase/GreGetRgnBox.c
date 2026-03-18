/*
 * XREFs of GreGetRgnBox @ 0x1C000BED0
 * Callers:
 *     NtGdiGetRgnBox @ 0x1C000BE90 (NtGdiGetRgnBox.c)
 *     EngGetRgnBox @ 0x1C00BDD40 (EngGetRgnBox.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreGetRgnBox(HRGN a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[40]; // [rsp+28h] [rbp-40h] BYREF
  int v8; // [rsp+50h] [rbp-18h]

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v6, a1, 1, 0);
  v4 = v6;
  if ( a2 && v6 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(v6 + 88);
    if ( *(_DWORD *)(v4 + 84) == 1 )
    {
      *(_DWORD *)a2 = 0;
      v3 = 1;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 12) = 0;
    }
    else
    {
      LOBYTE(v3) = *(_DWORD *)(v4 + 80) > 0xA0u;
      v3 += 2;
    }
  }
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
