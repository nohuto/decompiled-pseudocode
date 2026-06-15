/*
 * XREFs of ?OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180080BE4
 * Callers:
 *     ?OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18007D1B0 (-OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::OnDeviceDescriptionChanged(CMonitor *this, struct IMMDevice *a2)
{
  int v4; // eax
  LPCRITICAL_SECTION v5; // [rsp+38h] [rbp-28h] BYREF
  char v6; // [rsp+40h] [rbp-20h]
  PROPVARIANT pvar; // [rsp+48h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp-10h]
  __int64 v9; // [rsp+58h] [rbp-8h]
  __int64 v10; // [rsp+70h] [rbp+10h] BYREF

  v10 = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v5, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Au,
      (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
      this,
      *((_DWORD *)this + 14));
  }
  if ( (unsigned int)(*((_DWORD *)this + 14) - 2) <= 2 )
  {
    pvar = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v4 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v10);
    if ( v4 < 0 )
      goto LABEL_13;
    v4 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
           v10,
           &PKEY_Device_FriendlyName,
           &pvar);
    if ( v4 < 0 )
      goto LABEL_13;
    if ( (_WORD)pvar == 31 )
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 27) + 40LL))(
             *((_QWORD *)this + 27),
             v8,
             0LL);
    if ( v4 < 0 )
    {
LABEL_13:
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Bu,
          (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
          v4);
      }
    }
    PropVariantClear(&pvar);
  }
  if ( v6 )
    ATL::CCritSecLock::Unlock(&v5);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
