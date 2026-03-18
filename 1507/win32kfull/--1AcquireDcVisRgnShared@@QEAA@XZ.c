/*
 * XREFs of ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C02D16D4
 * Callers:
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00D6F80 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     GreGetRandomRgn @ 0x1C011DA40 (GreGetRandomRgn.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C0152B5C (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreGetDxRgn @ 0x1C0262720 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C0262D08 (GreHintDxUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireDcVisRgnShared::~AcquireDcVisRgnShared(AcquireDcVisRgnShared *this)
{
  CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)this + 1504LL));
}
