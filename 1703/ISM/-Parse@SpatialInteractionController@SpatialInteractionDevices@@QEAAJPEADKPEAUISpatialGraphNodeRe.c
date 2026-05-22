/*
 * XREFs of ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@PEA_NPEAW4MPCAugmentedInputGestureType@@@Z @ 0x180099A98
 * Callers:
 *     ?ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@7@@Z @ 0x1800776FC (-ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@Spat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18006744C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x1800992B8 (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     ?UpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAAJ_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@@Z @ 0x180099DD0 (-UpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAAJ_JPEAUISpatialGraphNode.c)
 *     ?UpdateSimulatedPose@SpatialInteractionController@SpatialInteractionDevices@@AEAAX_JAEBUPoseData@2@AEBUMatrix4x4@Numerics@Foundation@Windows@@@Z @ 0x180099F8C (-UpdateSimulatedPose@SpatialInteractionController@SpatialInteractionDevices@@AEAAX_JAEBUPoseData.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::Parse(
        SpatialInteractionDevices::SpatialInteractionController *this,
        char *a2,
        int a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a5,
        bool *PerformanceCount,
        enum MPCAugmentedInputGestureType *a7)
{
  bool *v7; // r14
  enum MPCAugmentedInputGestureType *v8; // r15
  int v12; // edi
  struct SpatialInteractionDevices::InputReport *v14; // r9
  int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // edx
  float v18; // xmm0_4
  float v19; // xmm1_4
  int v20; // eax
  float v21; // xmm0_4
  int v22; // ecx
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  __int128 v27; // xmm0
  char v28; // si
  int v29; // edi
  _DWORD *v30; // rcx
  int v31; // r9d
  _DWORD *v32; // rax
  __int64 v33; // r8
  int v34; // [rsp+28h] [rbp-61h] BYREF
  char *v35; // [rsp+30h] [rbp-59h]
  _DWORD v36[28]; // [rsp+38h] [rbp-51h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+47h]

  v7 = PerformanceCount;
  v8 = a7;
  *PerformanceCount = 0;
  *(_DWORD *)v8 = 0;
  if ( a2 )
  {
    v12 = *((unsigned __int16 *)this + 54);
    if ( a3 != v12 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x113,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    memset(v36, 0, 0x68uLL);
    v34 = v12;
    v35 = a2;
    v15 = SpatialInteractionDevices::ParseInputReport(
            (PHIDP_PREPARSED_DATA *)this,
            (struct SpatialInteractionDevices::HID_HANDLE *)&v34,
            (struct SpatialInteractionDevices::HID_REPORT *)v36,
            v14);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x11A,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
        (const char *)(unsigned int)v15);
      return v16;
    }
    v17 = v36[9];
    if ( *((_BYTE *)this + 529) )
    {
      v36[8] |= 8u;
      if ( LOBYTE(v36[18]) )
      {
        v18 = *(float *)&v36[17];
        v17 = v36[9] | 8;
        *((_DWORD *)this + 75) = v36[17];
        *((_BYTE *)this + 311) = 1;
        v36[9] = v17;
        v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v18 - 1.0)) & _xmm);
        if ( v19 > 0.001 )
          v36[10] &= ~8u;
        else
          v36[10] |= 8u;
      }
      else
      {
        v17 = v36[9] & 0xFFFFFFF7;
        v36[9] &= ~8u;
      }
    }
    else if ( (v36[9] & 8) != 0 )
    {
      v20 = v36[10] >> 3;
      *((_BYTE *)this + 311) = 1;
      if ( (v20 & 1) != 0 )
        v21 = FLOAT_1_0;
      else
        v21 = 0.0;
      *((float *)this + 75) = v21;
    }
    *((_DWORD *)this + 69) |= v36[8];
    v22 = v17 & v36[10] | *((_DWORD *)this + 70) & ~v17;
    *((_DWORD *)this + 70) = v22;
    if ( (v22 & 0x44) != 0 )
    {
      if ( LOBYTE(v36[13]) )
      {
        v23 = *(float *)&v36[12];
        v24 = *(float *)&v36[11] * 2.0;
        *((_BYTE *)this + 310) = 1;
        *((float *)this + 71) = v24 - 1.0;
        *((float *)this + 72) = (float)(v23 * 2.0) - 1.0;
      }
    }
    else
    {
      *((_BYTE *)this + 310) = 0;
    }
    if ( LOBYTE(v36[16]) )
    {
      v25 = *(float *)&v36[15];
      v26 = *(float *)&v36[14] * 2.0;
      *((_BYTE *)this + 312) = 1;
      *((float *)this + 73) = v26 - 1.0;
      *((float *)this + 74) = (float)(v25 * 2.0) - 1.0;
    }
    if ( LOBYTE(v36[23]) )
    {
      v27 = *(_OWORD *)&v36[19];
      *((_BYTE *)this + 526) = 1;
      *(_OWORD *)((char *)this + 484) = v27;
    }
    if ( LOBYTE(v36[25]) )
    {
      *((_DWORD *)this + 79) = v36[24];
      *((_BYTE *)this + 320) = 1;
    }
    if ( *((_BYTE *)this + 552) )
    {
      QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
      SpatialInteractionDevices::SpatialInteractionController::UpdateSimulatedPose(
        this,
        (__int64)PerformanceCount,
        (const struct SpatialInteractionDevices::PoseData *)v36,
        a5);
    }
  }
  if ( (*((_BYTE *)this + 276) & 8) == 0 || (v28 = 1, (*((_BYTE *)this + 280) & 8) == 0) )
    v28 = 0;
  if ( *((_BYTE *)this + 528) )
  {
    if ( v28 )
    {
      v29 = 3;
    }
    else
    {
      v29 = 4;
      *((_BYTE *)this + 528) = 0;
    }
  }
  else if ( v28 )
  {
    v29 = 2;
    *((_BYTE *)this + 528) = 1;
  }
  else
  {
    v29 = 6;
  }
  if ( !*((_BYTE *)this + 552) )
  {
    QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
    SpatialInteractionDevices::SpatialInteractionController::UpdatePose(this, (__int64)PerformanceCount, a4, a5);
  }
  v30 = (_DWORD *)*((_QWORD *)this + 70);
  *v7 = v28;
  *(_DWORD *)v8 = v29;
  if ( v30 )
  {
    v31 = *((_DWORD *)this + 70);
    ++v30[8];
    v32 = v30 + 9;
    v33 = 7LL;
    do
    {
      if ( (v31 & *(_DWORD *)((char *)v32
                            + &SpatialInteractionDevices::SpatialInteractionHeartbeat::ButtonsOfInterest
                            - (_UNKNOWN *)v30
                            - 36)) != 0 )
        ++*v32;
      ++v32;
      --v33;
    }
    while ( v33 );
    SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
      (SpatialInteractionDevices::SpatialInteractionHeartbeat *)v30,
      0);
  }
  return 0LL;
}
