/*
 * XREFs of GreSetWindowOrg @ 0x1C013F02C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013EC54 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0019BF0 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C01306B8 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetWindowOrg(HDC a1, int a2, int a3)
{
  unsigned int v5; // ebx
  DC *v6; // rdx
  DC *v7; // rcx
  DC *v9[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v5 = 0;
  if ( v9[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v9, 0x204u);
    v6 = v9[0];
    if ( (*(_DWORD *)(*((_QWORD *)v9[0] + 10) + 8LL) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v9, 0x402u);
      if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v10) )
        EXFORMOBJ::bXform(
          (EXFORMOBJ *)v10,
          (struct _POINTFIX *)(*((_QWORD *)v9[0] + 10) + 84LL),
          (struct _POINTL *)(*((_QWORD *)v9[0] + 10) + 76LL),
          1uLL);
      *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 8LL) &= ~0x100u;
      v6 = v9[0];
    }
    *(_DWORD *)(*((_QWORD *)v6 + 10) + 8LL) |= 0x200u;
    *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 352LL) |= 0x2010u;
    *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 320LL) = a2;
    *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 324LL) = a3;
    v7 = v9[0];
    *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 316LL) = a2;
    DC::MirrorWindowOrg(v7);
    EXFORMOBJ::vInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v9, 0x402u, 0);
    v5 = 1;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v5;
}
