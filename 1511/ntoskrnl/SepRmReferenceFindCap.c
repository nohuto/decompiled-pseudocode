/*
 * XREFs of SepRmReferenceFindCap @ 0x140201B24
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x1400426B0 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     SeRmReferenceFindCapName @ 0x1402018E4 (SeRmReferenceFindCapName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x140003B40 (RtlLookupEntryHashTable.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     RtlGetNextEntryHashTable @ 0x1400D9E60 (RtlGetNextEntryHashTable.c)
 *     SepRmDereferenceCapTable @ 0x140200794 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceCapTable @ 0x140201A60 (SepRmReferenceCapTable.c)
 *     SepComputeSidSignature @ 0x1403BF0A0 (SepComputeSidSignature.c)
 */

__int64 __fastcall SepRmReferenceFindCap(PSID Sid1, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a2)
{
  unsigned int v4; // esi
  _RTL_DYNAMIC_HASH_TABLE *v5; // rdi
  ULONG_PTR v6; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY NextEntryHashTable; // rbx
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  Context.ChainHead = 0LL;
  *a2 = 0LL;
  Context.PrevLinkage = 0LL;
  Context.Signature = 0LL;
  v4 = -1073741275;
  v5 = (_RTL_DYNAMIC_HASH_TABLE *)SepRmReferenceCapTable();
  if ( v5 )
  {
    if ( !SepRmEnforceCap )
      goto LABEL_8;
    v6 = SepComputeSidSignature(Sid1);
    NextEntryHashTable = RtlLookupEntryHashTable(v5, v6, &Context);
    if ( !NextEntryHashTable )
      goto LABEL_8;
    do
    {
      if ( RtlEqualSid(Sid1, NextEntryHashTable[1].Linkage.Flink) == 1 )
        break;
      NextEntryHashTable = RtlGetNextEntryHashTable(v5, &Context);
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
      SepRmDereferenceCapTable((volatile signed __int64 *)v5);
    }
  }
  return v4;
}
