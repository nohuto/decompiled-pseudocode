/*
 * XREFs of ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x180042ABC
 * Callers:
 *     ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x1800432E0 (-GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z.c)
 *     ?GetChannelCount@CMeterHardware@@MEAAJPEAI@Z @ 0x18006B710 (-GetChannelCount@CMeterHardware@@MEAAJPEAI@Z.c)
 * Callees:
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A5C0 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x1800430F4 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x180043160 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMeterControlBase::GetChannelCountFromDeviceFormat(CMeterControlBase *this, unsigned int *a2)
{
  int PolicyConfig; // edi
  const unsigned __int16 *v5; // rsi
  __int64 (__fastcall *v6)(CPolicyConfig *, const unsigned __int16 *, int, struct tWAVEFORMATEX **); // rdi
  int DeviceFormat; // eax
  void *v8; // rcx
  unsigned int (__fastcall *v9)(CPolicyConfig *__hidden); // rsi
  LPVOID pv; // [rsp+60h] [rbp+18h] BYREF
  CPolicyConfig *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  PolicyConfig = GetPolicyConfig(&v12);
  if ( PolicyConfig < 0 )
    goto LABEL_16;
  pv = 0LL;
  v5 = (const unsigned __int16 *)*((_QWORD *)this + 3);
  v6 = *(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, int, struct tWAVEFORMATEX **))(*(_QWORD *)v12 + 32LL);
  if ( v6 == CPolicyConfig::GetDeviceFormat )
    DeviceFormat = CPolicyConfig::GetDeviceFormat(v12, v5, 0, (struct tWAVEFORMATEX **)&pv);
  else
    DeviceFormat = ((__int64 (__fastcall *)(CPolicyConfig *, const unsigned __int16 *, _QWORD, LPVOID *, __int64))v6)(
                     v12,
                     v5,
                     0LL,
                     &pv,
                     -2LL);
  PolicyConfig = DeviceFormat;
  v8 = pv;
  if ( DeviceFormat >= 0 )
    *a2 = *((unsigned __int16 *)pv + 1);
  if ( v8 )
    CoTaskMemFree(v8);
  if ( PolicyConfig < 0 )
  {
LABEL_16:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids,
        PolicyConfig);
    }
  }
  if ( v12 )
  {
    v9 = *(unsigned int (__fastcall **)(CPolicyConfig *__hidden))(*(_QWORD *)v12 + 16LL);
    if ( v9 == CPolicyConfig::Release )
      CPolicyConfig::Release(v12);
    else
      v9(v12);
  }
  return (unsigned int)PolicyConfig;
}
