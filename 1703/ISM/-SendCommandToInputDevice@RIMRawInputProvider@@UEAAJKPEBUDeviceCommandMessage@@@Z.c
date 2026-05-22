/*
 * XREFs of ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180071350
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetInputDeviceRepeatParameters@KeyboardDeviceCollection@@QEAAJKI@Z @ 0x180071B74 (-SetInputDeviceRepeatParameters@KeyboardDeviceCollection@@QEAAJKI@Z.c)
 *     ?SetInputDeviceIndicatorState@KeyboardDeviceCollection@@QEAAJKG@Z @ 0x180071CA0 (-SetInputDeviceIndicatorState@KeyboardDeviceCollection@@QEAAJKG@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180072CE4 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800731FC (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?SetHapticsFeedback_@RawInputProvidersTracing@@QEAAXJKEEG@Z @ 0x18007684C (-SetHapticsFeedback_@RawInputProvidersTracing@@QEAAXJKEEG@Z.c)
 *     ?GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800793B8 (-GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionContr.c)
 *     wil::ScopeExit__lambda_9b01a57624a3e62828204aad12a2dc84___ @ 0x18007A554 (wil--ScopeExit__lambda_9b01a57624a3e62828204aad12a2dc84___.c)
 *     ?SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z @ 0x18009AD5C (-SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z.c)
 *     ?StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x18009B000 (-StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall RIMRawInputProvider::SendCommandToInputDevice(
        RIMRawInputProvider *this,
        unsigned int a2,
        const struct DeviceCommandMessage *a3)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int16 v9; // r15
  unsigned __int8 v10; // bl
  unsigned __int8 v11; // r14
  __int64 v12; // r9
  int CacheEntry; // eax
  _DWORD *v14; // rcx
  RawInputProvidersTracing *v15; // rcx
  SpatialInteractionDevices::SpatialInteractionController *v16; // rcx
  SpatialInteractionDevices::SpatialInteractionController *v17; // rbx
  int v18; // eax
  _DWORD *v19; // rcx
  RawInputProvidersTracing *v20; // rcx
  SpatialInteractionDevices::SpatialInteractionController *v21; // rbx
  int v22; // eax
  _DWORD *v23; // rcx
  RawInputProvidersTracing *v24; // rcx
  SpatialInteractionDevices::SpatialInteractionController *v25; // rbx
  _DWORD *v26; // rcx
  RawInputProvidersTracing *v27; // rcx
  SpatialInteractionDevices::SpatialInteractionController *v28; // rbx
  __int64 v29; // rcx
  unsigned int *v30; // r9
  RIMDeviceCollection *v31; // r11
  __int64 v32; // rdi
  int v33; // ebx
  int v34; // r9d
  int DeviceId; // eax
  __int64 v36; // r11
  RIMDeviceCollection *v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // r9d
  RIMDeviceCollection *v41; // rcx
  int *v43; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v44; // [rsp+60h] [rbp-31h]
  unsigned __int8 v45; // [rsp+64h] [rbp-2Dh]
  char v46; // [rsp+65h] [rbp-2Ch]
  __int16 v47; // [rsp+66h] [rbp-2Bh]
  char v48; // [rsp+68h] [rbp-29h]
  SpatialInteractionDevices::SpatialInteractionController *v49[2]; // [rsp+70h] [rbp-21h] BYREF
  struct RIMDevice *v50; // [rsp+80h] [rbp-11h] BYREF
  int *v51; // [rsp+88h] [rbp-9h] BYREF
  unsigned int v52; // [rsp+90h] [rbp-1h]
  unsigned __int8 v53; // [rsp+94h] [rbp+3h]
  unsigned __int8 v54; // [rsp+95h] [rbp+4h]
  unsigned __int16 v55; // [rsp+96h] [rbp+5h]
  __int64 v56; // [rsp+98h] [rbp+7h]
  struct DeviceInfo *v57; // [rsp+A0h] [rbp+Fh] BYREF
  struct DeviceInfo *v58; // [rsp+A8h] [rbp+17h] BYREF
  struct DeviceInfo *v59; // [rsp+B0h] [rbp+1Fh] BYREF
  struct DeviceInfo *v60; // [rsp+B8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  int v62; // [rsp+108h] [rbp+77h] BYREF
  int v63; // [rsp+110h] [rbp+7Fh] BYREF

  v56 = -2LL;
  v6 = 0;
  if ( !*(_DWORD *)a3 )
  {
    v41 = (RIMDeviceCollection *)*((_QWORD *)this + 6);
    if ( !v41 )
      return v6;
    if ( (int)RIMDeviceCollection::GetDeviceInfo(v41, a2, &v60) < 0 )
      return v6;
    v38 = KeyboardDeviceCollection::SetInputDeviceIndicatorState(
            *((KeyboardDeviceCollection **)this + 6),
            a2,
            *((_WORD *)a3 + 4));
    v6 = v38;
    if ( v38 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v6;
    v40 = 430;
LABEL_79:
    Template_qqq(v39, &MinInput_Warning_CheckResult, 0, v40, v38);
    return v6;
  }
  if ( *(_DWORD *)a3 == 1 )
  {
    v37 = (RIMDeviceCollection *)*((_QWORD *)this + 6);
    if ( !v37 )
      return v6;
    if ( (int)RIMDeviceCollection::GetDeviceInfo(v37, a2, &v59) < 0 )
      return v6;
    v38 = KeyboardDeviceCollection::SetInputDeviceRepeatParameters(
            *((KeyboardDeviceCollection **)this + 6),
            a2,
            *((_DWORD *)a3 + 2));
    v6 = v38;
    if ( v38 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v6;
    v40 = 446;
    goto LABEL_79;
  }
  if ( *(_DWORD *)a3 != 2 )
  {
    if ( *(_DWORD *)a3 != 3 )
    {
      v6 = -2147467263;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 492, 1);
      return v6;
    }
    if ( (int)RIMDeviceCollection::GetDeviceInfo(*((RIMDeviceCollection **)this + 13), a2, &v57) < 0 )
      return v6;
    v8 = *((_QWORD *)this + 13);
    v9 = *((_WORD *)a3 + 5);
    v10 = *((_BYTE *)a3 + 9);
    v11 = *((_BYTE *)a3 + 8);
    v62 = 0;
    *(_OWORD *)v49 = 0LL;
    v51 = &v62;
    v52 = a2;
    v53 = v11;
    v54 = v10;
    v55 = v9;
    wil::ScopeExit__lambda_9b01a57624a3e62828204aad12a2dc84___(&v43, &v51, v7, v8);
    CacheEntry = SpatialInputControllerCollection::GetCacheEntry(v12, a2, v49);
    v6 = CacheEntry;
    v62 = CacheEntry;
    if ( CacheEntry < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3D1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)CacheEntry);
      if ( v48 )
      {
        v48 = 0;
        v14 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
        if ( v14 )
        {
          if ( *v14 )
          {
            RawInputProvidersTracing::Instance();
            RawInputProvidersTracing::SetHapticsFeedback_(v15, *v43, v44, v45, v46, v47);
          }
        }
      }
      v16 = v49[1];
      if ( v49[1] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v49[1] + 2, 0xFFFFFFFF) == 1 )
        {
          v17 = v49[1];
          (**(void (__fastcall ***)(SpatialInteractionDevices::SpatialInteractionController *))v49[1])(v49[1]);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(SpatialInteractionDevices::SpatialInteractionController *))(*(_QWORD *)v49[1] + 8LL))(v49[1]);
        }
      }
LABEL_47:
      if ( (v6 & 0x80000000) != 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq((__int64)v16, &MinInput_Warning_CheckResult, 0, 481, v6);
      return v6;
    }
    if ( v10 )
    {
      v22 = SpatialInteractionDevices::SpatialInteractionController::SetHapticsFeedback(v49[0], v11 + 4096, v10, v9);
      v6 = v22;
      v62 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x3DA,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
          (const char *)(unsigned int)v22);
        if ( v48 )
        {
          v48 = 0;
          v23 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
          if ( v23 )
          {
            if ( *v23 )
            {
              RawInputProvidersTracing::Instance();
              RawInputProvidersTracing::SetHapticsFeedback_(v24, *v43, v44, v45, v46, v47);
            }
          }
        }
        v16 = v49[1];
        if ( v49[1] )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v49[1] + 2, 0xFFFFFFFF) == 1 )
          {
            v25 = v49[1];
            (**(void (__fastcall ***)(SpatialInteractionDevices::SpatialInteractionController *))v49[1])(v49[1]);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v25 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(SpatialInteractionDevices::SpatialInteractionController *))(*(_QWORD *)v49[1] + 8LL))(v49[1]);
          }
        }
        goto LABEL_47;
      }
    }
    else
    {
      v18 = SpatialInteractionDevices::SpatialInteractionController::StopHapticsFeedback(v49[0]);
      v6 = v18;
      v62 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x3D5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
          (const char *)(unsigned int)v18);
        if ( v48 )
        {
          v48 = 0;
          v19 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
          if ( v19 )
          {
            if ( *v19 )
            {
              RawInputProvidersTracing::Instance();
              RawInputProvidersTracing::SetHapticsFeedback_(v20, *v43, v44, v45, v46, v47);
            }
          }
        }
        v16 = v49[1];
        if ( v49[1] )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v49[1] + 2, 0xFFFFFFFF) == 1 )
          {
            v21 = v49[1];
            (**(void (__fastcall ***)(SpatialInteractionDevices::SpatialInteractionController *))v49[1])(v49[1]);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(SpatialInteractionDevices::SpatialInteractionController *))(*(_QWORD *)v49[1] + 8LL))(v49[1]);
          }
        }
        goto LABEL_47;
      }
    }
    if ( v48 )
    {
      v48 = 0;
      v26 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
      if ( v26 )
      {
        if ( *v26 )
        {
          RawInputProvidersTracing::Instance();
          RawInputProvidersTracing::SetHapticsFeedback_(v27, *v43, v44, v45, v46, v47);
        }
      }
    }
    v16 = v49[1];
    if ( v49[1] )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v49[1] + 2, 0xFFFFFFFF) == 1 )
      {
        v28 = v49[1];
        (**(void (__fastcall ***)(SpatialInteractionDevices::SpatialInteractionController *))v49[1])(v49[1]);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(SpatialInteractionDevices::SpatialInteractionController *))(*(_QWORD *)v49[1] + 8LL))(v49[1]);
      }
    }
    goto LABEL_47;
  }
  if ( (int)RIMDeviceCollection::GetDeviceInfo(*((RIMDeviceCollection **)this + 15), a2, &v58) < 0 )
    return v6;
  v31 = (RIMDeviceCollection *)*((_QWORD *)this + 15);
  v32 = *((_QWORD *)a3 + 1);
  v50 = 0LL;
  v63 = 0;
  if ( v32 )
  {
    DeviceId = RIMDeviceCollection::FindDeviceId(v31, a2, &v50, v30);
    v33 = DeviceId;
    if ( DeviceId >= 0 )
    {
      v29 = (unsigned int)(*(_DWORD *)v32 - 1);
      if ( *(_DWORD *)v32 == 1 )
      {
        RIMDeviceIoControl(
          *(_QWORD *)(v36 + 80),
          *((_QWORD *)v50 + 2),
          *(unsigned int *)(v32 + 8),
          *(_QWORD *)(v32 + 16),
          *(_DWORD *)(v32 + 24),
          *(_QWORD *)(v32 + 32),
          *(_DWORD *)(v32 + 40),
          &v63,
          0);
        v29 = *(_QWORD *)(v32 + 48);
        if ( v29 )
          *(_DWORD *)v29 = v63;
      }
      else
      {
        if ( *(_DWORD *)v32 != 2 )
        {
          LOBYTE(v33) = 87;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_55;
          v34 = 249;
          goto LABEL_54;
        }
        v29 = *((_QWORD *)v50 + 2);
        **(_QWORD **)(v32 + 8) = v29;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v29, &MinInput_Warning_CheckResult, 0, 207, DeviceId);
    }
    v6 = v33;
    if ( v33 >= 0 )
      return v6;
    goto LABEL_67;
  }
  LOBYTE(v33) = 87;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v34 = 201;
LABEL_54:
    Template_qqq(v29, &MinInput_Warning_CheckResult, 0, v34, 87);
  }
LABEL_55:
  v6 = -2147024809;
LABEL_67:
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v29, &MinInput_Warning_CheckResult, 0, 463, v33);
  return v6;
}
