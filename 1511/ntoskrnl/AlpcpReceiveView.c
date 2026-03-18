/*
 * XREFs of AlpcpReceiveView @ 0x14047C0A8
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpExposeViewAttribute @ 0x1404ABC0C (AlpcpExposeViewAttribute.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1403F636C (MmUnsecureVirtualMemory.c)
 *     AlpcpUnlockBlob @ 0x140424050 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B7F8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpCreateView @ 0x14047C210 (AlpcpCreateView.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     AlpcpLocateView @ 0x14047CE20 (AlpcpLocateView.c)
 *     AlpcpDeleteView @ 0x14047CE3C (AlpcpDeleteView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpRestoreWriteAccess @ 0x1404AAD84 (AlpcpRestoreWriteAccess.c)
 */

__int64 __fastcall AlpcpReceiveView(PVOID Object, __int64 a2, _BYTE *a3)
{
  ULONG_PTR v3; // rdi
  int v7; // ebp
  ULONG_PTR i; // rsi
  ULONG_PTR View; // rax
  ULONG_PTR v10; // rbx
  _DWORD *v11; // rax
  _DWORD *v13; // rax
  ULONG_PTR v14; // [rsp+20h] [rbp-78h]
  $D4FCF91253F76F57393CBFE908971F67 v15; // [rsp+28h] [rbp-70h] BYREF

  v3 = *(_QWORD *)(a2 + 144);
  v7 = 0;
  for ( i = *(_QWORD *)(v3 + 16); ; AlpcpUnlockBlob(i) )
  {
    AlpcpLockForCachedReferenceBlob(i);
    View = AlpcpLocateView(i, Object);
    v14 = View;
    v10 = View;
    if ( !View || AlpcpReferenceBlob(View) > 0 )
      break;
  }
  if ( (*(_DWORD *)(i + 48) & 1) != 0 )
  {
    if ( v10 == *(_QWORD *)(i + 80) )
    {
LABEL_10:
      *(_DWORD *)(a2 + 40) |= 0x8000u;
      *(_QWORD *)(a2 + 144) = v10;
      ++*(_DWORD *)(v10 + 76);
      goto LABEL_11;
    }
    if ( v10 && v10 == *(_QWORD *)(i + 72) )
    {
      v13 = MmSecureVirtualMemoryAgainstWrites(*(_KPROCESS **)(v3 + 32), *(_QWORD *)(v3 + 40), *(_QWORD *)(v3 + 48));
      if ( v13 )
      {
        *(_DWORD *)(v3 + 72) &= ~1u;
        *(_QWORD *)(v3 + 64) = v13;
        AlpcpReferenceBlob(v3);
        KiStackAttachProcess(*(_KPROCESS **)(v10 + 32), 0LL, (__int64)&v15);
        MmUnsecureVirtualMemory(*(HANDLE *)(v10 + 64));
        KiUnstackDetachProcess(&v15, 0LL);
        *(_DWORD *)(v10 + 72) |= 1u;
        *(_QWORD *)(v10 + 64) = 0LL;
        *(_QWORD *)(i + 72) = v3;
        *(_QWORD *)(i + 80) = v10;
        AlpcpDereferenceBlobEx(v10, 1);
      }
      else
      {
        KiStackAttachProcess(*(_KPROCESS **)(v10 + 32), 0LL, (__int64)&v15);
        MmUnsecureVirtualMemory(*(HANDLE *)(v10 + 64));
        KiUnstackDetachProcess(&v15, 0LL);
        *(_DWORD *)(v10 + 72) |= 1u;
        *(_QWORD *)(v10 + 64) = 0LL;
        AlpcpDereferenceBlobEx(v10, 1);
        *(_QWORD *)(i + 72) = 0LL;
        *(_QWORD *)(i + 80) = 0LL;
        *(_DWORD *)(i + 48) &= ~1u;
      }
      goto LABEL_10;
    }
    v11 = MmSecureVirtualMemoryAgainstWrites(*(_KPROCESS **)(v3 + 32), *(_QWORD *)(v3 + 40), *(_QWORD *)(v3 + 48));
    if ( v11 )
    {
      *(_DWORD *)(v3 + 72) &= ~1u;
      *(_QWORD *)(v3 + 64) = v11;
      AlpcpReferenceBlob(v3);
      *(_QWORD *)(i + 80) = 0LL;
      *(_QWORD *)(i + 72) = v3;
      if ( v10 )
      {
        *(_QWORD *)(i + 80) = v10;
        goto LABEL_10;
      }
      v7 = AlpcpCreateView(i, Object);
      if ( v7 >= 0 )
        goto LABEL_9;
      AlpcpRestoreWriteAccess(v3);
      AlpcpDereferenceBlobEx(v3, 1);
      goto LABEL_26;
    }
    *(_QWORD *)(i + 72) = 0LL;
    *(_QWORD *)(i + 80) = 0LL;
    *(_DWORD *)(i + 48) &= ~1u;
  }
  else if ( v10 )
  {
    goto LABEL_10;
  }
  v7 = AlpcpCreateView(i, Object);
  if ( v7 >= 0 )
  {
LABEL_9:
    v10 = v14;
    goto LABEL_10;
  }
LABEL_26:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_11:
  --*(_DWORD *)(v3 + 76);
  if ( (*(_DWORD *)(v3 + 72) & 2) != 0 )
  {
    AlpcpDeleteView(v3);
    *(_DWORD *)(v3 + 72) &= ~2u;
  }
  *a3 = *(_BYTE *)(i + 48) & 1;
  AlpcpUnlockBlob(i);
  AlpcpDereferenceBlobEx(v3, 1);
  return (unsigned int)v7;
}
