/*
 * XREFs of ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x18006D6C8
 * Callers:
 *     ?GetLevelData@CMuteSoftware@@MEAAJXZ @ 0x18006D3F0 (-GetLevelData@CMuteSoftware@@MEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 *     WPP_SF_Sl @ 0x18006E230 (WPP_SF_Sl.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMuteSoftware::LoadMuteState(CMuteSoftware *this)
{
  int v2; // r14d
  int v3; // ebx
  int v4; // r8d
  BOOL v5; // eax
  PROPVARIANT pvar; // [rsp+38h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+48h] [rbp-8h]
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_QWORD *)this + 4),
         &v11);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, 0LL, &v10);
    if ( v2 >= 0 )
    {
      pvar = 0LL;
      v8 = 0LL;
      v9 = 0LL;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_S(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x1Eu,
          (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
          *((const wchar_t **)this + 4));
      }
      v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
             v10,
             &PKEY_APO_MasterMute,
             &pvar);
      if ( v3 >= 0 && (_WORD)pvar == 11 )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_SD(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x1Fu,
            (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
            *((const wchar_t **)this + 4));
        }
        v5 = (_WORD)v8 == 0xFFFF;
        *((_DWORD *)this + 6) = v5;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_Sl(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 32, v4, *((_QWORD *)this + 4), v5);
        }
      }
      PropVariantClear(&pvar);
      if ( v3 < 0
        && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x21u,
          (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
          v3);
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v2;
}
