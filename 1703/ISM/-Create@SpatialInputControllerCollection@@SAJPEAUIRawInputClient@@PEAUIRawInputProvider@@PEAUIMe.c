/*
 * XREFs of ?Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180077DE0
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800707D4 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?SpatialInputControllerCollection_Initialized_@RawInputProvidersTracing@@QEAAX_N0@Z @ 0x180076090 (-SpatialInputControllerCollection_Initialized_@RawInputProvidersTracing@@QEAAX_N0@Z.c)
 *     ??0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x180078088 (--0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessa.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18007DC14 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SpatialInputControllerCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        struct IMessageSession *a3,
        void **a4,
        struct SpatialInputControllerCollection **a5)
{
  HIDDeviceCollection *v9; // rbx
  __int64 v10; // rdx
  SpatialInputControllerCollection *v11; // rax
  SpatialInputControllerCollection *v12; // rbx
  HIDDeviceCollection *v13; // rsi
  unsigned int v14; // edi
  bool v15; // r14
  unsigned int v16; // edi
  bool v17; // r15
  unsigned int v18; // edx
  int v19; // eax
  char v20; // r15
  char v21; // r14
  _DWORD *v22; // rcx
  RawInputProvidersTracing *v23; // rcx
  int pvData; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v26[2]; // [rsp+44h] [rbp-3Ch] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-34h] BYREF
  DWORD v28[2]; // [rsp+50h] [rbp-30h] BYREF
  HIDDeviceCollection *v29; // [rsp+58h] [rbp-28h]
  __int64 v30; // [rsp+60h] [rbp-20h]
  _DWORD v31[4]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v30 = -2LL;
  v9 = 0LL;
  v29 = 0LL;
  if ( !a5 )
  {
    v10 = 424LL;
LABEL_28:
    v14 = -2147024809;
    goto LABEL_29;
  }
  *a5 = 0LL;
  if ( !a1 || !a4 )
  {
    v10 = 426LL;
    goto LABEL_28;
  }
  v11 = (SpatialInputControllerCollection *)malloc(0xB98uLL);
  v12 = v11;
  if ( v11 )
    memset(v11, 0, 0xB98uLL);
  *(_QWORD *)v28 = v12;
  if ( v12 )
    v13 = SpatialInputControllerCollection::SpatialInputControllerCollection(v12, a1, a2, a3);
  else
    v13 = 0LL;
  v9 = v13;
  v29 = v13;
  if ( !v13 )
  {
    v14 = -2147024882;
    v10 = 429LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)v14);
    goto LABEL_30;
  }
  v15 = 1;
  v31[0] = 65551;
  v16 = 1;
  v17 = 1;
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
          L"SpatialInteraction_3GlassesMappingDisabled",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
  {
    v17 = pvData != 0;
    if ( !pvData )
    {
      v26[0] = -16121855;
      v31[1] = -16121855;
      v16 = 2;
    }
  }
  v26[0] = 0;
  v28[0] = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
          L"SpatialInteraction_V02Disabled",
          0x18u,
          0LL,
          v26,
          v28) )
  {
    v15 = v26[0] != 0;
    if ( !v26[0] )
    {
      v18 = 1;
      v26[1] = 1114113;
      v31[v16++] = 1114113;
    }
  }
  v19 = HIDDeviceCollection::Initialize(v13, v18, (struct _RIM_USAGE_ANDPAGE *const)v31, v16, 0x1Du, a4);
  v14 = v19;
  if ( v19 >= 0 )
  {
    v20 = !v17;
    v21 = !v15;
    v22 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v22 && *v22 )
    {
      RawInputProvidersTracing::Instance();
      RawInputProvidersTracing::SpatialInputControllerCollection_Initialized_(v23, v21, v20);
    }
    v14 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1DC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v19);
  }
  if ( (v14 & 0x80000000) == 0 )
  {
    v9 = 0LL;
    *a5 = v13;
    v14 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1AF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)v14);
  }
LABEL_30:
  if ( v9 )
    (*(void (__fastcall **)(HIDDeviceCollection *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
  return v14;
}
