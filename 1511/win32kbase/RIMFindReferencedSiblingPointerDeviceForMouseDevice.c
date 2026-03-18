/*
 * XREFs of RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C00C3DAC
 * Callers:
 *     RIMApplyPTPConfigRemedy @ 0x1C00D1390 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     RIMIsParentCommon @ 0x1C00059A4 (RIMIsParentCommon.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0010880 (RawInputManagerDeviceObjectReference.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 */

void __fastcall RIMFindReferencedSiblingPointerDeviceForMouseDevice(__int64 a1, struct _LIST_ENTRY **a2)
{
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *v5; // rbx
  __int64 v6; // rdx

  *a2 = 0LL;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimDevList.Flink; i != &gObRimDevList; i = i->Flink )
  {
    v5 = i - 1;
    if ( i == (struct _LIST_ENTRY *)16 )
      v6 = 0LL;
    else
      v6 = (__int64)&v5[4];
    if ( *(_BYTE *)(v6 + 48) == 2
      && (*(_DWORD *)(v6 + 176) & 0x100) == 0
      && (unsigned int)RIMIsParentCommon(
                         a1,
                         v6,
                         *(_QWORD *)(v6 + 400),
                         *(_WORD *)(*(_QWORD *)(v6 + 400) + 110LL),
                         *(_WORD *)(*(_QWORD *)(v6 + 400) + 112LL)) )
    {
      RawInputManagerDeviceObjectReference(&i[-1]);
      *a2 = v5;
      break;
    }
  }
  RIMUnlockExclusive((__int64)&gObListLock);
}
