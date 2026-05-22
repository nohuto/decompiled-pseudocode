/*
 * XREFs of ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JW4GetPoseAtTimePurpose@234@PEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18008A960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SpatialGraphDriverClientHelpers::GetPosesAroundTime @ 0x180088B8C (SpatialGraphDriverClientHelpers--GetPosesAroundTime.c)
 *     _lambda_f8380620b3870a98be7ea388687506c5_::operator() @ 0x18008AD1C (_lambda_f8380620b3870a98be7ea388687506c5_--operator().c)
 *     ??4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z @ 0x18008B2DC (--4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z.c)
 *     wil::ScopeExit__lambda_f8380620b3870a98be7ea388687506c5___ @ 0x18008CB6C (wil--ScopeExit__lambda_f8380620b3870a98be7ea388687506c5___.c)
 *     ?Return_HrMsg_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18008FE34 (-Return_HrMsg_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAK@Z @ 0x180092FB0 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::GetPoseAtTime(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        void *a5)
{
  DWORD v6; // eax
  DWORD v7; // r14d
  int v8; // edi
  _QWORD *v9; // rbx
  DWORD v10; // edi
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v11; // rcx
  int v12; // eax
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  const char *v19; // [rsp+28h] [rbp-D8h]
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  void *v21; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v22; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v26; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER v27; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v28[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[64]; // [rsp+C0h] [rbp-40h] BYREF
  char v30; // [rsp+100h] [rbp+0h]
  _QWORD v31[20]; // [rsp+110h] [rbp+10h] BYREF
  char v32[160]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]
  int v34; // [rsp+2C0h] [rbp+1C0h] BYREF

  v34 = a3;
  v21 = a5;
  v24 = a2;
  v26 = a4;
  QueryPerformanceCounter(&PerformanceCount);
  v27 = PerformanceCount;
  v20 = 2;
  v25 = -1LL;
  memset(v21, 0, 0xA0uLL);
  *((_DWORD *)v21 + 4) = 0;
  *(_QWORD *)v21 = v24;
  if ( v26 )
    *v26 = 0LL;
  v28[0] = &v21;
  v28[1] = &v26;
  v28[2] = &v24;
  v28[3] = &v25;
  v28[4] = a1 - 8;
  v28[5] = &v34;
  v28[6] = &v27;
  v28[7] = &v20;
  wil::ScopeExit__lambda_f8380620b3870a98be7ea388687506c5___(v29, v28);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 8LL))(*(_QWORD *)(a1 + 104));
  v7 = v6;
  if ( !v6 )
  {
    v8 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x351,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_30;
  }
  v9 = operator new[](saturated_mul(v6, 0xA0uLL));
  if ( !v9 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x353,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_28;
  }
  v10 = 0;
  PerformanceCount.LowPart = 0;
  v11 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 56);
  v22 = 0;
  v12 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          v11,
          0x5B4408u,
          (void *)(a1 + 72),
          0x10u,
          v9,
          160 * v7,
          (LPDWORD)&PerformanceCount);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2B,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_15;
  }
  if ( !PerformanceCount.LowPart )
  {
    v14 = 45LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_27;
  }
  v10 = PerformanceCount.LowPart / 0xA0;
  if ( PerformanceCount.LowPart % 0xA0uLL )
  {
    v14 = 46LL;
    goto LABEL_11;
  }
  v22 = PerformanceCount.LowPart / 0xA0;
  v13 = 0;
LABEL_15:
  if ( v13 >= 0 )
  {
    if ( v10 < v7 || v24 < v9[20 * v7 - 20] )
    {
      if ( (int)SpatialGraphDriverClientHelpers::GetPosesAroundTime(
                  *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 56),
                  (__int128 *)(a1 + 72),
                  v24,
                  v31,
                  &v22) >= 0 )
      {
        if ( v22 < 2 )
        {
          v20 = 2;
          SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=(v21, v31);
        }
        else
        {
          v17 = *(_QWORD *)(a1 + 104);
          v20 = 1;
          v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *, char *, __int64, void *))(*(_QWORD *)v17 + 24LL))(
                 v17,
                 v31,
                 v32,
                 v24,
                 v21);
          if ( v8 < 0 )
          {
            wil::details::in1diag3::Return_HrMsg_NoOriginate(
              retaddr,
              (void *)0x374,
              (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
              (const char *)(unsigned int)v8,
              (int)"Failed to interpolate historical poses",
              v19);
            goto LABEL_28;
          }
        }
        v25 = v31[0];
      }
    }
    else if ( v24 - *v9 < qword_1800D3930 )
    {
      v20 = 0;
      v15 = *(_QWORD *)(a1 + 104);
      v25 = *v9;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, __int64, void *))(*(_QWORD *)v15 + 16LL))(
              v15,
              v9,
              v7,
              v24,
              v21);
      v8 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x363,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_28;
      }
    }
  }
LABEL_27:
  v8 = 0;
LABEL_28:
  if ( v9 )
    operator delete(v9);
LABEL_30:
  if ( v30 )
  {
    v30 = 0;
    lambda_f8380620b3870a98be7ea388687506c5_::operator()(v29);
  }
  return (unsigned int)v8;
}
