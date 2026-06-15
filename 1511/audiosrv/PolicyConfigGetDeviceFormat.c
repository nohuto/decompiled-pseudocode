/*
 * XREFs of PolicyConfigGetDeviceFormat @ 0x180038250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A5C0 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     MIDL_user_allocate @ 0x180038320 (MIDL_user_allocate.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormat(__int64 a1, const unsigned __int16 *a2, unsigned int a3, _QWORD *a4)
{
  __int64 (__fastcall *v5)(CPolicyConfig *, const unsigned __int16 *, int, struct tWAVEFORMATEX **); // rdi
  int DeviceFormat; // eax
  int v7; // ebx
  void *v8; // rax
  void *Src; // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  Src = 0LL;
  v5 = *(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, int, struct tWAVEFORMATEX **))(*(_QWORD *)g_PolicyConfig + 32LL);
  if ( v5 == CPolicyConfig::GetDeviceFormat )
    DeviceFormat = CPolicyConfig::GetDeviceFormat(g_PolicyConfig, a2, a3, (struct tWAVEFORMATEX **)&Src);
  else
    DeviceFormat = v5(g_PolicyConfig, a2, a3, (struct tWAVEFORMATEX **)&Src);
  v7 = DeviceFormat;
  if ( DeviceFormat >= 0 )
  {
    v8 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a4 = v8;
    if ( v8 )
      memcpy_0(v8, Src, *((unsigned __int16 *)Src + 8) + 18LL);
    else
      v7 = -2147024882;
  }
  if ( Src )
  {
    CoTaskMemFree(Src);
    Src = 0LL;
  }
  if ( v7 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      119LL,
      &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      (unsigned int)v7);
  }
  return (unsigned int)v7;
}
