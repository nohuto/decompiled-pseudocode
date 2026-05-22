/*
 * XREFs of ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18006744C
 * Callers:
 *     ?ReadHidReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@PEAE@Z @ 0x1800645D0 (-ReadHidReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@PEAE@Z.c)
 *     _lambda_ac879a184350821f45c5795b09041ac5_::operator() @ 0x180064754 (_lambda_ac879a184350821f45c5795b09041ac5_--operator().c)
 *     ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@PEA_NPEAW4MPCAugmentedInputGestureType@@@Z @ 0x180099A98 (-Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeRe.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::IsValidButtonUsage @ 0x180066B40 (SpatialInteractionDevices--IsValidButtonUsage.c)
 *     SpatialInteractionDevices::ParseButton @ 0x180066B98 (SpatialInteractionDevices--ParseButton.c)
 *     SpatialInteractionDevices::ReadPosePosition @ 0x180066D14 (SpatialInteractionDevices--ReadPosePosition.c)
 *     SpatialInteractionDevices::ReadThumbstick @ 0x180066DD0 (SpatialInteractionDevices--ReadThumbstick.c)
 *     SpatialInteractionDevices::ReadTouchpad @ 0x180066E7C (SpatialInteractionDevices--ReadTouchpad.c)
 *     SpatialInteractionDevices::ReadLocalOrientation @ 0x180066F2C (SpatialInteractionDevices--ReadLocalOrientation.c)
 *     SpatialInteractionDevices::ReadTrigger @ 0x180067058 (SpatialInteractionDevices--ReadTrigger.c)
 *     SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT4_ @ 0x180068078 (SpatialInteractionDevices--ParseFloatData_DirectX--XMFLOAT4_.c)
 *     SpatialInteractionDevices::ParseFloatData_float_ @ 0x18006814C (SpatialInteractionDevices--ParseFloatData_float_.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ButtonUsage__2___ @ 0x180068220 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_180068220.c)
 */

__int64 __fastcall SpatialInteractionDevices::ParseInputReport(
        PHIDP_PREPARSED_DATA *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        struct SpatialInteractionDevices::HID_REPORT *a3,
        struct SpatialInteractionDevices::InputReport *a4)
{
  __int64 v7; // r14
  PHIDP_PREPARSED_DATA v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // r12
  int *v13; // rsi
  char v14; // r10
  int v15; // eax
  __int128 i; // [rsp+30h] [rbp-39h]
  _BYTE v18[16]; // [rsp+40h] [rbp-29h] BYREF
  _OWORD v19[4]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v20; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  SpatialInteractionDevices::ReadPosePosition(this, a2, (__int64)a3);
  if ( (unsigned __int8)SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT4_(
                          (SpatialInteractionDevices::Internal *)this,
                          a2,
                          (__int64)a3 + 12) )
    *((_BYTE *)a3 + 29) = 1;
  SpatialInteractionDevices::ReadLocalOrientation((SpatialInteractionDevices::Internal *)this, a2, (__int64)a3);
  SpatialInteractionDevices::ReadTouchpad((SpatialInteractionDevices::Internal *)this, a2, (__int64)a3);
  SpatialInteractionDevices::ReadThumbstick((SpatialInteractionDevices::Internal *)this, a2, (__int64)a3);
  SpatialInteractionDevices::ReadTrigger((SpatialInteractionDevices::Internal *)this, a2, (__int64)a3);
  if ( (unsigned __int8)SpatialInteractionDevices::ParseFloatData_float_(
                          (SpatialInteractionDevices::Internal *)this,
                          a2,
                          (__int64)a3 + 96) )
    *((_BYTE *)a3 + 100) = 1;
  v7 = 0LL;
  for ( i = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ButtonUsage__2___(
                         v18,
                         this); (unsigned int)v7 < *((_DWORD *)this + 48); v7 = (unsigned int)(v7 + 1) )
  {
    v8 = this[23];
    v9 = *(_OWORD *)((char *)v8 + 72 * v7 + 16);
    v19[0] = *(_OWORD *)((char *)v8 + 72 * v7);
    v10 = *(_OWORD *)((char *)v8 + 72 * v7 + 32);
    v19[1] = v9;
    v11 = *(_OWORD *)((char *)v8 + 72 * v7 + 48);
    v19[2] = v10;
    v20 = *((_QWORD *)v8 + 9 * v7 + 8);
    v19[3] = v11;
    if ( DWORD2(i) )
    {
      v12 = DWORD2(i);
      v13 = (int *)(i + 8);
      do
      {
        if ( SpatialInteractionDevices::IsValidButtonUsage((__int64)v19, (_WORD *)v13 - 4) )
        {
          *((_DWORD *)a3 + 8) |= *v13;
          if ( BYTE2(v19[0]) == v14 )
          {
            *((_DWORD *)a3 + 9) |= *v13;
            v15 = SpatialInteractionDevices::ParseButton(
                    (__int64)this,
                    (__int64)a2,
                    *((_WORD *)v13 - 2),
                    *((_WORD *)v13 - 1),
                    *v13,
                    (__int64)a3);
            if ( v15 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x26F,
                (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                (const char *)(unsigned int)v15);
          }
        }
        v13 += 6;
        --v12;
      }
      while ( v12 );
    }
  }
  return 0LL;
}
