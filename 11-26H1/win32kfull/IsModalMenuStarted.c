/*
 * XREFs of IsModalMenuStarted @ 0x1402AA3F8
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxMNDismissIfOffMenu @ 0x1402D9808 (xxxMNDismissIfOffMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsModalMenuStarted(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)(a1 + 640);
  if ( !v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(v1 + 8) & 0x101) != 1 )
    return 0;
  return v2;
}
