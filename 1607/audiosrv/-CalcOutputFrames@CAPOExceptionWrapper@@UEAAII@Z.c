/*
 * XREFs of ?CalcOutputFrames@CAPOExceptionWrapper@@UEAAII@Z @ 0x18008C110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x18008BEB8 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 *     ?GetAPOExceptionCrashPolicy@CAPOExceptionWrapper@@AEAAHXZ @ 0x18008C2A0 (-GetAPOExceptionCrashPolicy@CAPOExceptionWrapper@@AEAAHXZ.c)
 */

__int64 __fastcall CAPOExceptionWrapper::CalcOutputFrames(CAPOExceptionWrapper *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10));
}
