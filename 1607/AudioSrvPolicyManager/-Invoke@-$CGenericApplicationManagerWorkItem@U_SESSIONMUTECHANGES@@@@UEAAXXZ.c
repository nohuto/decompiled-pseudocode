/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@UEAAXXZ @ 0x180010960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall CGenericApplicationManagerWorkItem<_SESSIONMUTECHANGES>::Invoke(__int64 a1)
{
  void *v2; // rbx
  HANDLE ProcessHeap; // rax

  (*(void (__fastcall **)(CApplicationManager *, _QWORD))(a1 + 8))(g_ApplicationManager, *(_QWORD *)(a1 + 16));
  v2 = *(void **)(a1 + 16);
  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, v2);
}
