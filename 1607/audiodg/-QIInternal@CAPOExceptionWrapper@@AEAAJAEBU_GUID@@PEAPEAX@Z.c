/*
 * XREFs of ?QIInternal@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400108A4
 * Callers:
 *     ?NDQueryInterface@CAPOExceptionWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400106E0 (-NDQueryInterface@CAPOExceptionWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x140033D28 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 */

__int64 __fastcall CAPOExceptionWrapper::QIInternal(CAPOExceptionWrapper *this, const struct _GUID *a2, void **a3)
{
  return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 6))(
           *((_QWORD *)this + 6),
           a2,
           a3);
}
