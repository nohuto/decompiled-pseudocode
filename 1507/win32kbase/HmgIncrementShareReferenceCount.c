/*
 * XREFs of HmgIncrementShareReferenceCount @ 0x1C005E740
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0035490 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003DDD0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C003DF50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C004A7B8 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C005D870 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C005DCB0 (bMigrateSurfaceForConversion.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00AF0D0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B78B0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C00BAC04 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00B30A0 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall HmgIncrementShareReferenceCount(int *a1)
{
  int v2; // ecx
  _BYTE v3[40]; // [rsp+30h] [rbp-28h] BYREF

  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)v3,
    (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*a1),
    0,
    (unsigned __int16)*a1,
    0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)v3) )
  {
    v2 = *a1;
    if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1)
      && *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v2 + 14) == 5
      && gpentHmgrAltStacks )
    {
      RECALTLOCKSTACKBACKTRACE(
        (unsigned __int16)v2,
        *(struct _BASEOBJECT **)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v2));
    }
    ++a1[2];
    HANDLELOCK::vUnlock((HANDLELOCK *)v3);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v3);
}
