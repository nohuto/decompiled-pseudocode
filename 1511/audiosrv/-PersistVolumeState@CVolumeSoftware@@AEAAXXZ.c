/*
 * XREFs of ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x18006E008
 * Callers:
 *     ?OnPersistState@CVolumeSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18006DFB0 (-OnPersistState@CVolumeSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x18006E330 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18006D0DC (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_Sdg @ 0x18006F7B4 (WPP_SF_Sdg.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CVolumeSoftware::PersistVolumeState(const wchar_t **this)
{
  __int64 i; // rbx
  unsigned __int64 v3; // rdx
  float DB; // xmm0_4
  __int64 v5; // rax
  __int64 v6; // rax
  double v7; // [rsp+28h] [rbp-28h]
  PROPVARIANT pvar; // [rsp+38h] [rbp-18h] BYREF
  __int64 v9; // [rsp+40h] [rbp-10h]
  LPVOID v10; // [rsp+48h] [rbp-8h]
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x44u,
      (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
      this[2]);
  }
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         this[2],
         &v12) >= 0
    && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 1LL, &v11) >= 0 )
  {
    pvar = (PROPVARIANT)65;
    v9 = 0LL;
    v10 = 0LL;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x45u,
        (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        this[2]);
    }
    LODWORD(v9) = 4 * *((_DWORD *)this + 17);
    v10 = CoTaskMemAlloc((unsigned int)v9);
    if ( v10 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 17); i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= (unsigned __int64)this[5] )
          ATL::AtlThrowImpl(-2147024809);
        DB = CVolumeUnit::GetDB((CVolumeUnit *)&this[4][28 * (unsigned int)i]);
        *(float *)(v5 + 4 * i) = DB;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          if ( v3 >= (unsigned __int64)this[5] )
            ATL::AtlThrowImpl(-2147024809);
          v7 = CVolumeUnit::GetDB((CVolumeUnit *)&this[4][28 * v3]);
          WPP_SF_Sdg(
            *(_QWORD *)(v6 + 16),
            70,
            (unsigned int)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
            (unsigned int)this[2],
            i,
            SLOBYTE(v7));
        }
      }
      (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 48LL))(
        v11,
        &PKEY_APO_MasterVolumeLevel,
        &pvar);
      PropVariantClear(&pvar);
      *((_BYTE *)this + 140) = 0;
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
}
