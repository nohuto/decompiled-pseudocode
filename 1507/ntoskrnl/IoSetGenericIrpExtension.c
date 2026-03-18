/*
 * XREFs of IoSetGenericIrpExtension @ 0x140135D2C
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x14026FDE0 (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x140135D90 (IopAllocateIrpExtension.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall IoSetGenericIrpExtension(__int64 a1, const void *a2, unsigned __int16 a3, char a4)
{
  __int64 IrpExtension; // rax
  __int64 v9; // rcx

  if ( a3 > 4u )
    return 3221225485LL;
  if ( !a4 )
  {
    v9 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || v9 && (*(_BYTE *)(v9 + 2) & 4) != 0 )
      return 3221225505LL;
  }
  IrpExtension = IopAllocateIrpExtension(a1, 2LL);
  if ( !IrpExtension )
    return 3221225626LL;
  memmove((void *)(IrpExtension + 4), a2, a3);
  return 0LL;
}
