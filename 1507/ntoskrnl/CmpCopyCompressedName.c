/*
 * XREFs of CmpCopyCompressedName @ 0x14042B374
 * Callers:
 *     CmpQueryKeyValueData @ 0x140427AD0 (CmpQueryKeyValueData.c)
 *     CmpQueryKeyDataFromNode @ 0x1404C7460 (CmpQueryKeyDataFromNode.c)
 *     CmpInitializeValueNameString @ 0x1404F1CC4 (CmpInitializeValueNameString.c)
 *     CmAddLogForAction @ 0x1404F1E20 (CmAddLogForAction.c)
 *     CmpAddSubKeyEx @ 0x1405335D0 (CmpAddSubKeyEx.c)
 *     CmpMarkIndexDirty @ 0x1405451A8 (CmpMarkIndexDirty.c)
 *     CmpInitializeKeyNameString @ 0x1405855C4 (CmpInitializeKeyNameString.c)
 *     CmpParseCacheAddSymbolicLink @ 0x1405BB434 (CmpParseCacheAddSymbolicLink.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 *     CmpGetNodeName @ 0x1407BB644 (CmpGetNodeName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407BB6E8 (CmSelectQualifiedInstallLanguage.c)
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
