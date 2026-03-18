/*
 * XREFs of IntToULongLong @ 0x1402D5134
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1402591EC (xxxClientCopyDDEIn1.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall IntToULongLong(INT iOperand, ULONGLONG *pullResult)
{
  ULONGLONG v2; // rax

  if ( iOperand < 0 )
    v2 = -1LL;
  else
    v2 = iOperand;
  *pullResult = v2;
  return (iOperand >> 31) & 0x80070216;
}
