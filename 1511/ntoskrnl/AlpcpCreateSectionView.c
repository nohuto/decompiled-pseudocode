/*
 * XREFs of AlpcpCreateSectionView @ 0x14047D390
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x14044FC24 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x14047E500 (NtAlpcCreateSectionView.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x140424050 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateView @ 0x14047C210 (AlpcpCreateView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCreateRegion @ 0x14047D44C (AlpcpCreateRegion.c)
 */

__int64 __fastcall AlpcpCreateSectionView(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 *Object,
        __int64 a3,
        __int64 a4,
        _QWORD *BugCheckParameter2a)
{
  _QWORD *v5; // r14
  int Region; // ebx
  ULONG_PTR v9; // rbx
  int View; // edi

  v5 = BugCheckParameter2a;
  *BugCheckParameter2a = 0LL;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
  Region = AlpcpCreateRegion(BugCheckParameter2);
  AlpcpUnlockBlob(BugCheckParameter2);
  if ( Region < 0 )
    return (unsigned int)Region;
  v9 = (ULONG_PTR)BugCheckParameter2a;
  AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2a);
  View = AlpcpCreateView(v9, Object, (ULONG_PTR *)&BugCheckParameter2a);
  AlpcpUnlockBlob(v9);
  AlpcpDereferenceBlobEx(v9, 1);
  if ( View < 0 )
    return (unsigned int)View;
  *v5 = BugCheckParameter2a;
  return 0LL;
}
