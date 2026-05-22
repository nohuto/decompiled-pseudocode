/*
 * XREFs of ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800787C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180072CE4 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?DeviceAttached_@RawInputProvidersTracing@@QEAAXJKK@Z @ 0x180076140 (-DeviceAttached_@RawInputProvidersTracing@@QEAAXJKK@Z.c)
 *     ?TelemetrySpatialInputController_Added_@RawInputProvidersTracing@@QEAAXQEBG@Z @ 0x180076B10 (-TelemetrySpatialInputController_Added_@RawInputProvidersTracing@@QEAAXQEBG@Z.c)
 *     ?ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@7@@Z @ 0x1800776FC (-ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@Spat.c)
 *     ?SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEAUIMessageSession@@@Z @ 0x180077984 (-SetOwner@SpatialInputControllerHeadEventHandler@@QEAAJPEAVSpatialInputControllerCollection@@PEA.c)
 *     ?PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionController@SpatialInteractionDevices@@PEAVHIDDevice@@@Z @ 0x180077BA4 (-PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionControlle.c)
 *     wil::scope_exit__lambda_fd12116e55b93fce935965703f14cfad___ @ 0x180078AE8 (wil--scope_exit__lambda_fd12116e55b93fce935965703f14cfad___.c)
 *     ?AddDeviceToCache@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800790B0 (-AddDeviceToCache@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionCo.c)
 *     ?TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x18007A42C (-TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionC.c)
 *     ??$MakeAndInitialize@VSpatialInputControllerHeadEventHandler@@V1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpatialInputControllerHeadEventHandler@@@WRL@Microsoft@@@012@@Z @ 0x18007B044 (--$MakeAndInitialize@VSpatialInputControllerHeadEventHandler@@V1@@Details@WRL@Microsoft@@YAJV-$C.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007DDC0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall SpatialInputControllerCollection::OnDeviceAttach(
        SpatialInputControllerCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  unsigned int v6; // ebx
  struct DeviceInfo **v7; // r8
  int v8; // eax
  int DeviceId; // eax
  unsigned int *v10; // r9
  __int64 v11; // rdx
  __m128i v12; // xmm2
  __int16 v13; // dx
  int updated; // eax
  const WCHAR *StringRawBuffer; // rbx
  _DWORD *v16; // rcx
  RawInputProvidersTracing *v17; // rcx
  volatile signed __int32 *v18; // rdi
  _DWORD *v19; // rcx
  int v21; // [rsp+40h] [rbp-79h] BYREF
  int v22; // [rsp+44h] [rbp-75h] BYREF
  struct SpatialInteractionDevices::SpatialInteractionController *v23[2]; // [rsp+48h] [rbp-71h] BYREF
  struct RIMDevice *v24; // [rsp+58h] [rbp-61h] BYREF
  RawInputProvidersTracing *v25[2]; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v26; // [rsp+70h] [rbp-49h]
  char v27; // [rsp+78h] [rbp-41h]
  _QWORD v28[2]; // [rsp+80h] [rbp-39h] BYREF
  unsigned int v29; // [rsp+90h] [rbp-29h]
  __int64 v30; // [rsp+98h] [rbp-21h]
  __int128 v31; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-9h]
  __int128 v33; // [rsp+C0h] [rbp+7h]
  __int128 v34; // [rsp+D0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v30 = -2LL;
  if ( !a3 )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x214,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)0x80070057LL);
    return v6;
  }
  v21 = 0;
  v22 = 0;
  v28[0] = &v21;
  v28[1] = &v22;
  v29 = a2;
  wil::scope_exit__lambda_fd12116e55b93fce935965703f14cfad___(v25, v28);
  v8 = HIDDeviceCollection::OnDeviceAttach(this, a2, v7);
  v6 = v8;
  v21 = v8;
  if ( v8 >= 0 )
  {
    *(_OWORD *)v23 = 0LL;
    DeviceId = SpatialInputControllerCollection::AddDeviceToCache(this, a2, v23);
    v6 = DeviceId;
    v21 = DeviceId;
    if ( DeviceId >= 0 )
    {
      v22 = *((_DWORD *)v23[0] + 67);
      *((_DWORD *)*a3 + 11) = v22;
      v24 = 0LL;
      DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v24, v10);
      v6 = DeviceId;
      v21 = DeviceId;
      if ( DeviceId >= 0 )
      {
        DeviceId = SpatialInputControllerCollection::PrepareControllerParsing(
                     this,
                     v23[0],
                     (struct _HIDP_PREPARSED_DATA **)v24);
        v6 = DeviceId;
        v21 = DeviceId;
        if ( DeviceId >= 0 )
        {
          v31 = *((_OWORD *)v23[0] + 17);
          v32 = *((_OWORD *)v23[0] + 18);
          v12 = *((__m128i *)v23[0] + 19);
          LODWORD(v34) = *((_DWORD *)v23[0] + 80);
          v13 = _mm_cvtsi128_si32(v12);
          *((_WORD *)*a3 + 24) = v13;
          *((_WORD *)*a3 + 25) = _mm_extract_epi16(v12, 1);
          *((_WORD *)*a3 + 26) = v13;
          updated = SpatialInputControllerCollection::TryUpdateControllerNodeReference(this, v23[0]);
          if ( updated < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x230,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
              (const char *)(unsigned int)updated);
          if ( !*((_QWORD *)this + 352) )
          {
            DeviceId = Microsoft::WRL::Details::MakeAndInitialize<SpatialInputControllerHeadEventHandler,SpatialInputControllerHeadEventHandler>((char *)this + 2816);
            v6 = DeviceId;
            v21 = DeviceId;
            if ( DeviceId < 0 )
            {
              v11 = 565LL;
              goto LABEL_16;
            }
            SpatialInputControllerHeadEventHandler::SetOwner(
              *((struct EventRegistrationToken **)this + 352),
              this,
              *((struct IMessageSession **)this + 353));
          }
          if ( !*((_BYTE *)v23[0] + 313) )
          {
            v31 = _xmm;
            v32 = _xmm;
            v33 = _xmm;
            v34 = _xmm;
            SpatialInputControllerCollection::ParseAndSendReport(
              this,
              v23[0],
              0LL,
              0,
              a2,
              0LL,
              (const struct Windows::Foundation::Numerics::Matrix4x4 *)&v31);
          }
          StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v23[0] + 68), 0LL);
          v16 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
          if ( v16 && *v16 )
          {
            RawInputProvidersTracing::Instance();
            RawInputProvidersTracing::TelemetrySpatialInputController_Added_(v17, StringRawBuffer);
          }
          v6 = 0;
          goto LABEL_24;
        }
        v11 = 553LL;
      }
      else
      {
        v11 = 551LL;
      }
    }
    else
    {
      v11 = 544LL;
    }
LABEL_16:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)DeviceId);
LABEL_24:
    v18 = (volatile signed __int32 *)v23[1];
    if ( v23[1] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v23[1] + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x21D,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
    (const char *)(unsigned int)v8);
LABEL_28:
  if ( v27 )
  {
    v27 = 0;
    v19 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v19 )
    {
      if ( *v19 )
      {
        RawInputProvidersTracing::Instance();
        RawInputProvidersTracing::DeviceAttached_(v25[0], *(_DWORD *)v25[0], v26, *(_DWORD *)v25[1]);
      }
    }
  }
  return v6;
}
