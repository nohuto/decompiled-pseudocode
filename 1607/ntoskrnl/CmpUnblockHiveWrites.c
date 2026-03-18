/*
 * XREFs of CmpUnblockHiveWrites @ 0x1403E13D8
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1403E1228 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteOpenLogic @ 0x1404402B0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140601A60 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     CmpGetNextHive @ 0x1403FC878 (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x1403FCA50 (CmpDereferenceHive.c)
 */

__int64 __fastcall CmpUnblockHiveWrites(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 NextHive; // rax

  v5 = a1;
  if ( a1 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  }
  else
  {
    do
    {
      NextHive = CmpGetNextHive();
      v5 = NextHive;
      if ( !a2 || (a2 & *(_DWORD *)(NextHive + 5360)) == a2 || NextHive == CmpMasterHive )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(NextHive + 2848));
        CmpDereferenceHive(v5);
      }
    }
    while ( v5 != a3 );
  }
  return CmpDereferenceHive(v5);
}
