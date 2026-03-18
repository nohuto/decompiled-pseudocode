/*
 * XREFs of CmosTranslatePNPIDToEnum @ 0x1C00482C0
 * Callers:
 *     CmosGetOpRegionType @ 0x1C0048230 (CmosGetOpRegionType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmosTranslatePNPIDToEnum(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  char **v7; // rax

  v4 = 0;
  if ( CmosTypeTranslationTable )
  {
    v7 = &CmosTypeTranslationTable;
    while ( !strstr(*(const char **)(a4 + 64), *v7) )
    {
      v7 = &(&CmosTypeTranslationTable)[2 * ++v4];
      if ( !*v7 )
        return CmosConfigSpaceHandlerWorker(a1, 0LL, 0LL, (unsigned int *)a4);
    }
    CmosDeviceType = (int)(&CmosTypeTranslationTable)[2 * v4 + 1];
  }
  return CmosConfigSpaceHandlerWorker(a1, 0LL, 0LL, (unsigned int *)a4);
}
