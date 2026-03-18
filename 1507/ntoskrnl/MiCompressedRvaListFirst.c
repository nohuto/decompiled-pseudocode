/*
 * XREFs of MiCompressedRvaListFirst @ 0x140547800
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1404B88E0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B8D20 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompressedRvaListFirst(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( !*a1 )
    return 0LL;
  result = (unsigned int)a1[1];
  *a2 = result;
  a2[1] = 4;
  return result;
}
