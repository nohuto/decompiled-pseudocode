/*
 * XREFs of ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00C25A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0031D10 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall MulCompletePDEV(struct DHPDEV__ *a1, HDEV a2)
{
  HDEV v2; // rbp
  struct _LIST_ENTRY **i; // rbx

  v2 = (HDEV)*((_QWORD *)a1 + 4);
  if ( v2 != a2 )
  {
    if ( *((HDEV *)a1 + 5) == a2 )
      *((_QWORD *)a1 + 5) = v2;
    for ( i = *(struct _LIST_ENTRY ***)a1; i; i = (struct _LIST_ENTRY **)*i )
    {
      if ( i[7] == (struct _LIST_ENTRY *)a2 )
      {
        PDEVOBJ::vUnreferencePdev(i + 7, 0);
        i[6] = (struct _LIST_ENTRY *)v2;
        i[7] = (struct _LIST_ENTRY *)v2;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)(i + 7));
      }
    }
    *((_QWORD *)a1 + 4) = a2;
  }
}
