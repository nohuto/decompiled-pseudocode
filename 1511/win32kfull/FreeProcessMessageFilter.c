/*
 * XREFs of FreeProcessMessageFilter @ 0x1C00EEF90
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgLookupTableCleanUp@@YAXPEAPEAX@Z @ 0x1C00EEFB4 (-MsgLookupTableCleanUp@@YAXPEAPEAX@Z.c)
 */

void __fastcall FreeProcessMessageFilter(__int64 a1)
{
  MsgLookupTableCleanUp(*(void ***)(a1 + 800));
  *(_QWORD *)(a1 + 800) = 0LL;
}
