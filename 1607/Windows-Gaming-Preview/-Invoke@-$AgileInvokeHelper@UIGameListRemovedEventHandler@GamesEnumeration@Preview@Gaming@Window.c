/*
 * XREFs of ?Invoke@?$AgileInvokeHelper@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@$00@Details@WRL@Microsoft@@UEAAJPEAUHSTRING__@@@Z @ 0x18000CF30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::AgileInvokeHelper<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,1>::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0LL;
  v8 = 0LL;
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
           v3,
           &GUID_10c5648f_6c8f_4712_9b38_474bc22e76d8,
           &v8);
    if ( v5 < 0 )
      goto LABEL_5;
    v4 = v8;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2);
LABEL_5:
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v5;
}
