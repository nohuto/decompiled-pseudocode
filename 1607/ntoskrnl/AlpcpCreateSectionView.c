/*
 * XREFs of AlpcpCreateSectionView @ 0x140409C78
 * Callers:
 *     NtAlpcCreateSectionView @ 0x140409A7C (NtAlpcCreateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x1404724E8 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     AlpcpCreateRegion @ 0x140409D34 (AlpcpCreateRegion.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040B470 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040C274 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateView @ 0x14040D220 (AlpcpCreateView.c)
 *     AlpcpUnlockBlob @ 0x14050E530 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpCreateSectionView(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *BugCheckParameter2a)
{
  int Region; // ebx
  int View; // edi

  *BugCheckParameter2a = 0LL;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
  Region = AlpcpCreateRegion(BugCheckParameter2);
  AlpcpUnlockBlob(BugCheckParameter2);
  if ( Region < 0 )
    return (unsigned int)Region;
  AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2a);
  View = AlpcpCreateView((ULONG_PTR)BugCheckParameter2a, a2);
  AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2a);
  AlpcpDereferenceBlobEx((ULONG_PTR)BugCheckParameter2a);
  if ( View < 0 )
    return (unsigned int)View;
  *BugCheckParameter2a = BugCheckParameter2a;
  return 0LL;
}
