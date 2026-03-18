/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B4AC0
 * Callers:
 *     <none>
 * Callees:
 *     vSpDisableMultiMon_0 @ 0x1C00013F0 (vSpDisableMultiMon_0.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall MulDisablePDEV(struct DHPDEV__ *a1)
{
  _QWORD *i; // rbx

  vSpDisableMultiMon_0();
  for ( i = *(_QWORD **)a1; i; i = (_QWORD *)*i )
    PDEVOBJ::vUnreferencePdev(i + 7, 0);
  EngFreeMem(a1);
}
