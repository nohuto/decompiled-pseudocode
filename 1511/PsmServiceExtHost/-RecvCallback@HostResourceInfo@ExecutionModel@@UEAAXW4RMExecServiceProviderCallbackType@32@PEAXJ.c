/*
 * XREFs of ?RecvCallback@HostResourceInfo@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x18004E020
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??4?$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@utl@@QEAAAEAV01@AEBV01@@Z @ 0x18004D860 (--4-$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@utl@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ChangeCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z @ 0x18004DB54 (-ChangeCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z.c)
 *     ?_DecStrong@_RefCountBase@utl@@QEAAXXZ @ 0x18004E120 (-_DecStrong@_RefCountBase@utl@@QEAAXXZ.c)
 */

void __fastcall ExecutionModel::HostResourceInfo::RecvCallback(
        ExecutionModel::HostResourceInfo *a1,
        int a2,
        __int64 *a3,
        int a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  bool v8; // sf
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  utl::_RefCountBase *v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 == 1 && a3 )
  {
    v13 = 0LL;
    utl::shared_ptr<ExecutionModel::PendingCustomMemoryLimit>::operator=(&v13, a3);
    if ( (a3[1] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      utl::_RefCountBase::_DecStrong((utl::_RefCountBase *)(a3[1] & 0xFFFFFFFFFFFFFFFEuLL));
    operator delete(a3);
    v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)a1 + 2);
    EnterCriticalSection(v7 + 1);
    v8 = a4 < 0;
    v9 = v13;
    if ( v8 )
    {
      *(_BYTE *)(v13 + 16) = 0;
    }
    else if ( (_QWORD)v13 == *((_QWORD *)a1 + 24) && *(_BYTE *)(v13 + 16) )
    {
      ExecutionModel::HostResourceInfo::ChangeCustomMemoryPolicy(
        a1,
        *(struct ExecutionModel::ResourceSetImpl **)(v13 + 24),
        *(_QWORD *)v13);
    }
    LeaveCriticalSection(v7 + 1);
    v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 80LL) + 128LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 32LL))(v10, *(_QWORD *)(v9 + 8));
    v11 = *((_QWORD *)&v13 + 1);
    *(_QWORD *)(v9 + 8) = 0LL;
    v12 = (utl::_RefCountBase *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v12 )
      utl::_RefCountBase::_DecStrong(v12);
  }
}
