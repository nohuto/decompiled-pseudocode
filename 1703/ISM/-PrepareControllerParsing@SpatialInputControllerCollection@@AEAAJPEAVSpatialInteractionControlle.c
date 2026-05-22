/*
 * XREFs of ?PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionController@SpatialInteractionDevices@@PEAVHIDDevice@@@Z @ 0x180077BA4
 * Callers:
 *     ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800787C0 (-OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002F570 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18007E2EC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ?PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@GGGPEAUHSTRING__@@@Z @ 0x1800997D4 (-PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEA.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E0BC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInputControllerCollection::PrepareControllerParsing(
        SpatialInputControllerCollection *this,
        struct SpatialInteractionDevices::SpatialInteractionController *a2,
        struct _HIDP_PREPARSED_DATA **a3)
{
  struct _HIDP_CAPS *v6; // rsi
  int HIDCapabilities; // ebx
  struct _HIDP_PREPARSED_DATA *v9; // r13
  int v10; // ebx
  struct _HIDP_PREPARSED_DATA *v11; // r15
  __int64 v12; // r14
  int v13; // eax
  int v14; // edi
  UINT32 v15; // edi
  unsigned __int64 v16; // rax
  WCHAR *v17; // rax
  WCHAR *v18; // rbx
  int v19; // eax
  int v20; // eax
  _QWORD v21[5]; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int16 v22[48]; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  HSTRING string; // [rsp+F8h] [rbp+77h] BYREF
  struct _HIDP_CAPS *v25; // [rsp+100h] [rbp+7Fh] BYREF

  memset(v22, 0, 0x28uLL);
  v25 = 0LL;
  v6 = (struct _HIDP_CAPS *)((char *)a3 + 60);
  if ( *((_WORD *)a3 + 30) )
  {
    HIDCapabilities = 0;
  }
  else
  {
    HIDCapabilities = HIDDevice::GetHIDCapabilities((HIDDevice *)a3, &v25);
    v6 = v25;
  }
  if ( HIDCapabilities < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x18C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return (unsigned int)HIDCapabilities;
  }
  v9 = a3[6];
  v10 = RIMGetDeviceProperties(*((_QWORD *)this + 10), a3[2], v22);
  if ( (v10 & 0xC0000000) == 0xC0000000 )
  {
    HIDCapabilities = v10 | 0x10000000;
    if ( HIDCapabilities < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x190,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)HIDCapabilities);
    return (unsigned int)HIDCapabilities;
  }
  string = 0LL;
  WindowsDeleteString(0LL);
  v11 = a3[2];
  v12 = *((_QWORD *)this + 10);
  string = 0LL;
  memset((char *)v21 + 4, 0, 0x24uLL);
  LODWORD(v21[0]) = 4;
  v13 = RIMGetDeviceProperties(v12, v11, v21);
  if ( v13 >= 0 )
  {
    v15 = v21[1];
    v16 = 2LL * LODWORD(v21[1]);
    if ( !is_mul_ok(LODWORD(v21[1]), 2uLL) )
      v16 = -1LL;
    v17 = (WCHAR *)operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v17;
    if ( !v17 )
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_21;
    }
    v21[2] = v17;
    v19 = RIMGetDeviceProperties(v12, v11, v21);
    if ( v19 >= 0 )
      v20 = WindowsCreateString(v18, v15, &string);
    else
      v20 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x6E,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
              (const char *)(unsigned int)v19);
    v14 = v20;
    operator delete(v18);
  }
  else
  {
    v14 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x66,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
            (const char *)(unsigned int)v13);
  }
  if ( v14 >= 0 )
  {
    v14 = SpatialInteractionDevices::SpatialInteractionController::PrepareParsing(
            a2,
            v6,
            v9,
            v22[8],
            v22[9],
            v22[10],
            string);
    goto LABEL_23;
  }
LABEL_21:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x193,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
    (const char *)(unsigned int)v14);
LABEL_23:
  WindowsDeleteString(string);
  return (unsigned int)v14;
}
