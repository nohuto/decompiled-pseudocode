/*
 * XREFs of GreSetViewportOrg @ 0x1C0101830
 * Callers:
 *     xxxMenuDraw @ 0x1C0014214 (xxxMenuDraw.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C010E45C (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     xxxDrawState @ 0x1C023DD88 (xxxDrawState.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetViewportOrg(HDC a1, int a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v5 = v9[0];
  v6 = 0;
  if ( v9[0] )
  {
    v7 = *(_QWORD *)(v9[0] + 80LL);
    if ( (*(_DWORD *)(v7 + 312) & 1) != 0 )
      a2 = -a2;
    if ( (unsigned int)(a2 + 134217726) <= 0xFFFFFFC && (unsigned int)(a3 + 134217726) <= 0xFFFFFFC )
    {
      if ( (*(_DWORD *)(v7 + 8) & 0x100) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v9, 0x402u);
        if ( v10[0] )
          EXFORMOBJ::bXform(
            (EXFORMOBJ *)v10,
            (struct _POINTFIX *)(*(_QWORD *)(v9[0] + 80LL) + 84LL),
            (struct _POINTL *)(*(_QWORD *)(v9[0] + 80LL) + 76LL),
            1uLL);
        *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 8LL) &= ~0x100u;
        v5 = v9[0];
      }
      *(_DWORD *)(*(_QWORD *)(v5 + 80) + 8LL) |= 0x200u;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v9, 0x204u);
      *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 352LL) |= 0x2010u;
      *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 336LL) = a2;
      *(_DWORD *)(*(_QWORD *)(v9[0] + 80LL) + 340LL) = a3;
      EXFORMOBJ::vInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v9, 0x402u, 0);
      v6 = 1;
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v9);
  return v6;
}
