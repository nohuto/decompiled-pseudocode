/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B70F0
 * Callers:
 *     <none>
 * Callees:
 *     vSpDisableMultiMon_0 @ 0x1C0001390 (vSpDisableMultiMon_0.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall MulDisablePDEV(struct DHPDEV__ *a1)
{
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C **i; // rbx

  vSpDisableMultiMon_0();
  for ( i = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C ***)a1;
        i;
        i = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C **)*i )
  {
    PDEVOBJ::vUnreferencePdev(i + 7, 0);
  }
  EngFreeMem(a1);
}
