/*
 * XREFs of ?DxgkRequestMachineCrash@@YAJPEAU_D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE@@@Z @ 0x1C012C1E4
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkRequestMachineCrash(struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE *a1)
{
  __int64 v2; // rax

  v2 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v2 + 24) = 30LL;
  *(struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE *)(v2 + 32) = *a1;
  *(_QWORD *)(v2 + 56) = 1LL;
  WdLogEvent5_WdAssertion(v2);
  return 3221225473LL;
}
