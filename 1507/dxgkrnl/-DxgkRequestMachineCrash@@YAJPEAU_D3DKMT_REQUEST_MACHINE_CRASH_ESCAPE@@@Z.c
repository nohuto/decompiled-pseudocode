/*
 * XREFs of ?DxgkRequestMachineCrash@@YAJPEAU_D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE@@@Z @ 0x1C0126004
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkRequestMachineCrash(
        struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  v5 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
  *(_QWORD *)(v5 + 24) = 30LL;
  *(struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE *)(v5 + 32) = *a1;
  *(_QWORD *)(v5 + 56) = 1LL;
  WdLogEvent5_WdAssertion(v5);
  return 3221225473LL;
}
