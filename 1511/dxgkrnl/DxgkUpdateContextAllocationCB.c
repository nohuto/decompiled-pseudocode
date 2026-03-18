/*
 * XREFs of DxgkUpdateContextAllocationCB @ 0x1C0137F70
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C00048A0 (DpiGetDxgAdapter.c)
 */

__int64 __fastcall DxgkUpdateContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 DxgAdapter; // rax

  DxgAdapter = DpiGetDxgAdapter(a1);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 1992) + 424LL)
                                                                + 8LL)
                                                    + 824LL))(
           *(_QWORD *)(*(_QWORD *)(DxgAdapter + 1992) + 432LL),
           a2);
}
