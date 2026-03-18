/*
 * XREFs of ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C025E4D4
 * Callers:
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0005F34 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     XEPATHOBJ_vConstructHPATHWrap @ 0x1C0005FA0 (XEPATHOBJ_vConstructHPATHWrap.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00CB138 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C027BDA8 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoTGO::vGuard(CAutoTGO *this, void *a2, void (*a3)(void *))
{
  if ( !*((_DWORD *)this + 8) )
  {
    if ( a3 )
    {
      PushThreadGuardedObject(this, a2, a3);
      *((_DWORD *)this + 8) = 1;
    }
  }
}
