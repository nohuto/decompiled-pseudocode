/*
 * XREFs of ?vHalve@@YAXAEAVEVECTORFX@@@Z @ 0x1C011A668
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C00CBE78 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C011A52C (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vHalve(struct EVECTORFX *a1)
{
  int v1; // eax

  if ( *(int *)a1 >= 0 )
    ++*(_DWORD *)a1;
  v1 = *((_DWORD *)a1 + 1);
  if ( v1 >= 0 )
    *((_DWORD *)a1 + 1) = v1 + 1;
  *(int *)a1 >>= 1;
  *((int *)a1 + 1) >>= 1;
}
