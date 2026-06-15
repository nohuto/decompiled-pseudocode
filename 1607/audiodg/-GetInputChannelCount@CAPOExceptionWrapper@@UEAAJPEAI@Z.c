/*
 * XREFs of ?GetInputChannelCount@CAPOExceptionWrapper@@UEAAJPEAI@Z @ 0x140034070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x140033D28 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 */

__int64 __fastcall CAPOExceptionWrapper::GetInputChannelCount(CAPOExceptionWrapper *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 11) + 72LL))(
           *((_QWORD *)this + 11),
           a2);
}
