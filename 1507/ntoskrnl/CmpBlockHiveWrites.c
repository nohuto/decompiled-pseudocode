/*
 * XREFs of CmpBlockHiveWrites @ 0x14040760C
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x1404071F8 (CmpVEExecuteParseLogic.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 * Callees:
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     CmpGetNextHive @ 0x140447A6C (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
 */

__int64 __fastcall CmpBlockHiveWrites(__int64 a1, int a2, __int64 *a3)
{
  __int64 i; // rcx
  __int64 NextHive; // rax
  __int64 v8; // rbx

  for ( i = 0LL; ; i = v8 )
  {
    NextHive = CmpGetNextHive(i);
    v8 = NextHive;
    if ( !NextHive )
      return a1 != 0 ? 0xC0000034 : 0;
    if ( a1 == NextHive || !a1 )
    {
      if ( !a2 || (a2 & *(_DWORD *)(NextHive + 5360)) == a2 || NextHive == CmpMasterHive )
      {
        CmpReferenceHive(NextHive);
        if ( a3 )
          *a3 = v8;
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v8 + 2848), 1u);
      }
      if ( a1 == v8 )
        break;
    }
  }
  CmpDereferenceHive(v8);
  return 0LL;
}
