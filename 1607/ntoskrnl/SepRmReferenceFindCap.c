/*
 * XREFs of SepRmReferenceFindCap @ 0x14021B49C
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14000F500 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     SeRmReferenceFindCapName @ 0x14021B25C (SeRmReferenceFindCapName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x14007FB60 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140096EC0 (RtlGetNextEntryHashTable.c)
 *     SepRmDereferenceCapTable @ 0x140219AA8 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceCapTable @ 0x14021B3D8 (SepRmReferenceCapTable.c)
 *     SepComputeSidSignature @ 0x140475C20 (SepComputeSidSignature.c)
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
