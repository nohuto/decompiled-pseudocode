/*
 * XREFs of GreSetWindowOrg @ 0x1C011442C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0114054 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C0106160 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetWindowOrg(HDC a1, int a2, int a3)
{
  unsigned int v5; // ebx
  DC *v6; // rdx
  DC *v7; // rcx
  _BYTE v9[16]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-40h] BYREF
  DC *v11[6]; // [rsp+40h] [rbp-30h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v5 = 0;
  if ( v11[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v11, 0x204u);
    v6 = v11[0];
    if ( (*(_DWORD *)(*((_QWORD *)v11[0] + 10) + 8LL) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v9, (struct XDCOBJ *)v11, 0x402u);
      if ( RFONTOBJ::bValid((RFONTOBJ *)v9) )
        EXFORMOBJ::bXform(
          (EXFORMOBJ *)v9,
          (struct _POINTFIX *)(*((_QWORD *)v11[0] + 10) + 84LL),
          (struct _POINTL *)(*((_QWORD *)v11[0] + 10) + 76LL),
          1uLL);
      *(_DWORD *)(*((_QWORD *)v11[0] + 10) + 8LL) &= ~0x100u;
      v6 = v11[0];
    }
    *(_DWORD *)(*((_QWORD *)v6 + 10) + 8LL) |= 0x200u;
    *(_DWORD *)(*((_QWORD *)v11[0] + 10) + 352LL) |= 0x2010u;
    *(_DWORD *)(*((_QWORD *)v11[0] + 10) + 320LL) = a2;
    *(_DWORD *)(*((_QWORD *)v11[0] + 10) + 324LL) = a3;
    v7 = v11[0];
    *(_DWORD *)(*((_QWORD *)v11[0] + 10) + 316LL) = a2;
    DC::MirrorWindowOrg(v7);
    EXFORMOBJ::vInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v11, 0x402u, 0);
    v5 = 1;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v5;
}
