/*
 * XREFs of ??$CopyLocal@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUINilDelegate@12@@Z @ 0x18001DE44
 * Callers:
 *     ?GetOnProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUINilDelegate@23@@Z @ 0x18001C9A0 (-GetOnProgress@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal<Windows::Internal::INilDelegate>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi

  v3 = *a1;
  if ( *a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v3 + 24LL))(
           v3,
           &GUID_2fafaaf9_2986_48ee_919d_98f66edf0a31,
           a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    *a2 = 0LL;
    return (unsigned int)-2147024809;
  }
  return v4;
}
