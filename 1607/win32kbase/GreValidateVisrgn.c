/*
 * XREFs of GreValidateVisrgn @ 0x1C00209DC
 * Callers:
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 * Callees:
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00272C0 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00272DC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00BD700 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00C1980 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB930 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 */

void __fastcall GreValidateVisrgn(HDC a1, int a2)
{
  bool v3; // bl
  struct _RECTL v4; // [rsp+20h] [rbp-40h] BYREF
  struct DC *v5[6]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+80h] [rbp+20h] BYREF
  char v7; // [rsp+88h] [rbp+28h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v5, a1);
  if ( v5[0] )
  {
    if ( a2 )
      *((_DWORD *)v5[0] + 9) |= 0x100000u;
    else
      *((_DWORD *)v5[0] + 9) &= ~0x100000u;
    AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v6, v5[0]);
    v3 = GrepValidateVisRgn(v5[0], *((struct REGION **)v5[0] + 192), (struct ERECTL *)&v4);
    AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v6);
    if ( !v3 )
    {
      AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)&v7, v5[0]);
      v6 = *((_QWORD *)v5[0] + 192);
      if ( (unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v6) )
        RGNOBJ::vSet((RGNOBJ *)&v6, &v4);
      AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v7);
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v5);
}
