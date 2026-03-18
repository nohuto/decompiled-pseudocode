/*
 * XREFs of FreeProcessMessageFilter @ 0x1C010F990
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgLookupTableCleanUp@@YAXPEAPEAX@Z @ 0x1C010F9B4 (-MsgLookupTableCleanUp@@YAXPEAPEAX@Z.c)
 */

void __fastcall FreeProcessMessageFilter(__int64 a1)
{
  MsgLookupTableCleanUp(*(void ***)(a1 + 792));
  *(_QWORD *)(a1 + 792) = 0LL;
}
