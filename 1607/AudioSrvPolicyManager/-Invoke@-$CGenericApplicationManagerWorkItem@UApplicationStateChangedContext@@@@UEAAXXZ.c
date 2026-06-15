/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAXXZ @ 0x180017A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::Invoke(__int64 a1)
{
  int result; // eax
  LPVOID *v3; // rbx
  HANDLE ProcessHeap; // rax

  result = (*(__int64 (__fastcall **)(CApplicationManager *, _QWORD))(a1 + 8))(
             g_ApplicationManager,
             *(_QWORD *)(a1 + 16));
  v3 = *(LPVOID **)(a1 + 16);
  if ( v3 )
  {
    if ( *v3 )
    {
      CoTaskMemFree(*v3);
      *v3 = 0LL;
    }
    ProcessHeap = GetProcessHeap();
    return HeapFree(ProcessHeap, 0, v3);
  }
  return result;
}
