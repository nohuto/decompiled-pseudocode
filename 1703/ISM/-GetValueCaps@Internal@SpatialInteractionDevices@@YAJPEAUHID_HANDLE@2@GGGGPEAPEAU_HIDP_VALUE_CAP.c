/*
 * XREFs of ?GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@GGGGPEAPEAU_HIDP_VALUE_CAPS@@@Z @ 0x180066230
 * Callers:
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGGGPEAM@Z @ 0x18006630C (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGGGPEAM@Z.c)
 *     ?SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z @ 0x180067DAC (-SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::Internal::GetValueCaps(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        __int64 *a6)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !this )
  {
    v8 = -2147024809;
    v9 = 314LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !a6 )
  {
    v8 = -2147467261;
    v9 = 315LL;
    goto LABEL_3;
  }
  v11 = *((_DWORD *)this + 44);
  v12 = 0;
  *a6 = 0LL;
  if ( !v11 )
    return 2147943568LL;
  while ( 1 )
  {
    v13 = *((_QWORD *)this + 21) + 72LL * v12;
    if ( (!(_WORD)a2 || *(_WORD *)(v13 + 10) == (_WORD)a2)
      && (!a3 || *(_WORD *)(v13 + 8) == a3)
      && *(_WORD *)v13 == a4
      && !*(_BYTE *)(v13 + 12)
      && *(_WORD *)(v13 + 56) == a5 )
    {
      break;
    }
    if ( ++v12 >= v11 )
      return 2147943568LL;
  }
  *a6 = v13;
  return 0LL;
}
