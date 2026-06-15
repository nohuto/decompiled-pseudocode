/*
 * XREFs of ?GetEffectsList@CAPOExceptionWrapper@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x18008C310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x18008BEB8 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 */

__int64 __fastcall CAPOExceptionWrapper::GetEffectsList(
        CAPOExceptionWrapper *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *, void *))(**((_QWORD **)this + 12) + 24LL))(
           *((_QWORD *)this + 12),
           a2,
           a3,
           a4);
}
