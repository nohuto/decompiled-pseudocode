/*
 * XREFs of AlpcpCaptureViewAttributeInternal @ 0x140476E58
 * Callers:
 *     AlpcpCaptureViewAttribute @ 0x140476E18 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureViewAttribute32 @ 0x1405548DC (AlpcpCaptureViewAttribute32.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDeleteBlob @ 0x140475E64 (AlpcpDeleteBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x140476C20 (AlpcReferenceBlobByHandle.c)
 *     AlpcpPrepareViewForDelivery @ 0x140477090 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpLocateSectionView @ 0x14047721C (AlpcpLocateSectionView.c)
 */

__int64 __fastcall AlpcpCaptureViewAttributeInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  ULONG_PTR v7; // r14
  ULONG_PTR v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v13; // esi
  ULONG_PTR v14; // rdi
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // r8
  signed __int64 v18; // rcx
  ULONG_PTR v19; // rdi
  signed __int64 v20; // rax
  bool v21; // cc
  ULONG_PTR v22; // rax
  signed __int64 v23; // rax
  ULONG_PTR v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rcx
  ULONG_PTR v28; // rax
  ULONG_PTR v29; // rdi
  int v30; // r14d
  ULONG_PTR v31; // rsi
  signed __int64 v32; // rbx
  ULONG_PTR v33; // rbx
  signed __int64 v35; // rax
  ULONG_PTR v36; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+48h] BYREF
  __int64 v39; // [rsp+88h] [rbp+58h]

  v39 = a4;
  v6 = a1;
  if ( (*(_DWORD *)a2 & 0xFFF8FFFF) != 0 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a3 + 144);
  BugCheckParameter2 = v7;
  if ( v7 )
  {
    *(_QWORD *)(a3 + 144) = 0LL;
    v8 = *(_QWORD *)(v7 + 16);
    v9 = KeAbPreAcquire(v8 - 16, 0LL, 0LL, a4);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 - 16), v9, v8 - 16, v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    *(_BYTE *)(v8 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v8, 0x26uLL, BugCheckParameter4);
    v13 = 0;
    --*(_DWORD *)(BugCheckParameter2 + 76);
    v14 = *(_QWORD *)(v7 + 16);
    v15 = *(_BYTE *)(v14 - 32);
    if ( (v15 & 1) != 0 )
    {
      v13 = 0x10000 - *(__int16 *)(v14 - 30);
      *(_WORD *)(v14 - 30) = 0;
      *(_BYTE *)(v14 - 32) = v15 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
    KeAbPostRelease(v14 - 16);
    if ( v13 > 0 )
    {
      v18 = -v13 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v13);
      if ( v18 <= 0 )
      {
        if ( v18 )
          KeBugCheckEx(0x18u, 0LL, v14, 0x28uLL, v18);
        AlpcpDestroyBlob(v14);
      }
    }
    if ( (*(_DWORD *)a2 & 0x10000) != 0 )
    {
      v19 = BugCheckParameter2;
      if ( !AlpcpDeleteBlob(BugCheckParameter2, v16, v17, a4) )
      {
LABEL_18:
        v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 - 24), 0xFFFFFFFFFFFFFFFFuLL);
        v21 = v23 <= 1;
        v24 = v23 - 1;
        if ( v21 )
        {
          if ( v24 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v24);
          AlpcpDestroyBlob(BugCheckParameter2);
        }
        v6 = a1;
        goto LABEL_22;
      }
      v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v21 = v20 <= 1;
      v22 = v20 - 1;
      if ( v21 )
      {
        if ( v22 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v22);
        v19 = BugCheckParameter2;
        AlpcpDestroyBlob(BugCheckParameter2);
        goto LABEL_18;
      }
    }
    v19 = BugCheckParameter2;
    goto LABEL_18;
  }
LABEL_22:
  *(_DWORD *)(a3 + 40) &= ~0x8000u;
  v25 = *(_QWORD *)(a2 + 8);
  if ( !v25 )
    return 0LL;
  v26 = *(_QWORD *)(a2 + 16);
  if ( !v26 )
    return 3221225793LL;
  v27 = *(_QWORD *)(v6 + 16);
  if ( !v27 )
    return 3221225480LL;
  v28 = AlpcReferenceBlobByHandle((_QWORD *)(v27 + 40), v25, AlpcSectionType, a4);
  v29 = v28;
  if ( !v28 )
    return 3221225480LL;
  v30 = AlpcpLocateSectionView(v28, v6, v26, &BugCheckParameter2);
  if ( v30 >= 0 )
  {
    v31 = BugCheckParameter2;
    v30 = AlpcpPrepareViewForDelivery(BugCheckParameter2);
    if ( v30 < 0 )
    {
      v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v21 = v35 <= 1;
      v36 = v35 - 1;
      if ( v21 )
      {
        if ( v36 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v36);
        AlpcpDestroyBlob(BugCheckParameter2);
      }
    }
    else
    {
      *(_QWORD *)(v39 + 40) = v31;
    }
  }
  v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 - 24), 0xFFFFFFFFFFFFFFFFuLL);
  v21 = v32 <= 1;
  v33 = v32 - 1;
  if ( v21 )
  {
    if ( v33 )
      KeBugCheckEx(0x18u, 0LL, v29, 0x21uLL, v33);
    AlpcpDestroyBlob(v29);
  }
  return (unsigned int)v30;
}
