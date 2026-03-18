/*
 * XREFs of ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C02D5A64
 * Callers:
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0049F00 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C012EAF8 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreGetRandomRgn @ 0x1C014BED0 (GreGetRandomRgn.c)
 *     GreGetDxRgn @ 0x1C025E870 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C025EE58 (GreHintDxUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireDcVisRgnShared::~AcquireDcVisRgnShared(AcquireDcVisRgnShared *this)
{
  CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)this + 1504LL));
}
