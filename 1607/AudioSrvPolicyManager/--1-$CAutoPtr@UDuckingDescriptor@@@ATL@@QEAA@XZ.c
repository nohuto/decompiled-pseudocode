/*
 * XREFs of ??1?$CAutoPtr@UDuckingDescriptor@@@ATL@@QEAA@XZ @ 0x180010260
 * Callers:
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$1 @ 0x18002558C (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$1.c)
 *     _TsSessionCreate_::_1_::dtor$0 @ 0x180025C06 (_TsSessionCreate_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ATL::CAutoPtr<DuckingDescriptor>::~CAutoPtr<DuckingDescriptor>(void **a1)
{
  void *v1; // rbx
  HANDLE ProcessHeap; // rax
  BOOL result; // eax

  v1 = *a1;
  ProcessHeap = GetProcessHeap();
  result = HeapFree(ProcessHeap, 0, v1);
  *a1 = 0LL;
  return result;
}
