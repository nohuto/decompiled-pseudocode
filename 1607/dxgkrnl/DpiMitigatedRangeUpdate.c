/*
 * XREFs of DpiMitigatedRangeUpdate @ 0x1C01933CC
 * Callers:
 *     DxgkMitigatedRangeUpdateCB @ 0x1C0022270 (DxgkMitigatedRangeUpdateCB.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMitigatedRangeUpdate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  void *v7; // rdx
  __int64 v8; // rax
  PIRP v9; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = (unsigned int)a2;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 3688) + 2136LL);
  if ( (unsigned int)a2 <= *(_DWORD *)(v6 + 1068)
    && (a2 = *(_QWORD *)(*(_QWORD *)(v6 + 1072) + 8LL * (unsigned int)a2)) != 0 )
  {
    v7 = *(void **)(a2 + 32);
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = v5;
    WdLogEvent5_WdWarning(v8);
    v7 = 0LL;
  }
  if ( v7 )
  {
    v9 = IoCsqRemoveNextIrp((PIO_CSQ)(v4 + 4840), v7);
    if ( v9 )
    {
      v9->AssociatedIrp.MasterIrp->Type = v5;
      v9->IoStatus.Status = 0;
      v9->IoStatus.Information = 2LL;
      IofCompleteRequest(v9, 1);
    }
  }
}
