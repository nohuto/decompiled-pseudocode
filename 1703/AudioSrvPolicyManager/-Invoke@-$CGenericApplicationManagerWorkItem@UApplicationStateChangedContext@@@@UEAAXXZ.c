/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAXXZ @ 0x180015BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::Invoke(__int64 a1)
{
  LPVOID *v2; // rbx

  (*(void (__fastcall **)(CApplicationManager *, _QWORD))(a1 + 8))(g_ApplicationManager, *(_QWORD *)(a1 + 16));
  v2 = *(LPVOID **)(a1 + 16);
  if ( v2 )
  {
    if ( *v2 )
    {
      CoTaskMemFree(*v2);
      *v2 = 0LL;
    }
    operator delete(v2, 0x10uLL);
  }
}
