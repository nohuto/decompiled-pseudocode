/*
 * XREFs of SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT4_ @ 0x180068078
 * Callers:
 *     SpatialInteractionDevices::ReadLocalOrientation @ 0x180066F2C (SpatialInteractionDevices--ReadLocalOrientation.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z @ 0x1800670C8 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18006744C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGGGPEAM@Z @ 0x18006630C (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGGGPEAM@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800685A0 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 */

bool __fastcall SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT4_(
        PHIDP_PREPARSED_DATA *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned int v9; // ebx
  bool result; // al
  __int64 v11; // rdx
  const char *v12; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x168,
    (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    (const char *)(4 * a4 != 16),
    "Invalid Usages array size.",
    v12);
  v9 = 0;
  result = 1;
  if ( a4 )
  {
    v11 = 0LL;
    do
    {
      result = result
            && (int)SpatialInteractionDevices::Internal::HIDGetFloat(
                      this,
                      a2,
                      (struct SpatialInteractionDevices::HID_REPORT *)*(unsigned __int16 *)(a3 + 16 * v11),
                      *(_WORD *)(a3 + 16 * v11 + 2),
                      *(_WORD *)(a3 + 16 * v11 + 4),
                      *(_WORD *)(a3 + 16 * v11 + 6),
                      (float *)(a5 + 4 * v11)) >= 0;
      v11 = ++v9;
    }
    while ( v9 < a4 );
  }
  return result;
}
