/*
 * XREFs of ?vReleaseVis@DC@@QEAAXXZ @ 0x1C002BAFC
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0036608 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00BD700 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 */

void __fastcall DC::vReleaseVis(DC *this)
{
  struct _ENTRY *EntryFromObject; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 9) |= 0x10u;
  EntryFromObject = GdiHandleManager::GetEntryFromObject(
                      (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                      this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)&v3, this);
  REGION::vDeleteREGION(*((REGION **)this + 192));
  *((_QWORD *)this + 192) = prgnDefault;
  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v3);
}
