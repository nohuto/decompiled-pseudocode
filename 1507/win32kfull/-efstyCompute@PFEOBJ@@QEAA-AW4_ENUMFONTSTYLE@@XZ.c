/*
 * XREFs of ?efstyCompute@PFEOBJ@@QEAA?AW4_ENUMFONTSTYLE@@XZ @ 0x1C012618C
 * Callers:
 *     ?efstyCompute@@YA?AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z @ 0x1C0124684 (-efstyCompute@@YA-AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z.c)
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z @ 0x1C0140ABC (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::efstyCompute(__int64 a1)
{
  switch ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 52LL) & 0x21 )
  {
    case 1:
      return 2LL;
    case 32:
      return 1LL;
    case 33:
      return 3LL;
  }
  return 0LL;
}
