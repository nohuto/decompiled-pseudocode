/*
 * XREFs of ?Close@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18000C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Close(
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
