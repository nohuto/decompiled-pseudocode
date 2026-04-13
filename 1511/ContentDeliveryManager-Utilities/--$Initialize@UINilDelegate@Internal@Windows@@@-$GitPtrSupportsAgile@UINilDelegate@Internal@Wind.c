/*
 * XREFs of ??$Initialize@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJPEAUINilDelegate@12@@Z @ 0x18001F5E8
 * Callers:
 *     ?PutOnProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUINilDelegate@23@@Z @ 0x18001C0D0 (-PutOnProgress@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINi.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::Initialize<Windows::Internal::INilDelegate>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  int AgileReference; // ebp
  __int64 v6; // rdi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
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
