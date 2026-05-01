/*
 * XREFs of ??1AppEnergyUsageManager@@MEAA@XZ @ 0x18004FC40
 * Callers:
 *     ??_GAppEnergyUsageManager@@MEAAPEAXI@Z @ 0x18004FEA0 (--_GAppEnergyUsageManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180005434 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??$_DeleteNode@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@1@@Z @ 0x18004F4B0 (--$_DeleteNode@U-$_HashNode@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180051B58 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall AppEnergyUsageManager::~AppEnergyUsageManager(struct _RTL_CRITICAL_SECTION *this)
{
  ULONG_PTR *p_SpinCount; // rbx
  __int64 v3; // rsi
  ULONG_PTR *v4; // rbx
  void **v5; // rdx
  void **v6; // rcx
  _QWORD *v7; // rax

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&AppEnergyUsageManager::`vftable';
  p_SpinCount = &this[1].SpinCount;
  *(_QWORD *)&this->LockCount = &AppEnergyUsageManager::`vftable'{for `IAppEnergyUsageManager'};
  this->OwningThread = &AppEnergyUsageManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( LODWORD(this[1].SpinCount) || HIDWORD(this[1].SpinCount) )
  {
    NtDeleteWnfStateName(&this[1].SpinCount);
    *p_SpinCount = 0LL;
  }
  v3 = *(_QWORD *)&this[3].LockCount;
  if ( v3 )
  {
    *(_QWORD *)&this[3].LockCount = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&this[3]);
  DeleteCriticalSection(this + 2);
  v4 = &this->SpinCount;
  while ( 1 )
  {
    v5 = (void **)*v4;
    if ( (ULONG_PTR *)*v4 == v4 )
      break;
    v6 = (void **)v5[1];
    v7 = *v5;
    *v6 = *v5;
    v7[1] = v6;
    utl::_ContainerBase<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>>::_DeleteNode<utl::_HashNode<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>>(
      (__int64)v6,
      v5);
  }
  this[1].OwningThread = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)&this->SpinCount);
  HIDWORD(this->LockSemaphore) = -1073741823;
}
