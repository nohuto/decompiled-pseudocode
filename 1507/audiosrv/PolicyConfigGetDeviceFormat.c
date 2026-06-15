/*
 * XREFs of PolicyConfigGetDeviceFormat @ 0x180037C20
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180030500 (MIDL_user_allocate.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180037FA0 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormat(__int64 a1, const unsigned __int16 *a2, unsigned int a3, _QWORD *a4)
{
  int (*v5)(CPolicyConfig *__hidden, const unsigned __int16 *, int, struct tWAVEFORMATEX **); // rdi
  int DeviceFormat; // eax
  int v7; // ebx
  void *v8; // rax
  void *Src; // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  Src = 0LL;
  v5 = *(int (**)(CPolicyConfig *__hidden, const unsigned __int16 *, int, struct tWAVEFORMATEX **))(*(_QWORD *)g_PolicyConfig
                                                                                                  + 32LL);
  if ( v5 == CPolicyConfig::GetDeviceFormat )
    DeviceFormat = CPolicyConfig::GetDeviceFormat(g_PolicyConfig, a2, a3, (struct tWAVEFORMATEX **)&Src);
  else
    DeviceFormat = ((__int64 (__fastcall *)(CPolicyConfig *, const unsigned __int16 *, _QWORD, void **))v5)(
                     g_PolicyConfig,
                     a2,
                     a3,
                     &Src);
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
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x78u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
