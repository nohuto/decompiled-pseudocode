/*
 * XREFs of CmpPopulateCachedInformation @ 0x1401B6BD0
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6C10 (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpPopulateCachedInformation(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 40;
  if ( a3 < 0x28 )
    return 3221225507LL;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  return 0LL;
}
