/*
 * XREFs of CmpCopyCompressedName @ 0x1404400E0
 * Callers:
 *     CmpConstructNameFromKeyNodes @ 0x14002D790 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1401B49BC (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpQueryKeyValueData @ 0x140440360 (CmpQueryKeyValueData.c)
 *     CmAddLogForAction @ 0x1404A1450 (CmAddLogForAction.c)
 *     CmpAddSubKeyToList @ 0x1404B0C8C (CmpAddSubKeyToList.c)
 *     CmpPopulateNodeInformation @ 0x1404D2694 (CmpPopulateNodeInformation.c)
 *     CmpMarkIndexDirty @ 0x1404D6634 (CmpMarkIndexDirty.c)
 *     CmpInitializeValueNameString @ 0x14053B414 (CmpInitializeValueNameString.c)
 *     CmpInitializeKeyNameString @ 0x140608CD4 (CmpInitializeKeyNameString.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 *     CmpGetNodeName @ 0x1407B060C (CmpGetNodeName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407B06B0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpCopyCompressedName(_WORD *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v4; // edx
  __int64 v5; // rdx
  __int64 result; // rax

  v4 = a2 >> 1;
  if ( v4 < a4 )
    a4 = v4;
  if ( a4 )
  {
    v5 = a4;
    do
    {
      result = *a3++;
      *a1++ = result;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
