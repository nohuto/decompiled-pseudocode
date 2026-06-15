/*
 * XREFs of ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x18006ED40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x1800386C8 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x180038990 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003E5C0 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z @ 0x18006E770 (-GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeSoftware::Initialize(
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 *this,
        struct IMMDevice *a2)
{
  int PolicyConfig; // edi
  __int64 v5; // rax
  signed int LastError; // eax
  __int64 (__fastcall *v7)(CPolicyConfig *); // rsi
  LPVOID pv; // [rsp+60h] [rbp+30h] BYREF
  LPVOID v10; // [rsp+70h] [rbp+40h] BYREF
  CPolicyConfig *v11; // [rsp+78h] [rbp+48h] BYREF

  GetFormFactor(a2, this + 34);
  v11 = 0LL;
  PolicyConfig = GetPolicyConfig(&v11);
  if ( PolicyConfig < 0 )
    goto LABEL_15;
  v10 = 0LL;
  PolicyConfig = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &v10);
  if ( PolicyConfig >= 0 )
  {
    pv = 0LL;
    PolicyConfig = (*(__int64 (__fastcall **)(CPolicyConfig *, LPVOID, _QWORD, LPVOID *, __int64))(*(_QWORD *)v11 + 32LL))(
                     v11,
                     v10,
                     0LL,
                     &pv,
                     -2LL);
    if ( PolicyConfig >= 0 )
      *((_DWORD *)this + 17) = *((unsigned __int16 *)pv + 1);
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  CoTaskMemFree(v10);
  v10 = 0LL;
  if ( PolicyConfig < 0 )
    goto LABEL_15;
  PolicyConfig = CVolumeControlBase::Initialize((CVolumeControlBase *)this, (struct IUnknown *)a2);
  if ( PolicyConfig < 0 )
    goto LABEL_15;
  if ( ThreadPool )
  {
    v5 = (*(__int64 (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 *))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CVolumeSoftware::OnPersistState,
           this);
    *((_QWORD *)this + 18) = v5;
    if ( !v5 )
    {
      LastError = GetLastError();
      PolicyConfig = LastError;
      if ( LastError > 0 )
        PolicyConfig = (unsigned __int16)LastError | 0x80070000;
    }
  }
  if ( PolicyConfig < 0 )
  {
LABEL_15:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x52u,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        PolicyConfig);
    }
  }
  if ( v11 )
  {
    v7 = *(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v11 + 16LL);
    if ( v7 == CPolicyConfig::Release )
      CPolicyConfig::Release(v11);
    else
      v7(v11);
  }
  return (unsigned int)PolicyConfig;
}
