/*
 * XREFs of imp_WdfObjectContextGetObject @ 0x1C0033910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall imp_WdfObjectContextGetObject(_WDF_DRIVER_GLOBALS *__formal, _QWORD *ContextPointer)
{
  __int64 v2; // rax

  v2 = *(ContextPointer - 6);
  if ( *(_WORD *)(v2 + 10) )
    return v2 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    return 0LL;
}
