/*
 * XREFs of ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z @ 0x1800670C8
 * Callers:
 *     ?GetInputReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@@Z @ 0x1800645C0 (-GetInputReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800685D0 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall SpatialInteractionDevices::ParseInputReport(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        struct SpatialInteractionDevices::InputReport *a3)
{
  __int64 v3; // r15
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v9; // r14d
  _BYTE *v10; // rdx
  ULONG v11; // r8d
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  void *v15; // rcx
  DWORD LastError; // eax
  unsigned int v17; // r8d
  unsigned int v18; // r14d
  __int64 v19; // r13
  _BYTE *v20; // rdx
  ULONG v21; // r8d
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v25; // xmm0
  void *v26; // rcx
  DWORD v27; // eax
  unsigned int v28; // r8d
  int *v29; // rsi
  int v30; // eax
  unsigned int v31; // [rsp+20h] [rbp-59h]
  __int128 v32; // [rsp+30h] [rbp-49h] BYREF
  ULONG v33; // [rsp+40h] [rbp-39h] BYREF
  _BYTE *v34; // [rsp+48h] [rbp-31h]
  __int128 v35; // [rsp+50h] [rbp-29h] BYREF
  __int128 v36; // [rsp+60h] [rbp-19h]
  __int128 v37; // [rsp+70h] [rbp-9h]
  __int128 v38; // [rsp+80h] [rbp+7h]
  __int64 v39; // [rsp+90h] [rbp+17h]
  _BYTE v40[16]; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  LODWORD(v3) = 0;
  if ( !this )
  {
    v6 = -2147024809;
    v7 = 488LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !a2 )
  {
    v6 = -2147467261;
    v7 = 489LL;
    goto LABEL_3;
  }
  memset(a2, 0, 0x68uLL);
  *(_QWORD *)&v32 = 0LL;
  v9 = 0;
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  DWORD2(v32) = 0;
  *((_DWORD *)a2 + 2) = 0;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *((_DWORD *)a2 + 5) = 0;
  *((_DWORD *)a2 + 6) = 1065353216;
  *((_WORD *)a2 + 14) = 0;
  *(_QWORD *)((char *)a2 + 44) = 0LL;
  for ( *((_BYTE *)a2 + 52) = 0; v9 < *((_DWORD *)this + 44); ++v9 )
  {
    v10 = (_BYTE *)*((_QWORD *)this + 30);
    v11 = *((unsigned __int16 *)this + 54);
    LODWORD(v32) = v11;
    *((_QWORD *)&v32 + 1) = v10;
    v12 = *((_QWORD *)this + 21);
    v13 = *(_OWORD *)(v12 + 72LL * v9 + 32);
    v36 = *(_OWORD *)(v12 + 72LL * v9 + 16);
    v14 = *(_OWORD *)(v12 + 72LL * v9 + 48);
    v37 = v13;
    *(_QWORD *)&v13 = *(_QWORD *)(v12 + 72LL * v9 + 64);
    *v10 = BYTE2(*(_QWORD *)(v12 + 72LL * v9));
    v15 = (void *)*((_QWORD *)this + 1);
    v38 = v14;
    v39 = v13;
    if ( HidD_GetInputReport(v15, v10, v11) )
    {
      if ( !*((_BYTE *)a2 + 28) )
        SpatialInteractionDevices::ReadPosePosition(
          (PHIDP_PREPARSED_DATA *)this,
          (struct SpatialInteractionDevices::HID_HANDLE *)&v32,
          (__int64)a2);
      if ( !*((_BYTE *)a2 + 29)
        && (unsigned __int8)SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT4_(
                              this,
                              (struct SpatialInteractionDevices::HID_HANDLE *)&v32,
                              (__int64)a2 + 12) )
      {
        *((_BYTE *)a2 + 29) = 1;
      }
      if ( !*((_BYTE *)a2 + 92) )
        SpatialInteractionDevices::ReadLocalOrientation(
          this,
          (struct SpatialInteractionDevices::HID_HANDLE *)&v32,
          (__int64)a2);
      if ( !*((_BYTE *)a2 + 52) )
        SpatialInteractionDevices::ReadTouchpad(this, (struct SpatialInteractionDevices::HID_HANDLE *)&v32, (__int64)a2);
      if ( !*((_BYTE *)a2 + 64) )
        SpatialInteractionDevices::ReadThumbstick(
          this,
          (struct SpatialInteractionDevices::HID_HANDLE *)&v32,
          (__int64)a2);
      if ( !*((_BYTE *)a2 + 72) )
        SpatialInteractionDevices::ReadTrigger(this, (struct SpatialInteractionDevices::HID_HANDLE *)&v32, (__int64)a2);
      if ( !*((_BYTE *)a2 + 100)
        && (unsigned __int8)SpatialInteractionDevices::ParseFloatData_float_(
                              this,
                              (struct SpatialInteractionDevices::HID_HANDLE *)&v32,
                              (__int64)a2 + 96) )
      {
        *((_BYTE *)a2 + 100) = 1;
      }
    }
    else
    {
      LastError = GetLastError();
      if ( LastError )
        wil::details::in1diag3::_Log_Win32(retaddr, (void *)0x1FA, v17, (const char *)LastError, v31);
    }
  }
  v18 = 0;
  v32 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ButtonUsage__2___(
                     v40,
                     this);
  if ( *((_DWORD *)this + 48) )
  {
    v19 = v32;
    do
    {
      v20 = (_BYTE *)*((_QWORD *)this + 30);
      v21 = *((unsigned __int16 *)this + 54);
      v33 = v21;
      v34 = v20;
      v22 = *((_QWORD *)this + 23);
      v23 = *(_OWORD *)(v22 + 72LL * v18 + 32);
      v24 = *(_OWORD *)(v22 + 72LL * v18);
      v36 = *(_OWORD *)(v22 + 72LL * v18 + 16);
      v25 = *(_OWORD *)(v22 + 72LL * v18 + 48);
      v37 = v23;
      *(_QWORD *)&v23 = *(_QWORD *)(v22 + 72LL * v18 + 64);
      *v20 = BYTE2(v24);
      v26 = (void *)*((_QWORD *)this + 1);
      v35 = v24;
      v38 = v25;
      v39 = v23;
      if ( HidD_GetInputReport(v26, v20, v21) )
      {
        if ( DWORD2(v32) > (unsigned int)v3 )
        {
          v3 = DWORD2(v32);
          v29 = (int *)(v19 + 8);
          do
          {
            if ( SpatialInteractionDevices::IsValidButtonUsage((__int64)&v35, (_WORD *)v29 - 4) )
            {
              *((_DWORD *)a2 + 8) |= *v29;
              *((_DWORD *)a2 + 9) |= *v29;
              v30 = SpatialInteractionDevices::ParseButton(
                      (__int64)this,
                      (__int64)&v33,
                      *((_WORD *)v29 - 2),
                      *((_WORD *)v29 - 1),
                      *v29,
                      (__int64)a2);
              if ( v30 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x231,
                  (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                  (const char *)(unsigned int)v30);
            }
            v29 += 6;
            --v3;
          }
          while ( v3 );
        }
      }
      else
      {
        v27 = GetLastError();
        if ( v27 )
          wil::details::in1diag3::_Log_Win32(retaddr, (void *)0x226, v28, (const char *)v27, v31);
      }
      ++v18;
    }
    while ( v18 < *((_DWORD *)this + 48) );
  }
  return 0LL;
}
