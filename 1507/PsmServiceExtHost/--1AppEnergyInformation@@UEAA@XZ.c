/*
 * XREFs of ??1AppEnergyInformation@@UEAA@XZ @ 0x180048BC8
 * Callers:
 *     ??_GAppEnergyInformation@@UEAAPEAXI@Z @ 0x180048E90 (--_GAppEnergyInformation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HistoricalEnergyTracker@@QEAA@XZ @ 0x180048D7C (--1HistoricalEnergyTracker@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004ACE0 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall AppEnergyInformation::~AppEnergyInformation(AppEnergyInformation *this)
{
  __int64 v2; // rsi
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  v2 = *((_QWORD *)this + 37);
  if ( v2 )
  {
    *((_QWORD *)this + 37) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease((char *)this + 272);
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)this + 30);
  HistoricalEnergyTracker::~HistoricalEnergyTracker((AppEnergyInformation *)((char *)this + 160));
  HistoricalEnergyTracker::~HistoricalEnergyTracker((AppEnergyInformation *)((char *)this + 88));
  v3 = (__int64 **)((char *)this + 24);
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
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 5) = -1073741823;
}
