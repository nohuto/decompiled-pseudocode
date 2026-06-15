/*
 * XREFs of ?SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z @ 0x180084B10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x1800849F4 (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetDeviceFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4)
{
  struct IMMDevice *v4; // rbx
  int v7; // esi
  int v8; // eax
  struct IMMDevice *v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v10 = 0LL;
  if ( !a2 || !a3 )
  {
    v7 = -2147467261;
LABEL_7:
    if ( v7 >= 0 )
      goto LABEL_12;
    goto LABEL_8;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **, const struct tWAVEFORMATEX *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v10,
         a4);
  if ( v7 >= 0 )
  {
    v8 = CPolicyConfig::SetDeviceFormat(this, (struct IUnknown *)v10, a3);
    v4 = v10;
    v7 = v8;
    goto LABEL_7;
  }
  v4 = v10;
LABEL_8:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v7);
    v4 = v10;
  }
LABEL_12:
  if ( v4 )
    ((void (__fastcall *)(struct IMMDevice *))v4->lpVtbl->Release)(v4);
  return (unsigned int)v7;
}
