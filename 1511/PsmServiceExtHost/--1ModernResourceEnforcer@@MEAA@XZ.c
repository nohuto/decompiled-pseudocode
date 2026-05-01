/*
 * XREFs of ??1ModernResourceEnforcer@@MEAA@XZ @ 0x18003AA60
 * Callers:
 *     ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x18003AB40 (--_EModernResourceEnforcer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180005434 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ModernResourceEnforcer::~ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  __int64 v2; // rsi
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi

  *(_QWORD *)this = &ModernResourceEnforcer::`vftable'{for `IModernResourceEnforcer'};
  *((_QWORD *)this + 1) = &ModernResourceEnforcer::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
  v2 = *((_QWORD *)this + 31);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 31));
  v3 = (__int64 **)((char *)this + 208);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v5 = (__int64 *)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *(_QWORD *)(v6 + 8) = v5;
    operator delete(v4);
  }
  *((_QWORD *)this + 29) = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)this + 208);
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 9));
  v8 = *((_QWORD *)this + 8);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 8));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
}
