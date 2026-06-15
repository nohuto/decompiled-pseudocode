/*
 * XREFs of ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18000C780
 * Callers:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18000D230 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180007F90 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?Find@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCVADServer@@PEAU3@@Z @ 0x18000D478 (-Find@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEBAPEAU__POSITIO.c)
 *     ?RemoveAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18000D5CC (-RemoveAt@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__PO.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180017B24 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

void __fastcall CVADServer::FinalRelease(CVADServer *this, __int64 a2, bool a3)
{
  std::_Ref_count_base *v4; // rcx
  volatile signed __int32 *v5; // rdi
  CAudioSession *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // r8
  _BYTE v15[24]; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v16; // [rsp+48h] [rbp-10h]
  CVADServer *v17; // [rsp+60h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, this);
  }
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 43);
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  v16 = v4;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 20);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 6, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 104LL))(v5);
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( *((_QWORD *)this + 26) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids);
    }
    if ( *(_QWORD *)(*((_QWORD *)this + 26) + 48LL) )
    {
      if ( *((_BYTE *)this + 204) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 256LL))(*((_QWORD *)this + 21));
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 21) + 264LL))(
        *((_QWORD *)this + 21),
        *((_QWORD *)this + 26),
        1LL);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 72LL))(*((_QWORD *)this + 26));
    *((_QWORD *)this + 26) = 0LL;
  }
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
      *((_QWORD *)this + 21));
    v6 = WPP_GLOBAL_Control;
  }
  v7 = *((_QWORD *)this + 21);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    v6 = WPP_GLOBAL_Control;
  }
  if ( v6 != (CAudioSession *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v6 + 7) & 0x100) != 0 && *((_BYTE *)v6 + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)v6 + 2), 16LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids);
      v6 = WPP_GLOBAL_Control;
    }
    if ( v6 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_DWORD *)v6 + 7) & 0x100) != 0 && *((_BYTE *)v6 + 25) >= 5u )
    {
      WPP_SF_q(*((_QWORD *)v6 + 2), 17LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, *((_QWORD *)this + 19));
      v6 = WPP_GLOBAL_Control;
    }
  }
  v8 = *((_QWORD *)this + 19);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
    v6 = WPP_GLOBAL_Control;
  }
  if ( v6 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_DWORD *)v6 + 7) & 0x100) != 0 && *((_BYTE *)v6 + 25) >= 5u )
    WPP_SF_(*((_QWORD *)v6 + 2), 18LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v15, &g_csVadList, a3);
  v17 = this;
  v10 = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::Find(v9, &v17);
  if ( v10 )
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAt(v11, v10);
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)v15);
  UpdateOffloadPowerRequest(v13, v12, v14);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, this);
  }
}
