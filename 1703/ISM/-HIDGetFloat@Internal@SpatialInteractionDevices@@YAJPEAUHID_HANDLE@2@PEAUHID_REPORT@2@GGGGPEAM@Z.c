/*
 * XREFs of ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGGGPEAM@Z @ 0x18006630C
 * Callers:
 *     SpatialInteractionDevices::ReadPosePosition @ 0x180066D14 (SpatialInteractionDevices--ReadPosePosition.c)
 *     SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT2_ @ 0x180067F10 (SpatialInteractionDevices--ParseFloatData_DirectX--XMFLOAT2_.c)
 *     SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT4_ @ 0x180068078 (SpatialInteractionDevices--ParseFloatData_DirectX--XMFLOAT4_.c)
 *     SpatialInteractionDevices::ParseFloatData_float_ @ 0x18006814C (SpatialInteractionDevices--ParseFloatData_float_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002F570 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     HidStatus @ 0x1800656A8 (HidStatus.c)
 *     ?GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@GGGGPEAPEAU_HIDP_VALUE_CAPS@@@Z @ 0x180066230 (-GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@GGGGPEAPEAU_HIDP_VALUE_CAP.c)
 *     ConvertHIDValueToDouble @ 0x180066504 (ConvertHIDValueToDouble.c)
 */

__int64 __fastcall SpatialInteractionDevices::Internal::HIDGetFloat(
        PHIDP_PREPARSED_DATA *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        struct SpatialInteractionDevices::HID_REPORT *a3,
        __int16 a4,
        USAGE a5,
        unsigned __int16 a6,
        float *a7)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 result; // rax
  float *v13; // rbx
  unsigned __int16 v14; // r14
  __int16 v15; // r9
  CHAR *Report; // rdx
  __int64 v17; // rsi
  NTSTATUS v18; // eax
  int v19; // eax
  double v20; // xmm0_8
  float v21; // xmm5_4
  unsigned __int16 v22[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  ULONG UsageValue; // [rsp+70h] [rbp+8h] BYREF

  if ( !this )
  {
    v10 = 407LL;
LABEL_3:
    v11 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)v11);
    return v11;
  }
  if ( !a2 )
  {
    v10 = 408LL;
    goto LABEL_3;
  }
  v13 = a7;
  if ( !a7 )
  {
    v11 = -2147467261;
    v10 = 409LL;
    goto LABEL_4;
  }
  v14 = a6;
  v15 = a5;
  *a7 = 0.0;
  *(_QWORD *)v22 = 0LL;
  result = SpatialInteractionDevices::Internal::GetValueCaps(
             (SpatialInteractionDevices::Internal *)this,
             (struct SpatialInteractionDevices::HID_HANDLE *)(unsigned __int16)a3,
             a4,
             v15,
             v14,
             (__int64 *)v22);
  if ( (int)result >= 0 )
  {
    Report = (CHAR *)*((_QWORD *)a2 + 1);
    v17 = *(_QWORD *)v22;
    if ( *Report == *(unsigned __int8 *)(*(_QWORD *)v22 + 2LL) )
    {
      v18 = HidP_GetUsageValue(
              HidP_Input,
              a5,
              *(_WORD *)(*(_QWORD *)v22 + 6LL),
              v14,
              &UsageValue,
              this[12],
              Report,
              *(_DWORD *)a2);
      v19 = HidStatus(v18);
      if ( v19 >= 0 )
      {
        v20 = ConvertHIDValueToDouble((int)UsageValue, v17);
        result = 0LL;
        v21 = v20;
        *v13 = v21;
      }
      else
      {
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)0x1AF,
                 (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                 (const char *)(unsigned int)v19);
      }
    }
    else
    {
      return 2147943568LL;
    }
  }
  return result;
}
