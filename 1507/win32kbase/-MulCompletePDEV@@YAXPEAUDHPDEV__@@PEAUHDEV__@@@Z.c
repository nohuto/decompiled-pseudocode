/*
 * XREFs of ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00B4A40
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00346B0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall MulCompletePDEV(struct DHPDEV__ *a1, HDEV a2)
{
  HDEV v2; // rbp
  _QWORD *i; // rbx

  v2 = (HDEV)*((_QWORD *)a1 + 4);
  if ( v2 != a2 )
  {
    if ( *((HDEV *)a1 + 5) == a2 )
      *((_QWORD *)a1 + 5) = v2;
    for ( i = *(_QWORD **)a1; i; i = (_QWORD *)*i )
    {
      if ( (HDEV)i[7] == a2 )
      {
        PDEVOBJ::vUnreferencePdev(i + 7, 0);
        i[6] = v2;
        i[7] = v2;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)(i + 7));
      }
    }
    *((_QWORD *)a1 + 4) = a2;
  }
}
