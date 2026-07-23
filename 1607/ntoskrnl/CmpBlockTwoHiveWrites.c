/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x1403E16A4
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1403E14A8 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140601DC0 (CmpVirtualPathPresent.c)
 *     CmSaveMergedKeys @ 0x14060CF28 (CmSaveMergedKeys.c)
 * Callees:
 *     CmpReferenceHive @ 0x14002CDA0 (CmpReferenceHive.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpGetNextActiveHive @ 0x1403FA590 (CmpGetNextActiveHive.c)
 *     CmpDereferenceHive @ 0x1403FB910 (CmpDereferenceHive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14
  char v4; // bp
  __int64 i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v10; // rbx
  __int64 v12; // rcx

  v3 = 0;
  v4 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v10 = NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( a1 == NextActiveHive || a2 == NextActiveHive )
    {
      if ( a3 )
        CmpReferenceHive(NextActiveHive);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v10 + 2848), 1u);
      if ( a1 == v10 )
        v3 = 1;
      else
        v4 = 1;
      if ( (!a1 || v3 == 1) && (!a2 || v4 == 1) )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v10 + 2776));
        break;
      }
    }
  }
  if ( (!a1 || v3) && (!a2 || v4) )
    return 0LL;
  if ( v3 != 1 )
  {
    if ( v4 != 1 )
      return 3221225524LL;
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 2848));
    if ( !a3 )
      return 3221225524LL;
    v12 = a2;
    goto LABEL_28;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  if ( a3 )
  {
    v12 = a1;
LABEL_28:
    CmpDereferenceHive(v12);
  }
  return 3221225524LL;
}
