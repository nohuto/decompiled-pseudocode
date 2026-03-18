/*
 * XREFs of ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003CC0C
 * Callers:
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0034150 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00AF5E0 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 */

void __fastcall DC::vReleaseVis(DC *this)
{
  int v1; // eax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v1 + 15) |= 4u;
  AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)&v3, this);
  REGION::vDeleteREGION(*((REGION **)this + 192));
  *((_QWORD *)this + 192) = prgnDefault;
  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v3);
}
