/*
 * XREFs of AlpcpCaptureViewAttributeInternal @ 0x14047BCB0
 * Callers:
 *     AlpcpCaptureViewAttribute @ 0x14047BC70 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureViewAttribute32 @ 0x1404BA210 (AlpcpCaptureViewAttribute32.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x140424050 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpPrepareViewForDelivery @ 0x14047BDF0 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpLocateSectionView @ 0x14047BECC (AlpcpLocateSectionView.c)
 *     AlpcReferenceBlobByHandle @ 0x14047CC20 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteView @ 0x14047CE3C (AlpcpDeleteView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpCaptureViewAttributeInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  ULONG_PTR v13; // rbp
  int v14; // esi
  ULONG_PTR v15; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)a2 & 0xFFF8FFFF) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a3 + 144);
  BugCheckParameter2 = v8;
  if ( v8 )
  {
    *(_QWORD *)(a3 + 144) = 0LL;
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v8 + 16));
    --*(_DWORD *)(v8 + 76);
    AlpcpUnlockBlob(*(_QWORD *)(v8 + 16));
    if ( (*(_DWORD *)a2 & 0x10000) != 0 )
      AlpcpDeleteView(v8);
    AlpcpDereferenceBlobEx(v8, 1);
  }
  *(_DWORD *)(a3 + 40) &= ~0x8000u;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !v9 )
    return 0LL;
  v10 = *(_QWORD *)(a2 + 16);
  if ( !v10 )
    return 3221225793LL;
  v11 = *(_QWORD *)(a1 + 16);
  if ( !v11 )
    return 3221225480LL;
  v13 = AlpcReferenceBlobByHandle(v11 + 40, v9, &AlpcSectionType);
  if ( !v13 )
    return 3221225480LL;
  v14 = AlpcpLocateSectionView(v12, a1, v10, &BugCheckParameter2);
  if ( v14 >= 0 )
  {
    v15 = BugCheckParameter2;
    v14 = AlpcpPrepareViewForDelivery(BugCheckParameter2);
    if ( v14 < 0 )
      AlpcpDereferenceBlobEx(v15, 1);
    else
      *(_QWORD *)(a4 + 40) = v15;
  }
  AlpcpDereferenceBlobEx(v13, 1);
  return (unsigned int)v14;
}
