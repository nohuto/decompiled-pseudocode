/*
 * XREFs of ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x18009BD98
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180099364 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitor::SetSessionTitleAndIcon(CMonitor *this, struct IMMDevice *a2)
{
  int v3; // esi
  PROPVARIANT pvar; // [rsp+28h] [rbp-18h] BYREF
  __int64 v6; // [rsp+30h] [rbp-10h]
  __int64 v7; // [rsp+38h] [rbp-8h]
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF

  v8 = 0LL;
  pvar = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v8);
  if ( v3 < 0 )
    goto LABEL_11;
  v3 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
         v8,
         &PKEY_Device_FriendlyName,
         &pvar);
  if ( v3 < 0 )
    goto LABEL_11;
  if ( (_WORD)pvar == 31 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 27) + 40LL))(
           *((_QWORD *)this + 27),
           v6,
           0LL);
    if ( v3 < 0 )
      goto LABEL_11;
  }
  PropVariantClear(&pvar);
  v3 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
         v8,
         &PKEY_DeviceClass_IconPath,
         &pvar);
  if ( v3 < 0 )
    goto LABEL_11;
  if ( (_WORD)pvar == 31 )
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 27) + 56LL))(
           *((_QWORD *)this + 27),
           v6,
           0LL);
  if ( v3 < 0 )
  {
LABEL_11:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x19u,
        (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
        v3);
    }
  }
  PropVariantClear(&pvar);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v3;
}
