/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@UEAAXXZ @ 0x1800179B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<ScreenReaderStateChangedContext>::Invoke(__int64 a1)
{
  volatile signed __int32 **v2; // rdi
  volatile signed __int32 *v3; // rbx

  (*(void (__fastcall **)(CApplicationManager *, _QWORD))(a1 + 8))(g_ApplicationManager, *(_QWORD *)(a1 + 16));
  v2 = *(volatile signed __int32 ***)(a1 + 16);
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 32LL))(v3);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
      }
      *v2 = 0LL;
    }
    operator delete(v2, 0x10uLL);
  }
}
