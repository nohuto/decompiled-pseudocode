/*
 * XREFs of IoGetGenericIrpExtension @ 0x140136458
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x14026FDE0 (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall IoGetGenericIrpExtension(__int64 a1, void *a2, unsigned __int16 a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rax
  __int64 v7; // rdx

  v4 = -1073741275;
  if ( a3 > 4u )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || v5 && (*(_BYTE *)(v5 + 2) & 4) != 0 )
  {
    v7 = a1 + 196;
    if ( *(char *)(a1 + 71) >= 0 )
      v7 = *(_QWORD *)(a1 + 200);
    memmove(a2, (const void *)(v7 + 4), a3);
    return 0;
  }
  return v4;
}
