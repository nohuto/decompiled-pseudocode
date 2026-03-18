/*
 * XREFs of ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x1800F8378
 * Callers:
 *     _lambda_d7dfba564e8f284c77d6eef2ecd3c3f1_::_helper_func_cdecl_ @ 0x1800F8200 (_lambda_d7dfba564e8f284c77d6eef2ecd3c3f1_--_helper_func_cdecl_.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1801155E0 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CEffectCompilationTask::GetRestrictedErrorDescription(unsigned __int16 **a1)
{
  int RestrictedErrorInfo; // eax
  unsigned int v3; // edi
  int v4; // eax
  char v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF
  BSTR bstrString; // [rsp+70h] [rbp+18h] BYREF
  BSTR v9; // [rsp+78h] [rbp+20h] BYREF

  *a1 = 0LL;
  v7 = 0LL;
  bstrString = 0LL;
  v9 = 0LL;
  RestrictedErrorInfo = GetRestrictedErrorInfo(&v7);
  v3 = RestrictedErrorInfo;
  if ( RestrictedErrorInfo >= 0 )
  {
    if ( v7 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, BSTR *, char *, unsigned __int16 **, BSTR *))(*(_QWORD *)v7 + 24LL))(
             v7,
             &bstrString,
             &v6,
             a1,
             &v9);
      v3 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x70u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RestrictedErrorInfo, 0x6Du);
  }
  SysFreeString(bstrString);
  SysFreeString(v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v3;
}
