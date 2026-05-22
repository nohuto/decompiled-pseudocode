/*
 * XREFs of SpatialInteractionDevices::ReadPosePosition @ 0x180066D14
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z @ 0x1800670C8 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18006744C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGGGPEAM@Z @ 0x18006630C (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGGGPEAM@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800685A0 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 */

bool __fastcall SpatialInteractionDevices::ReadPosePosition(
        PHIDP_PREPARSED_DATA *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        __int64 a3)
{
  bool result; // al
  USAGE *v7; // rdi
  __int64 v8; // rbx
  const char *v9; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x168,
    (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    0LL,
    "Invalid Usages array size.",
    v9);
  result = 1;
  v7 = (USAGE *)&unk_1800A9DC4;
  v8 = 0LL;
  do
  {
    result = result
          && (int)SpatialInteractionDevices::Internal::HIDGetFloat(
                    this,
                    a2,
                    (struct SpatialInteractionDevices::HID_REPORT *)*(v7 - 2),
                    *(v7 - 1),
                    *v7,
                    v7[1],
                    (float *)(a3 + 4 * v8)) >= 0;
    v8 = (unsigned int)(v8 + 1);
    v7 += 8;
  }
  while ( (unsigned int)v8 < 3 );
  if ( result )
    *(_BYTE *)(a3 + 28) = 1;
  return result;
}
