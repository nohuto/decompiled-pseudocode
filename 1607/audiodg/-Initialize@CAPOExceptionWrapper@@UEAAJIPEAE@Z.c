/*
 * XREFs of ?Initialize@CAPOExceptionWrapper@@UEAAJIPEAE@Z @ 0x1400105B0
 * Callers:
 *     ?Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z @ 0x14000F810 (-Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x140033D28 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 */

__int64 __fastcall CAPOExceptionWrapper::Initialize(CAPOExceptionWrapper *this, __int64 a2, unsigned __int8 *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int8 *))(**((_QWORD **)this + 11) + 48LL))(
           *((_QWORD *)this + 11),
           a2,
           a3);
}
