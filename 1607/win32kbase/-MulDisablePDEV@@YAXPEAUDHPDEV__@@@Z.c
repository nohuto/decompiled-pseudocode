/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C2620
 * Callers:
 *     <none>
 * Callees:
 *     vSpDisableMultiMon_0 @ 0x1C0001400 (vSpDisableMultiMon_0.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall MulDisablePDEV(struct DHPDEV__ *a1)
{
  struct _LIST_ENTRY **i; // rbx

  vSpDisableMultiMon_0();
  for ( i = *(struct _LIST_ENTRY ***)a1; i; i = (struct _LIST_ENTRY **)*i )
    PDEVOBJ::vUnreferencePdev(i + 7, 0);
  EngFreeMem(a1);
}
