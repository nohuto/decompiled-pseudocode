/*
 * XREFs of DxgkMapContextAllocationCB @ 0x1C01333D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0009270 (DpiGetDxgAdapter.c)
 */

__int64 __fastcall DxgkMapContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 DxgAdapter; // rax

  DxgAdapter = DpiGetDxgAdapter(a1);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 1984) + 400LL)
                                                                + 8LL)
                                                    + 816LL))(
           *(_QWORD *)(*(_QWORD *)(DxgAdapter + 1984) + 408LL),
           a2);
}
