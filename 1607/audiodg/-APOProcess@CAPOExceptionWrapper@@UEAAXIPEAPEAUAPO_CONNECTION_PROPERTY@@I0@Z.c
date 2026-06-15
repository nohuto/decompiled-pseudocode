/*
 * XREFs of ?APOProcess@CAPOExceptionWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z @ 0x140033C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x140033D28 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 *     ?GetAPOExceptionCrashPolicy@CAPOExceptionWrapper@@AEAAHXZ @ 0x140034000 (-GetAPOExceptionCrashPolicy@CAPOExceptionWrapper@@AEAAHXZ.c)
 */

void __fastcall CAPOExceptionWrapper::APOProcess(
        CAPOExceptionWrapper *this,
        __int64 a2,
        struct APO_CONNECTION_PROPERTY **a3)
{
  (*(void (__fastcall **)(_QWORD, __int64, struct APO_CONNECTION_PROPERTY **))(**((_QWORD **)this + 10) + 24LL))(
    *((_QWORD *)this + 10),
    a2,
    a3);
}
