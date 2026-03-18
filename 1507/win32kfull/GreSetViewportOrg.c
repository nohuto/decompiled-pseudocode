/*
 * XREFs of GreSetViewportOrg @ 0x1C00F8B4C
 * Callers:
 *     xxxMenuDraw @ 0x1C0050108 (xxxMenuDraw.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00F8334 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetViewportOrg(HDC a1, int a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD v9[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v11[6]; // [rsp+40h] [rbp-30h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v5 = v11[0];
  v6 = 0;
  if ( v11[0] )
  {
    v7 = *(_QWORD *)(v11[0] + 80LL);
    if ( (*(_DWORD *)(v7 + 312) & 1) != 0 )
      a2 = -a2;
    if ( (unsigned int)(a2 + 134217726) <= 0xFFFFFFC && (unsigned int)(a3 + 134217726) <= 0xFFFFFFC )
    {
      if ( (*(_DWORD *)(v7 + 8) & 0x100) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v9, (struct XDCOBJ *)v11, 0x402u);
        if ( v9[0] )
          EXFORMOBJ::bXform(
            (EXFORMOBJ *)v9,
            (struct _POINTFIX *)(*(_QWORD *)(v11[0] + 80LL) + 84LL),
            (struct _POINTL *)(*(_QWORD *)(v11[0] + 80LL) + 76LL),
            1uLL);
        *(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 8LL) &= ~0x100u;
        v5 = v11[0];
      }
      *(_DWORD *)(*(_QWORD *)(v5 + 80) + 8LL) |= 0x200u;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v11, 0x204u);
      *(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 352LL) |= 0x2010u;
      *(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 336LL) = a2;
      *(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 340LL) = a3;
      EXFORMOBJ::vInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v11, 0x402u, 0);
      v6 = 1;
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v6;
}
