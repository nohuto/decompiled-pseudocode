/*
 * XREFs of ?SupportsHapticsContinousBuzz@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAE@Z @ 0x18009B080
 * Callers:
 *     ?PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@GGGPEAUHSTRING__@@@Z @ 0x1800997D4 (-PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEA.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OpenSpatialInteractionDevice@@YAJPEB_WPEAPEAUISpatialInteractionDevice@@@Z @ 0x1800649B0 (-OpenSpatialInteractionDevice@@YAJPEB_WPEAPEAUISpatialInteractionDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::SupportsHapticsContinousBuzz(
        SpatialInteractionDevices::SpatialInteractionController *this,
        bool *a2)
{
  HSTRING v3; // rcx
  wchar_t *StringRawBuffer; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct ISpatialInteractionDevice *v8; // rcx
  struct ISpatialInteractionDevice *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+40h] [rbp+8h] BYREF
  struct ISpatialInteractionDevice *v13; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  v3 = (HSTRING)*((_QWORD *)this + 68);
  if ( !v3 )
    return 0LL;
  v13 = 0LL;
  v12 = 0;
  StringRawBuffer = (wchar_t *)WindowsGetStringRawBuffer(v3, 0LL);
  v5 = OpenSpatialInteractionDevice(StringRawBuffer, &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct ISpatialInteractionDevice *, char *))(*(_QWORD *)v13 + 80LL))(v13, &v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 741LL;
      goto LABEL_6;
    }
    *a2 = v12 != 0;
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct ISpatialInteractionDevice *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 0LL;
  }
  v7 = 740LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
    (const char *)(unsigned int)v5);
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct ISpatialInteractionDevice *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
