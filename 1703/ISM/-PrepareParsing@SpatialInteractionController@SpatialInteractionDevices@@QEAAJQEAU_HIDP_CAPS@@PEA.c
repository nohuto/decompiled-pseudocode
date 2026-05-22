/*
 * XREFs of ?PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@GGGPEAUHSTRING__@@@Z @ 0x1800997D4
 * Callers:
 *     ?PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionController@SpatialInteractionDevices@@PEAVHIDDevice@@@Z @ 0x180077BA4 (-PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionControlle.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::scope_exit__lambda_417363d58b469e4858bc9400fe1d141b___ @ 0x180050714 (wil--scope_exit__lambda_417363d58b469e4858bc9400fe1d141b___.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x180065BBC (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     SpatialInteractionDevices::IsValidButtonUsage @ 0x180066B40 (SpatialInteractionDevices--IsValidButtonUsage.c)
 *     ?SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z @ 0x180067DAC (-SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ButtonUsage__2___ @ 0x180068220 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_180068220.c)
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x1800992B8 (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     ?CheckForPosesOverride@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ @ 0x18009A8A4 (-CheckForPosesOverride@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ.c)
 *     ?SupportsHapticsContinousBuzz@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAE@Z @ 0x18009B080 (-SupportsHapticsContinousBuzz@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAE@.c)
 *     wil::details::lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___::_lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___ @ 0x18009B1FC (wil--details--lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___--_lambda_call__lambda_4173.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::PrepareParsing(
        SpatialInteractionDevices::SpatialInteractionController *this,
        struct _HIDP_CAPS *const a2,
        struct _HIDP_PREPARSED_DATA *a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        HSTRING string)
{
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // dx
  bool v10; // al
  struct SpatialInteractionDevices::HID_HANDLE *v11; // rdx
  HSTRING *v12; // rsi
  HRESULT v13; // ebx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ebx
  bool *v18; // r8
  unsigned int v19; // eax
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // r14
  _WORD *v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rbx
  int v28[4]; // [rsp+28h] [rbp-91h]
  __int128 v29; // [rsp+38h] [rbp-81h] BYREF
  __int128 v30; // [rsp+48h] [rbp-71h]
  __int128 v31; // [rsp+58h] [rbp-61h]
  __int128 v32; // [rsp+68h] [rbp-51h]
  __int64 v33; // [rsp+78h] [rbp-41h]
  __int64 v34; // [rsp+88h] [rbp-31h]
  __int128 v35; // [rsp+90h] [rbp-29h] BYREF
  _BYTE v36[88]; // [rsp+A0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]
  HRESULT v38; // [rsp+108h] [rbp+4Fh] BYREF
  __int16 v39; // [rsp+120h] [rbp+67h] BYREF

  v39 = a4;
  v34 = -2LL;
  v38 = 0;
  *(struct _HIDP_CAPS *)((char *)this + 104) = *a2;
  *((_QWORD *)this + 12) = a3;
  v8 = a5;
  *((_WORD *)this + 45) = a5;
  *((_WORD *)this + 44) = a4;
  v9 = a6;
  *((_WORD *)this + 46) = a6;
  *((_WORD *)this + 153) = v8;
  *((_WORD *)this + 152) = a4;
  *((_WORD *)this + 154) = v9;
  *((_DWORD *)this + 68) = *((_DWORD *)this + 66);
  v10 = v8 == 0xFF00 && a4 == 255 && v9 == 1;
  *((_BYTE *)this + 552) = v10;
  if ( v10 )
    *((_BYTE *)this + 313) = 1;
  *(_QWORD *)&v29 = &v38;
  *((_QWORD *)&v29 + 1) = this;
  *(_QWORD *)&v30 = &string;
  *((_QWORD *)&v30 + 1) = &v39;
  *(_QWORD *)&v31 = &a5;
  *((_QWORD *)&v31 + 1) = &a6;
  wil::scope_exit__lambda_417363d58b469e4858bc9400fe1d141b___((__int64)v36, &v29);
  v12 = (HSTRING *)((char *)this + 544);
  v13 = 0;
  if ( !string || string != *v12 )
  {
    WindowsDeleteString(*v12);
    *v12 = 0LL;
    v13 = WindowsDuplicateString(string, (HSTRING *)this + 68);
  }
  v38 = v13;
  if ( v13 >= 0 )
  {
    v16 = SpatialInteractionDevices::Internal::InitializeValueCaps(this, v11);
    v13 = v16;
    v38 = v16;
    if ( v16 >= 0 )
    {
      v17 = 0;
      *(_OWORD *)v28 = *SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ButtonUsage__2___(
                          &v35,
                          this);
      v19 = *((_DWORD *)this + 48);
      if ( v19 )
      {
        v20 = *((_QWORD *)this + 23);
        v21 = 0LL;
        v22 = v19;
        do
        {
          v29 = *(_OWORD *)(v21 + v20);
          v30 = *(_OWORD *)(v21 + v20 + 16);
          v31 = *(_OWORD *)(v21 + v20 + 32);
          v32 = *(_OWORD *)(v21 + v20 + 48);
          v33 = *(_QWORD *)(v21 + v20 + 64);
          if ( v28[2] )
          {
            v23 = *(_WORD **)v28;
            v24 = (unsigned int)v28[2];
            do
            {
              if ( SpatialInteractionDevices::IsValidButtonUsage((__int64)&v29, v23) )
                v17 |= *(_DWORD *)(v25 + 8);
              v23 = (_WORD *)(v25 + 24);
              --v24;
            }
            while ( v24 );
          }
          v21 += 72LL;
          --v22;
        }
        while ( v22 );
      }
      *((_DWORD *)this + 69) = v17;
      v38 = 0;
      v16 = SpatialInteractionDevices::SupportsAnalogTrigger(
              this,
              (SpatialInteractionDevices::SpatialInteractionController *)((char *)this + 529),
              v18);
      v13 = v16;
      v38 = v16;
      if ( v16 >= 0 )
      {
        v26 = *((_QWORD *)this + 70);
        if ( v26 )
        {
          SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
            *((SpatialInteractionDevices::SpatialInteractionHeartbeat **)this + 70),
            1);
          CoCreateGuid((GUID *)v26);
          *(_QWORD *)(v26 + 24) = GetTickCount64();
          *(_WORD *)(v26 + 16) = *((_WORD *)this + 45);
          *(_WORD *)(v26 + 18) = *((_WORD *)this + 44);
          *(_WORD *)(v26 + 20) = *((_WORD *)this + 46);
        }
        v16 = SpatialInteractionDevices::SpatialInteractionController::SupportsHapticsContinousBuzz(
                this,
                (unsigned __int8 *)this + 321);
        v13 = v16;
        v38 = v16;
        if ( v16 >= 0 )
        {
          SpatialInteractionDevices::SpatialInteractionController::CheckForPosesOverride(this);
          v13 = 0;
          goto LABEL_32;
        }
        v15 = 250LL;
      }
      else
      {
        v15 = 245LL;
      }
    }
    else
    {
      v15 = 239LL;
    }
    v14 = (unsigned int)v16;
  }
  else
  {
    v14 = (unsigned int)v13;
    v15 = 236LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
    (const char *)v14);
LABEL_32:
  wil::details::lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___::_lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___(v36);
  return (unsigned int)v13;
}
