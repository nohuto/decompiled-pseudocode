/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x140407890
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x140407698 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x1406591BC (CmpVirtualPathPresent.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14
  char v4; // bp
  __int64 i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rtt
  __int64 v13; // rcx

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
        _m_prefetchw((const void *)(v10 + 2776));
        v11 = *(_QWORD *)(v10 + 2776) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 2776), v11 - 2, v11) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v10 + 2776));
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
    v13 = a2;
    goto LABEL_29;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  if ( a3 )
  {
    v13 = a1;
LABEL_29:
    CmpDereferenceHive(v13);
  }
  return 3221225524LL;
}
