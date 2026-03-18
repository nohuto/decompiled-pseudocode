/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x1C00C80C8
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00754B4 (RawInputManagerObjectDelete.c)
 *     RIMReclaimHoldingFrame @ 0x1C00C88A8 (RIMReclaimHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall rimFreePointerRawDataListWorker(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v1 = *(_QWORD *)(v1 + 16);
      Win32FreePool();
      result = Win32FreePool();
    }
    while ( v1 );
  }
  return result;
}
