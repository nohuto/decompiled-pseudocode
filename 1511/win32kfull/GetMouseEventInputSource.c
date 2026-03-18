/*
 * XREFs of GetMouseEventInputSource @ 0x1C00858D0
 * Callers:
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMouseEventInputSource(__int64 a1, _DWORD *a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 48);
  if ( (v2 & 4) != 0 )
  {
    *a2 = 4;
  }
  else if ( (v2 & 8) != 0 )
  {
    *a2 = 8;
  }
  else
  {
    result = (*(_DWORD *)(a1 + 48) & 0x100 | 0x20u) >> 4;
    *a2 = result;
  }
  if ( (v2 & 0x10) != 0 )
  {
    a2[1] = 1;
  }
  else
  {
    result = 2 * (v2 & 1u);
    a2[1] = result;
  }
  return result;
}
