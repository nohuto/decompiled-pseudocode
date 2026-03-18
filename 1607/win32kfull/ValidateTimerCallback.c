/*
 * XREFs of ValidateTimerCallback @ 0x1C00FE148
 * Callers:
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     NtUserValidateTimerCallback @ 0x1C00FE0F0 (NtUserValidateTimerCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateTimerCallback(__int64 a1)
{
  int v1; // eax

  if ( *(_DWORD *)(a1 + 552) <= 0x501u )
    v1 = *(_DWORD *)(a1 + 568);
  else
    v1 = 0;
  return (v1 & 0x1000000) != 0
      && (*(_DWORD *)(a1 + 440) & 0xC) == 0
      && PsGetProcessId(**(PEPROCESS **)(a1 + 376)) != (HANDLE)gpidLogon;
}
