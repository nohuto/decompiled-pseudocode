/*
 * XREFs of MiQueryImageRvaList @ 0x1404BAE78
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14042E0B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042E520 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall MiQueryImageRvaList(int *a1, int a2, _DWORD *a3, _QWORD *a4)
{
  int v5; // ecx
  _DWORD *result; // rax

  if ( a2 )
  {
    v5 = 0;
    result = 0LL;
  }
  else
  {
    v5 = *a1;
    result = a1 + 1;
  }
  *a3 = v5;
  if ( a4 )
    *a4 = result;
  return result;
}
