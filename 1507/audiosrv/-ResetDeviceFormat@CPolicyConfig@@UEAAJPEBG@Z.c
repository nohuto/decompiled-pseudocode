/*
 * XREFs of ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180087E50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180032F04 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z @ 0x180084BB8 (-ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x1800884F4 (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::ResetDeviceFormat(CPolicyConfig *this, const unsigned __int16 *a2)
{
  int v4; // esi
  struct _GUID v6; // [rsp+30h] [rbp-20h] BYREF
  struct IMMDevice *v7; // [rsp+88h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+90h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v9; // [rsp+98h] [rbp+48h] BYREF

  pv = 0LL;
  v9 = 0LL;
  v7 = 0LL;
  if ( a2 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                          + 40LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           a2,
           &v7);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, _QWORD, struct tWAVEFORMATEX **))(*(_QWORD *)this + 32LL))(
             this,
             a2,
             0LL,
             &v9);
      if ( v4 >= 0 )
      {
        v6 = GUID_00000000_0000_0000_0000_000000000000;
        v4 = CPolicyConfig::ConfirmDeviceFormat((struct IUnknown *)v7, v9, &v6, eHostProcessConnector, 0);
        if ( v4 >= 0 )
          goto LABEL_14;
        v4 = CPolicyConfig::SetDeviceFormat(this, v7, 0LL);
        if ( v4 >= 0 )
        {
          v4 = CPolicyConfig::ClearMixFormats(v7);
          if ( v4 >= 0 )
          {
            v4 = (*(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, __int64, LPVOID *))(*(_QWORD *)this + 32LL))(
                   this,
                   a2,
                   1LL,
                   &pv);
            if ( v4 >= 0 )
            {
              v4 = CPolicyConfig::SetDeviceFormat(this, v7, (const struct tWAVEFORMATEX *)pv);
              if ( v4 >= 0 )
                goto LABEL_14;
            }
          }
        }
      }
    }
  }
  else
  {
    v4 = -2147467261;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x39u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v4);
  }
LABEL_14:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v9 )
  {
    CoTaskMemFree(v9);
    v9 = 0LL;
  }
  if ( v7 )
    ((void (__fastcall *)(struct IMMDevice *))v7->lpVtbl->Release)(v7);
  return (unsigned int)v4;
}
