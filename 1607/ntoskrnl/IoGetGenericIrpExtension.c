/*
 * XREFs of IoGetGenericIrpExtension @ 0x1401104D0
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x14023CBC8 (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x1400CF278 (IopIrpHasExtensionType.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall IoGetGenericIrpExtension(__int64 a1, void *a2, unsigned __int16 a3)
{
  __int64 v4; // r9
  unsigned int v5; // r10d
  unsigned __int16 v6; // r11
  __int64 v8; // rdx

  if ( a3 > 4u )
    return 3221225485LL;
  if ( IopIrpHasExtensionType(a1, 2u) )
  {
    v8 = v4 + 196;
    if ( *(char *)(v4 + 71) >= 0 )
      v8 = *(_QWORD *)(v4 + 200);
    memmove(a2, (const void *)(v8 + 4), v6);
    return 0;
  }
  return v5;
}
