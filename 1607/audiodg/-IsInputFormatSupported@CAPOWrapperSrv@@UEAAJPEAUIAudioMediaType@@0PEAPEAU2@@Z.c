/*
 * XREFs of ?IsInputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x14000F850
 * Callers:
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0008_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x14000FC00 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::IsInputFormatSupported(
        CAPOWrapperSrv *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  CAPOExceptionWrapper *v4; // rcx
  __int64 (__fastcall *v5)(CAPOExceptionWrapper *__hidden, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **); // rax

  v4 = (CAPOExceptionWrapper *)*((_QWORD *)this + 9);
  if ( !v4 )
    return 2147500033LL;
  v5 = *(__int64 (__fastcall **)(CAPOExceptionWrapper *__hidden, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(*(_QWORD *)v4 + 56LL);
  if ( v5 == CAPOExceptionWrapper::IsInputFormatSupported )
    return CAPOExceptionWrapper::IsInputFormatSupported(v4, a2, a3, a4);
  else
    return v5(v4, a2, a3, a4);
}
