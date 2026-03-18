/*
 * XREFs of AlpcpPrepareViewForDelivery @ 0x14047BDF0
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x14047BCB0 (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1403F636C (MmUnsecureVirtualMemory.c)
 *     AlpcpUnlockBlob @ 0x140424050 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B7F8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpPrepareViewForDelivery(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v7; // rbp
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v11; // ecx
  _QWORD *v12; // rdi
  _DWORD *v13; // r14
  $D4FCF91253F76F57393CBFE908971F67 v14; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v7 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  v8 = *(_DWORD *)(v3 + 48);
  if ( (v8 & 1) == 0 )
  {
    if ( a2 )
    {
      if ( !*(_DWORD *)(BugCheckParameter2 + 76) )
      {
        v11 = *(_DWORD *)(v3 + 52);
        if ( v11 <= 2 )
        {
          if ( v11 == 1 )
          {
            *(_QWORD *)(v3 + 80) = BugCheckParameter2;
            *(_DWORD *)(v3 + 48) = v8 | 1;
          }
          else
          {
            v12 = *(_QWORD **)(v3 + 56);
            if ( v12 == (_QWORD *)BugCheckParameter2 )
              v12 = (_QWORD *)*v12;
            v13 = MmSecureVirtualMemoryAgainstWrites(
                    *(_KPROCESS **)(BugCheckParameter2 + 32),
                    *(_QWORD *)(BugCheckParameter2 + 40),
                    *(_QWORD *)(BugCheckParameter2 + 48));
            if ( v13 )
            {
              AlpcpReferenceBlob(BugCheckParameter2);
              *(_DWORD *)(BugCheckParameter2 + 72) &= ~1u;
              *(_QWORD *)(BugCheckParameter2 + 64) = v13;
              *(_DWORD *)(v3 + 48) |= 1u;
              *(_QWORD *)(v3 + 72) = BugCheckParameter2;
              *(_QWORD *)(v3 + 80) = v12;
            }
          }
        }
      }
    }
    goto LABEL_5;
  }
  if ( BugCheckParameter2 == *(_QWORD *)(v3 + 80) )
  {
    if ( !a2 )
    {
      v7 = *(_QWORD *)(v3 + 72);
      if ( v7 )
      {
        KiStackAttachProcess(*(_KPROCESS **)(v7 + 32), 0LL, (__int64)&v14);
        MmUnsecureVirtualMemory(*(HANDLE *)(v7 + 64));
        KiUnstackDetachProcess(&v14, 0LL);
        *(_DWORD *)(v7 + 72) |= 1u;
        *(_QWORD *)(v7 + 64) = 0LL;
        *(_QWORD *)(v3 + 72) = 0LL;
      }
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_DWORD *)(v3 + 48) &= ~1u;
      goto LABEL_5;
    }
    if ( !*(_DWORD *)(BugCheckParameter2 + 76) )
    {
LABEL_5:
      v9 = 0;
      ++*(_DWORD *)(BugCheckParameter2 + 76);
      goto LABEL_6;
    }
  }
  v9 = -1073741790;
LABEL_6:
  *(_DWORD *)(BugCheckParameter2 + 72) ^= (*(_DWORD *)(BugCheckParameter2 + 72) ^ (2 * a3)) & 2;
  AlpcpUnlockBlob(v3);
  if ( v7 )
    AlpcpDereferenceBlobEx(v7, 1);
  return v9;
}
