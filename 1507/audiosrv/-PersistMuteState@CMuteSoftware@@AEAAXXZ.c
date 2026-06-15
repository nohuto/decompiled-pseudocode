/*
 * XREFs of ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x18006DAD8
 * Callers:
 *     ?OnPersistState@CMuteSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18006DA80 (-OnPersistState@CMuteSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x18006DD50 (-ProviderFinalRelease@CMuteSoftware@@UEAAXXZ.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_Sl @ 0x18006E230 (WPP_SF_Sl.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMuteSoftware::PersistMuteState(const wchar_t **this)
{
  int v2; // r8d
  PROPVARIANT pvar; // [rsp+38h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp-10h]
  __int64 v5; // [rsp+48h] [rbp-8h]
  __int64 v6; // [rsp+80h] [rbp+30h] BYREF
  __int64 v7; // [rsp+88h] [rbp+38h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x22u,
      (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      this[4]);
  }
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         this[4],
         &v7) >= 0
    && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, 1LL, &v6) >= 0 )
  {
    pvar = (PROPVARIANT)11;
    v4 = 0LL;
    v5 = 0LL;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_Sl(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        35,
        v2,
        (unsigned int)this[4],
        *((_DWORD *)this + 6));
    }
    if ( *((_DWORD *)this + 6) )
      LOWORD(v4) = -1;
    else
      LOWORD(v4) = 0;
    (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v6 + 48LL))(v6, &PKEY_APO_MasterMute, &pvar);
    PropVariantClear(&pvar);
    *((_BYTE *)this + 96) = 0;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
