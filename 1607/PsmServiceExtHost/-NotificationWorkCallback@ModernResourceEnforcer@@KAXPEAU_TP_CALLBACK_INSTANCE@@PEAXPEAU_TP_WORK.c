/*
 * XREFs of ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000A2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x18000B470 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001FB04 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::NotificationWorkCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_WORK *a3)
{
  __int64 **v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // rax
  struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *v7; // rsi
  _QWORD *v8; // rcx
  unsigned int (__fastcall *v9)(ModernResourceEnforcer *__hidden); // rax
  int v10; // eax
  void *v11; // r8
  void *v12; // r8

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 16));
  v4 = (__int64 **)(a2 + 64);
  while ( *v4 != (__int64 *)v4 )
  {
    v5 = *v4;
    v6 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v4 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v4;
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 16));
    v7 = (struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)(v5 - 17);
    ModernResourceEnforcer::ProcessWorkItem((ModernResourceEnforcer *)a2, v7);
    if ( v7 )
    {
      if ( *((_DWORD *)v7 + 32) > 1u )
      {
        v11 = (void *)*((_QWORD *)v7 + 14);
        if ( v11 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
        v12 = (void *)*((_QWORD *)v7 + 15);
        if ( v12 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      }
      v8 = (_QWORD *)*((_QWORD *)v7 + 1);
      if ( v8 != (_QWORD *)((char *)v7 + 24) )
        operator delete(v8);
      operator delete(v7);
    }
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 16));
  }
  *((_DWORD *)a2 + 72) &= ~1u;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 16));
  v9 = *(unsigned int (__fastcall **)(ModernResourceEnforcer *__hidden))(*(_QWORD *)a2 + 16LL);
  if ( v9 == ModernResourceEnforcer::Release )
  {
    v10 = _InterlockedDecrement((volatile signed __int32 *)a2 + 2);
    if ( v10 < 0 )
      __fastfail(0x80004005);
    if ( !v10 )
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
  }
  else
  {
    v9((ModernResourceEnforcer *)a2);
  }
}
