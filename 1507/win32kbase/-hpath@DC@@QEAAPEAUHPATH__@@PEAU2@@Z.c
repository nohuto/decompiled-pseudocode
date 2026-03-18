/*
 * XREFs of ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C003DF50
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B964 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     HmgIncrementShareReferenceCount @ 0x1C005E740 (HmgIncrementShareReferenceCount.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00AF604 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00AF640 (--1XEPATHOBJ@@QEAA@XZ.c)
 */

struct HPATH__ *__fastcall DC::hpath(DC *this, struct HPATH__ *a2)
{
  struct HPATH__ *v4; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  _DWORD *v7; // [rsp+28h] [rbp-80h]

  v4 = (struct HPATH__ *)*((_QWORD *)this + 21);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, v4);
      if ( v7 && (v7[22] & 1) == 0 )
        HmgDecrementShareReferenceCount(v7);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
    }
    *((_QWORD *)this + 21) = a2;
    if ( a2 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, a2);
      if ( v7 && (v7[22] & 1) == 0 )
        HmgIncrementShareReferenceCount(v7);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
    }
  }
  return (struct HPATH__ *)*((_QWORD *)this + 21);
}
