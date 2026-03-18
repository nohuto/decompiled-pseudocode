/*
 * XREFs of GetThreadpGlobalPopupMenu @ 0x14000F544
 * Callers:
 *     xxxGetMenuBarInfo @ 0x14000D8F8 (xxxGetMenuBarInfo.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxMNDismissIfOffMenu @ 0x1402D9808 (xxxMNDismissIfOffMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetThreadpGlobalPopupMenu(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 640);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)v1;
  return result;
}
