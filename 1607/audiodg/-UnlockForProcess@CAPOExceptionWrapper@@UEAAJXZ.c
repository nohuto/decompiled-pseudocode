/*
 * XREFs of ?UnlockForProcess@CAPOExceptionWrapper@@UEAAJXZ @ 0x140034380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x140033D28 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 */

__int64 __fastcall CAPOExceptionWrapper::UnlockForProcess(CAPOExceptionWrapper *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
}
