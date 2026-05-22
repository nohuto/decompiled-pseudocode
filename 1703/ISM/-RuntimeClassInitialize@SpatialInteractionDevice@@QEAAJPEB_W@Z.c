/*
 * XREFs of ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_W@Z @ 0x1800643B4
 * Callers:
 *     ?OpenSpatialInteractionDevice@@YAJPEB_WPEAPEAUISpatialInteractionDevice@@@Z @ 0x1800649B0 (-OpenSpatialInteractionDevice@@YAJPEB_WPEAPEAUISpatialInteractionDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?TelemetrySpatialInteractionDeviceOpened_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WPEAX@Z @ 0x180064070 (-TelemetrySpatialInteractionDeviceOpened_@SpatialInteractionTrace@SpatialInteractionDevices@@QEA.c)
 *     ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x180065884 (-HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z.c)
 *     ?SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z @ 0x180067A24 (-SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z.c)
 *     ??$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAEW4_HIDP_REPORT_TYPE@@@Z @ 0x1800682C4 (--$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall SpatialInteractionDevice::RuntimeClassInitialize(
        SpatialInteractionDevice *this,
        wchar_t *a2,
        struct SpatialInteractionDevices::HID_HANDLE **a3)
{
  SpatialInteractionDevices **v4; // r15
  unsigned __int8 v6; // si
  HRESULT String; // ebx
  __int64 v8; // rdx
  __int64 v10; // rdi
  unsigned __int16 *v11; // r9
  SpatialInteractionDevices *v12; // rbx
  ULONG v13; // r13d
  _BYTE *v14; // r12
  size_t v15; // r8
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // eax
  unsigned __int8 v20; // al
  __int16 v21; // dx
  SpatialInteractionDevices *v22; // rax
  void *v23; // rbx
  _DWORD *v24; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v25; // rcx
  ULONG v26; // [rsp+20h] [rbp-48h]
  int v27; // [rsp+30h] [rbp-38h] BYREF
  _BYTE *v28; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v30; // [rsp+70h] [rbp+8h] BYREF

  v4 = (SpatialInteractionDevices **)((char *)this + 72);
  v6 = 0;
  String = SpatialInteractionDevices::Internal::HIDOpen(
             (SpatialInteractionDevices::Internal *)a2,
             (const wchar_t *)this + 36,
             a3);
  if ( String < 0 )
  {
    v8 = 107LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)(unsigned int)String);
    return (unsigned int)String;
  }
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  WindowsDeleteString(*((HSTRING *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  String = WindowsCreateString(a2, v10, (HSTRING *)this + 8);
  if ( String < 0 )
  {
    v8 = 108LL;
    goto LABEL_3;
  }
  String = SpatialInteractionDevices::SupportsContinousBuzz(
             *v4,
             (SpatialInteractionDevice *)((char *)this + 84),
             (bool *)this + 80,
             v11);
  if ( String < 0 )
  {
    v8 = 111LL;
    goto LABEL_3;
  }
  v12 = *v4;
  if ( !*v4 )
  {
    String = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F4,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)0x80070057LL);
LABEL_23:
    v8 = 114LL;
    goto LABEL_3;
  }
  v13 = *((unsigned __int16 *)v12 + 56);
  v14 = (_BYTE *)*((_QWORD *)v12 + 29);
  v15 = *((unsigned __int16 *)v12 + 56);
  LOBYTE(v30) = 0;
  v27 = v13;
  v28 = v14;
  memset(v14, 0, v15);
  v16 = *((_DWORD *)v12 + 56);
  v17 = 0LL;
  if ( v16 )
  {
    while ( 1 )
    {
      v18 = *((_QWORD *)v12 + 27) + 72 * v17;
      if ( *(_WORD *)v18 == 14 && !*(_BYTE *)(v18 + 12) && *(_WORD *)(v18 + 56) == 40 )
        break;
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= v16 )
        goto LABEL_21;
    }
    *v14 = *(_BYTE *)(v18 + 2);
    HidD_GetFeature(*((HANDLE *)v12 + 1), v14, v13);
    v19 = SpatialInteractionDevices::Internal::HIDGetInteger<unsigned char>((int)v12, (int)&v27, v18, (int)&v30, v26);
    String = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x302,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
        (const char *)(unsigned int)v19);
      v6 = v30;
      goto LABEL_22;
    }
    v6 = v30;
  }
LABEL_21:
  String = 0;
LABEL_22:
  if ( String < 0 )
    goto LABEL_23;
  v20 = v6;
  if ( v6 > 0x3Cu )
    v20 = 60;
  v21 = v20;
  v22 = *v4;
  *((_WORD *)this + 41) = 1000 * v21;
  v23 = (void *)*((_QWORD *)v22 + 1);
  v24 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v24 )
  {
    if ( *v24 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::TelemetrySpatialInteractionDeviceOpened_(v25, a2, v23);
    }
  }
  return 0LL;
}
