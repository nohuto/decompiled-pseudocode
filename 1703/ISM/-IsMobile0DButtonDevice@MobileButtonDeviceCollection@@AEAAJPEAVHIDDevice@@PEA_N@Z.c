/*
 * XREFs of ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x18007C714
 * Callers:
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007BF60 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18007E2EC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::IsMobile0DButtonDevice(
        MobileButtonDeviceCollection *this,
        struct HIDDevice *a2,
        bool *a3)
{
  int v3; // edi
  struct _HIDP_CAPS *v4; // rsi
  struct _HIDP_PREPARSED_DATA *v5; // rcx
  unsigned int v6; // r14d
  int HIDCapabilities; // eax
  int v8; // ebx
  int v9; // r9d
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // r13
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rdi
  USAGE *v12; // r15
  __int64 v13; // r12
  char v14; // di
  USHORT ButtonCapsLength[2]; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+44h] [rbp-3Ch]
  int v18; // [rsp+48h] [rbp-38h]
  struct _HIDP_CAPS *v19; // [rsp+50h] [rbp-30h] BYREF
  PHIDP_PREPARSED_DATA v20; // [rsp+58h] [rbp-28h]
  bool *v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h] BYREF

  v21 = a3;
  v19 = 0LL;
  v22 = 0LL;
  v4 = (struct _HIDP_CAPS *)((char *)a2 + 60);
  LOBYTE(v3) = 0;
  v5 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a2 + 6);
  v20 = v5;
  v6 = 0;
  v18 = v3;
  ButtonCapsLength[0] = 0;
  if ( *((_WORD *)a2 + 30) )
  {
    v8 = 0;
  }
  else
  {
    HIDCapabilities = HIDDevice::GetHIDCapabilities(a2, &v19);
    v4 = v19;
    v8 = HIDCapabilities;
  }
  v17 = v8;
  if ( v8 >= 0 )
  {
    ButtonCapsLength[0] = v4->NumberInputButtonCaps;
    ButtonCaps = (struct _HIDP_BUTTON_CAPS *)operator new[](saturated_mul(ButtonCapsLength[0], 0x48uLL));
    if ( !ButtonCaps )
    {
      v8 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v8;
      v9 = 374;
      goto LABEL_7;
    }
    PreparsedData = v20;
    v12 = (USAGE *)&v22;
    LODWORD(v22) = 3866665;
    WORD2(v22) = 60;
    v13 = 3LL;
    do
    {
      ButtonCapsLength[0] = v4->NumberInputButtonCaps;
      memset(ButtonCaps, 0, 72LL * ButtonCapsLength[0]);
      if ( HidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *v12, ButtonCaps, ButtonCapsLength, PreparsedData) >= 0 )
        ++v6;
      ++v12;
      --v13;
    }
    while ( v13 );
    v14 = v18;
    v8 = v17;
    if ( (unsigned __int16)(v4->NumberInputButtonCaps - 1) <= 3u && v6 >= 2 )
      v14 = 1;
    if ( v21 )
      *v21 = v14;
    operator delete(ButtonCaps);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 370;
LABEL_7:
    Template_qqq((__int64)v5, &MinInput_Warning_CheckResult, 0, v9, v8);
  }
  return (unsigned int)v8;
}
