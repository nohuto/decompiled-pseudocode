/*
 * XREFs of ??_E?$AgileInvokeHelper@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000D220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002684C (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::AgileInvokeHelper<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,1>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = Block[5];
  if ( v4 )
  {
    Block[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)Block + 9) = -1073741823;
  v5 = Block[3];
  if ( v5 )
  {
    Block[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
