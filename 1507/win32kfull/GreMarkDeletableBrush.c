/*
 * XREFs of GreMarkDeletableBrush @ 0x1C0152ABC
 * Callers:
 *     RecolorDeskPattern @ 0x1C01011B0 (RecolorDeskPattern.c)
 *     SetDesktopPattern @ 0x1C0152980 (SetDesktopPattern.c)
 * Callees:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00E5208 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E5234 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 */

void __fastcall GreMarkDeletableBrush(HBRUSH a1)
{
  __int64 v2; // rdx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v3, a1);
  if ( v3[0] && (*(_DWORD *)(v3[0] + 48LL) & 0x200) == 0 && a1 )
  {
    LOBYTE(v2) = 16;
    HmgMarkDeletable(a1, v2);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v3);
}
