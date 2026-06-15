/*
 * XREFs of ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x180057F10
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180026BFC (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180027010 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180027038 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180056804 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 */

__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  unsigned __int64 v5; // r14
  unsigned int v6; // ebx
  int v8; // esi
  float DB; // xmm0_4
  LPCRITICAL_SECTION v11; // [rsp+20h] [rbp-48h] BYREF
  char v12; // [rsp+28h] [rbp-40h]

  v5 = a2;
  v6 = -2147024809;
  v8 = -2147024809;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( (unsigned int)v5 >= *((_DWORD *)this + 29) )
  {
LABEL_15:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetChannelVolumeLevelScalar", 822, v8);
LABEL_16:
    v6 = v8;
    goto LABEL_17;
  }
  if ( a3 >= 0.0 && a3 <= 1.0 )
  {
    if ( v5 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * (unsigned int)v5));
    if ( v5 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    v8 = CVolumeUnit::SetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * (unsigned int)v5), a3);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 208LL))(this, (unsigned int)v5);
      if ( v8 < 0 )
      {
        if ( v5 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * (unsigned int)v5), DB);
      }
      else
      {
        CVolumeControlBase::RecalcMasterFromChannelLevels(this);
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 48LL))(
          *((_QWORD *)this + 16),
          0LL,
          a4);
      }
      if ( v8 >= 0 )
        goto LABEL_16;
    }
    goto LABEL_15;
  }
  AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetChannelVolumeLevelScalar", 790, -2147024809);
LABEL_17:
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  return v6;
}
