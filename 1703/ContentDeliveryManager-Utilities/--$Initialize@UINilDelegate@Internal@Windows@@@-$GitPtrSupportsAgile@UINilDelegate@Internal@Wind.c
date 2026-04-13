/*
 * XREFs of ??$Initialize@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJPEAUINilDelegate@12@@Z @ 0x18001DEC4
 * Callers:
 *     ?PutOnProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUINilDelegate@23@@Z @ 0x18001CA60 (-PutOnProgress@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::Initialize<Windows::Internal::INilDelegate>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  int AgileReference; // edi
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  AgileReference = 0;
  if ( a2 )
  {
    v8 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_2fafaaf9_2986_48ee_919d_98f66edf0a31, a2, &v8);
    if ( AgileReference < 0 )
    {
      v6 = v8;
    }
    else
    {
      v6 = *a1;
      *a1 = v8;
    }
    if ( v6 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)AgileReference;
}
