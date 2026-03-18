/*
 * XREFs of ?IsPointerMsgRedirected@@YAH_KPEAH@Z @ 0x1C01F0254
 * Callers:
 *     xxxPointerCallHook @ 0x1C000D47C (xxxPointerCallHook.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A54 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 */

__int64 __fastcall IsPointerMsgRedirected(__int64 a1, int *a2)
{
  struct _LIST_ENTRY *FrameById; // rax
  __int64 v4; // r9
  _DWORD *v5; // r10
  _DWORD *v6; // rcx

  *a2 = 0;
  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0LL;
  v6 = (_DWORD *)FrameById[5].Blink + 54 * *(unsigned int *)(v4 + 32);
  if ( (v6[1] & 0x80u) != 0 )
    *v5 = 1;
  return (unsigned int)-__CFSHR__(*v6, 11);
}
