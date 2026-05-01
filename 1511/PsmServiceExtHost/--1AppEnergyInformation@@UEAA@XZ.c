/*
 * XREFs of ??1AppEnergyInformation@@UEAA@XZ @ 0x18004FB40
 * Callers:
 *     ??_GAppEnergyInformation@@UEAAPEAXI@Z @ 0x18004FE60 (--_GAppEnergyInformation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001269C (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_delete@VAppEnergyInformationForUser@@@tlx@@YAXPEAVAppEnergyInformationForUser@@@Z @ 0x18004F864 (--$_delete@VAppEnergyInformationForUser@@@tlx@@YAXPEAVAppEnergyInformationForUser@@@Z.c)
 *     ??1HistoricalEnergyTracker@@QEAA@XZ @ 0x18004FD50 (--1HistoricalEnergyTracker@@QEAA@XZ.c)
 *     ?DeleteEnergyUsageWnfStates@AppEnergyInformation@@IEAAXPEAUEnergyNotificationStates@@@Z @ 0x180050200 (-DeleteEnergyUsageWnfStates@AppEnergyInformation@@IEAAXPEAUEnergyNotificationStates@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180051B58 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall AppEnergyInformation::~AppEnergyInformation(AppEnergyInformation *this)
{
  AppEnergyInformation *v2; // rcx
  __int64 v3; // rsi
  __int64 **v4; // rsi
  __int64 *v5; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rcx

  *(_QWORD *)this = &AppEnergyInformation::`vftable'{for `IEnergyNotificationHandler'};
  *((_QWORD *)this + 1) = &AppEnergyInformation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ExecutionModel::IRMExecServicesProviderCallback,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 35) = 0LL;
  AppEnergyInformation::DeleteEnergyUsageWnfStates(this, (AppEnergyInformation *)((char *)this + 48));
  AppEnergyInformation::DeleteEnergyUsageWnfStates(v2, (AppEnergyInformation *)((char *)this + 68));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  v3 = *((_QWORD *)this + 37);
  if ( v3 )
  {
    *((_QWORD *)this + 37) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease((char *)this + 272);
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)this + 30);
  HistoricalEnergyTracker::~HistoricalEnergyTracker((AppEnergyInformation *)((char *)this + 160));
  HistoricalEnergyTracker::~HistoricalEnergyTracker((AppEnergyInformation *)((char *)this + 88));
  v4 = (__int64 **)((char *)this + 24);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (__int64 *)v4 )
      break;
    v6 = (__int64 *)v5[1];
    v7 = *v5;
    *v6 = *v5;
    *(_QWORD *)(v7 + 8) = v6;
    v8 = (_QWORD *)v5[2];
    if ( v8 )
      tlx::_delete<AppEnergyInformationForUser>(v8);
    operator delete(v5);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 5) = -1073741823;
}
