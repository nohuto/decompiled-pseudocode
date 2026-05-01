/*
 * XREFs of ??$CreateAgileHelper@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAPEAU34567@@Z @ 0x18000CB54
 * Callers:
 *     ?Add@?$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18000C4AC (-Add@-$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U.c)
 * Callees:
 *     ??$Make@U?$AgileInvokeHelper@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@$00@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$AgileInvokeHelper@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@$00@Details@WRL@Microsoft@@@12@XZ @ 0x18000D0A8 (--$Make@U-$AgileInvokeHelper@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>(
        __int64 a1,
        _QWORD *a2)
{
  char *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  signed int AgileReference; // edi
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  char v13; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = (char *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::AgileInvokeHelper<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,1>>(&v12);
  v5 = 0LL;
  if ( &v13 != v4 )
  {
    v5 = *(__int64 **)v4;
    *(_QWORD *)v4 = 0LL;
  }
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  AgileReference = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v8 = v5 + 5;
    v9 = v5[5];
    v5[5] = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = *v8;
    AgileReference = 0;
    if ( a1 )
    {
      if ( v10 )
      {
        *v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      AgileReference = RoGetAgileReference(0LL, &GUID_25f6a421_d8f5_4d91_b40e_53d5e86fde64, a1, v5 + 5);
    }
    else
    {
      *v8 = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( AgileReference >= 0 )
      AgileReference = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*v5)(
                         v5,
                         &GUID_25f6a421_d8f5_4d91_b40e_53d5e86fde64,
                         a2);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
  return (unsigned int)AgileReference;
}
