/*
 * XREFs of ??1AppEnergyUsageManager@@MEAA@XZ @ 0x180048C88
 * Callers:
 *     ??_GAppEnergyUsageManager@@MEAAPEAXI@Z @ 0x180048ED0 (--_GAppEnergyUsageManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180019434 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??$_DeleteNode@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@1@@Z @ 0x180048500 (--$_DeleteNode@U-$_HashNode@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004ACE0 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall AppEnergyUsageManager::~AppEnergyUsageManager(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rsi
  ULONG_PTR *p_SpinCount; // rbx
  void **v4; // rdx
  void **v5; // rcx
  _QWORD *v6; // rax

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&AppEnergyUsageManager::`vftable';
  *(_QWORD *)&this->LockCount = &AppEnergyUsageManager::`vftable'{for `IAppEnergyUsageManager'};
  this->OwningThread = &AppEnergyUsageManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil>,1,0>'};
  v2 = *(_QWORD *)&this[3].LockCount;
  if ( v2 )
  {
    *(_QWORD *)&this[3].LockCount = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&this[3]);
  DeleteCriticalSection(this + 2);
  p_SpinCount = &this->SpinCount;
  while ( 1 )
  {
    v4 = (void **)*p_SpinCount;
    if ( (ULONG_PTR *)*p_SpinCount == p_SpinCount )
      break;
    v5 = (void **)v4[1];
    v6 = *v4;
    *v5 = *v4;
    v6[1] = v5;
    utl::_ContainerBase<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>>::_DeleteNode<utl::_HashNode<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>>(
      (__int64)v5,
      v4);
  }
  this[1].OwningThread = 0LL;
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)&this->SpinCount);
  HIDWORD(this->LockSemaphore) = -1073741823;
}
