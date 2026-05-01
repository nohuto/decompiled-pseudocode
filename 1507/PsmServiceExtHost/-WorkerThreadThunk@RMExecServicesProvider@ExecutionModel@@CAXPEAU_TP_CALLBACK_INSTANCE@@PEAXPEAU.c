/*
 * XREFs of ?WorkerThreadThunk@RMExecServicesProvider@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180017AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x18000B210 (-RecvCallback@ModernResourceEnforcer@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@.c)
 *     ?Release@HostResources@ExecutionModel@@UEAAKXZ @ 0x180018220 (-Release@HostResources@ExecutionModel@@UEAAKXZ.c)
 *     ?RecvCallback@HostResources@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x180018250 (-RecvCallback@HostResources@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ExecutionModel::RMExecServicesProvider::WorkerThreadThunk(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_WORK *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  char *v5; // rbx
  void *v6; // r8
  _QWORD *v7; // rcx
  __int64 *v8; // r15
  __int64 v9; // rax
  void (__fastcall *v10)(__int64, __int64, unsigned int *); // r12
  unsigned int (__fastcall *v11)(ExecutionModel::HostResources *__hidden); // r14

  v3 = (struct _RTL_CRITICAL_SECTION *)(a2 + 32);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a2 + 32));
  v5 = a2 + 72;
  while ( *(char **)v5 != v5 )
  {
    v6 = *(void **)v5;
    v7 = *(_QWORD **)(*(_QWORD *)v5 + 8LL);
    v8 = *(__int64 **)(*(_QWORD *)v5 + 16LL);
    v9 = **(_QWORD **)v5;
    *v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    operator delete(v6);
    --*((_QWORD *)v5 + 2);
    RtlLeaveCriticalSection(v3);
    v10 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)*v8 + 24LL);
    if ( v10 == ModernResourceEnforcer::RecvCallback )
    {
      ModernResourceEnforcer::RecvCallback(*v8, 2LL, (unsigned int *)v8[1]);
    }
    else if ( (char *)v10 == (char *)ExecutionModel::HostResources::RecvCallback )
    {
      ExecutionModel::HostResources::RecvCallback(*v8, 2LL, v8[1]);
    }
    else
    {
      v10(*v8, 2LL, (unsigned int *)v8[1]);
    }
    if ( *v8 )
    {
      v11 = *(unsigned int (__fastcall **)(ExecutionModel::HostResources *__hidden))(*(_QWORD *)*v8 + 16LL);
      if ( v11 == ExecutionModel::HostResources::Release )
        ExecutionModel::HostResources::Release((ExecutionModel::HostResources *)*v8);
      else
        v11((ExecutionModel::HostResources *)*v8);
    }
    operator delete(v8);
    RtlEnterCriticalSection(v3);
  }
  a2[25] = 0;
  RtlLeaveCriticalSection(v3);
}
