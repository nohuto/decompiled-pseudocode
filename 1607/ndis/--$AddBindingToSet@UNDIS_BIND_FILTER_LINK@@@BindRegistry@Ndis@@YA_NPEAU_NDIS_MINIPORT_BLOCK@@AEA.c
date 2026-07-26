/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00AAB1C
 * Callers:
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00AA758 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$KPtr@UNDIS_BIND_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A1440 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A3DE0 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00A3E54 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?grow@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A5248 (-grow@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@A.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00A6C50 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?moveElements@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAAXKKK@Z @ 0x1C00E29F4 (-moveElements@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned __int64 a3,
        struct NDIS_BIND_FILTER_LINK **a4)
{
  struct NDIS_BIND_DRIVER_BASE *v8; // rdx
  struct NDIS_BIND_FILTER_LINK *v9; // rbp
  struct NDIS_BIND_FILTER_LINK *v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  struct NDIS_BIND_FILTER_LINK **v13; // rcx
  char v14; // di
  _QWORD v16[20]; // [rsp+20h] [rbp-D8h] BYREF

  (*a4)->BindState.Miniport = a1;
  if ( Ndis::BindState::SetSource(&(*a4)->BindState, AddBindSource, Registry) && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing(*a4, (struct NDIS_PNPTRACE_LOCALS *)v16);
    if ( (unsigned __int8)byte_1C00895E3 >= 4u )
      WPP_SF_Zq(0xAu, &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, (unsigned __int16 *)v16[1], v16[0]);
  }
  if ( (*a4)->BindDriver._p == (KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *)-8LL )
    v8 = 0LL;
  else
    v8 = &(*a4)->BindDriver._p->_t.NDIS_BIND_DRIVER_BASE;
  NDIS_BIND_LINK_BASE::LinkToDriver(&(*a4)->NDIS_BIND_LINK_BASE, v8);
  v9 = *a4;
  *a4 = 0LL;
  v10 = v9;
  v11 = *(unsigned int *)(a2 + 8);
  if ( a3 <= v11
    && Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::grow(a2, (unsigned int)(v11 + 1)) )
  {
    v12 = *(unsigned int *)(a2 + 8);
    if ( a3 < v12 )
      Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::moveElements(
        a2,
        (unsigned int)a3,
        (unsigned int)(a3 + 1),
        (unsigned int)(v12 - a3));
    v13 = (struct NDIS_BIND_FILTER_LINK **)(*(_QWORD *)(a2 + 16) + 8 * a3);
    if ( v13 )
    {
      v10 = 0LL;
      *v13 = v9;
    }
    ++*(_DWORD *)(a2 + 8);
    v14 = 0;
  }
  else
  {
    v14 = 1;
  }
  if ( v10 )
  {
    KRef<NDIS_BIND_FILTER_DRIVER>::unref((volatile signed __int32 **)&v10->BindDriver);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(&v10->NDIS_BIND_LINK_BASE);
    ExFreePoolWithTag(v10, 0x4C6C4642u);
  }
  if ( v14 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
