/*
 * XREFs of ??_E?$ImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@UEAAPEAXI@Z @ 0x180020EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ImmersiveWindowMessageHandler<_lambda_1e4f247a89265aed21ef611c1eede965_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx

  v4 = Block[2];
  if ( v4 )
  {
    Block[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
