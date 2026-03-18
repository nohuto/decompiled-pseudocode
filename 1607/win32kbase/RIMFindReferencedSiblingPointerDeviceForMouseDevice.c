/*
 * XREFs of RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C00D26CC
 * Callers:
 *     RIMApplyPTPConfigRemedy @ 0x1C0010ED8 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     RIMIsParentCommon @ 0x1C0005BA0 (RIMIsParentCommon.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0010C90 (RawInputManagerDeviceObjectReference.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 */

void __fastcall RIMFindReferencedSiblingPointerDeviceForMouseDevice(__int64 a1, __int64 **a2)
{
  __int64 *i; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rdx

  *a2 = 0LL;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    v5 = i - 2;
    if ( i == (__int64 *)16 )
      v6 = 0LL;
    else
      v6 = (__int64)(v5 + 8);
    if ( *(_BYTE *)(v6 + 48) == 2
      && (*(_DWORD *)(v6 + 184) & 0x100) == 0
      && (unsigned int)RIMIsParentCommon(
                         a1,
                         v6,
                         *(_QWORD *)(v6 + 464),
                         *(_WORD *)(*(_QWORD *)(v6 + 464) + 110LL),
                         *(_WORD *)(*(_QWORD *)(v6 + 464) + 112LL)) )
    {
      RawInputManagerDeviceObjectReference(i - 2);
      *a2 = v5;
      break;
    }
  }
  RIMUnlockExclusive((__int64)&gObListLock);
}
