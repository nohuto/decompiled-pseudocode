/*
 * XREFs of sub_180011A6C @ 0x180011A6C
 * Callers:
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x180026EBD (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     ?dtor$2@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x180026ECD (-dtor$2@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     ?dtor$3@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x180026EDD (-dtor$3@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x180026EED (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     ?dtor$5@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x180026EFD (-dtor$5@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x180026F0D (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180011A6C(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    free(v2);
  *a1 = 0LL;
}
