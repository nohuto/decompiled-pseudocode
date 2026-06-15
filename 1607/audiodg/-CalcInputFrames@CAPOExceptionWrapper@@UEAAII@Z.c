/*
 * XREFs of ?CalcInputFrames@CAPOExceptionWrapper@@UEAAII@Z @ 0x140033EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x140033D28 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 *     ?GetAPOExceptionCrashPolicy@CAPOExceptionWrapper@@AEAAHXZ @ 0x140034000 (-GetAPOExceptionCrashPolicy@CAPOExceptionWrapper@@AEAAHXZ.c)
 */

__int64 __fastcall CAPOExceptionWrapper::CalcInputFrames(CAPOExceptionWrapper *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 32LL))(*((_QWORD *)this + 10));
}
