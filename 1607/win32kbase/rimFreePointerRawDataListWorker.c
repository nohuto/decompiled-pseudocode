/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x1C00DA024
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C000A230 (RawInputManagerObjectDelete.c)
 *     rimReclaimHoldingFrame @ 0x1C00DA25C (rimReclaimHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
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
