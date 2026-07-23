/*
 * XREFs of SepRmReferenceFindCap @ 0x140250B38
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14004EE30 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     SeRmReferenceFindCapName @ 0x1402508BC (SeRmReferenceFindCapName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x140015E90 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x14010ED10 (RtlGetNextEntryHashTable.c)
 *     SepRmDereferenceCapTable @ 0x14024F694 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceCapTable @ 0x140250A38 (SepRmReferenceCapTable.c)
 *     SepComputeSidSignature @ 0x140411A9C (SepComputeSidSignature.c)
 */

__int64 __fastcall SepRmReferenceFindCap(PSID Sid1, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  _RTL_DYNAMIC_HASH_TABLE *v7; // rdi
  ULONG_PTR v8; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY NextEntryHashTable; // rbx
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  Context.ChainHead = 0LL;
  *a2 = 0LL;
  Context.PrevLinkage = 0LL;
  Context.Signature = 0LL;
  v6 = -1073741275;
  v7 = (_RTL_DYNAMIC_HASH_TABLE *)SepRmReferenceCapTable((__int64)Sid1, (__int64)a2, a3, a4);
  if ( v7 )
  {
    if ( !SepRmEnforceCap )
      goto LABEL_8;
    v8 = SepComputeSidSignature(Sid1);
    NextEntryHashTable = RtlLookupEntryHashTable(v7, v8, &Context);
    if ( !NextEntryHashTable )
      goto LABEL_8;
    do
    {
      if ( RtlEqualSid(Sid1, NextEntryHashTable[1].Linkage.Flink) == 1 )
        break;
      NextEntryHashTable = RtlGetNextEntryHashTable(v7, &Context);
    }
    while ( NextEntryHashTable );
    if ( NextEntryHashTable )
    {
      *a2 = NextEntryHashTable;
      return 0;
    }
    else
    {
LABEL_8:
      SepRmDereferenceCapTable((volatile signed __int64 *)v7);
    }
  }
  return v6;
}
