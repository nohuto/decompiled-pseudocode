/*
 * XREFs of CmpUnblockHiveWrites @ 0x1404075C8
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x1404071F8 (CmpVEExecuteParseLogic.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     CmpGetNextHive @ 0x140447A6C (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
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
