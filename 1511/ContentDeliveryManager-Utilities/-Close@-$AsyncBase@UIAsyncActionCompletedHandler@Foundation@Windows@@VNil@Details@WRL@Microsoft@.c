/*
 * XREFs of ?Close@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18001CA70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Close(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  unsigned int v2; // edi
  signed __int32 v4; // ecx
  signed __int32 v5; // ecx
  signed __int32 v7; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 10);
  v2 = 0;
  v7 = -2;
  _InterlockedCompareExchange(&v7, v1, -2);
  v4 = v7;
  if ( (unsigned int)(v7 - 1) <= 3 && v4 == _InterlockedCompareExchange(a1 + 10, 4, v7) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 144LL))(a1, 4LL);
  }
  else
  {
    v5 = *((_DWORD *)a1 + 10);
    v8 = -2;
    _InterlockedCompareExchange(&v8, v5, -2);
    if ( v8 != 4 )
    {
      v2 = -2147483635;
      RoOriginateError(2147483661LL, 0LL);
    }
  }
  return v2;
}
