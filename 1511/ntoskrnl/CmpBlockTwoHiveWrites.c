/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x1403DE0D8
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1403BC1C8 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x1405E2D38 (CmpVirtualPathPresent.c)
 *     CmSaveMergedKeys @ 0x1405EA0F8 (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     CmpReferenceHive @ 0x140041E80 (CmpReferenceHive.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
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
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v10 + 2776));
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
