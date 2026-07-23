/*
 * XREFs of CmpCopyCompressedName @ 0x14043EFB0
 * Callers:
 *     CmpConstructNameFromKeyNodes @ 0x14002D310 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1401B48A0 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpQueryKeyValueData @ 0x14043F230 (CmpQueryKeyValueData.c)
 *     CmpAddSubKeyToList @ 0x14049B06C (CmpAddSubKeyToList.c)
 *     CmpPopulateNodeInformation @ 0x1404B6134 (CmpPopulateNodeInformation.c)
 *     CmpMarkIndexDirty @ 0x1404B9C38 (CmpMarkIndexDirty.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 *     CmpInitializeValueNameString @ 0x14053B954 (CmpInitializeValueNameString.c)
 *     CmpInitializeKeyNameString @ 0x140608D88 (CmpInitializeKeyNameString.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
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
