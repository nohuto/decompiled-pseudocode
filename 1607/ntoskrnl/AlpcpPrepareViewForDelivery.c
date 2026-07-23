/*
 * XREFs of AlpcpPrepareViewForDelivery @ 0x14040A858
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x14040A720 (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x14040AC0C (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14040B548 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmUnsecureVirtualMemory @ 0x1404294AC (MmUnsecureVirtualMemory.c)
 *     AlpcpUnlockBlob @ 0x1404F14C0 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpPrepareViewForDelivery(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v7; // rbp
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  _QWORD *v12; // rdi
  __int64 v13; // r14
  _BYTE v14[48]; // [rsp+20h] [rbp-58h] BYREF

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
        v9 = *(_DWORD *)(v3 + 52);
        if ( v9 <= 2 )
        {
          if ( v9 == 1 )
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
                    *(_QWORD *)(BugCheckParameter2 + 32),
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
    goto LABEL_7;
  }
  if ( BugCheckParameter2 == *(_QWORD *)(v3 + 80) )
  {
    if ( !a2 )
    {
      v7 = *(_QWORD *)(v3 + 72);
      if ( v7 )
      {
        KiStackAttachProcess(*(_KPROCESS **)(v7 + 32), 0, (__int64)v14);
        MmUnsecureVirtualMemory(*(HANDLE *)(v7 + 64));
        KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
        *(_DWORD *)(v7 + 72) |= 1u;
        *(_QWORD *)(v7 + 64) = 0LL;
        *(_QWORD *)(v3 + 72) = 0LL;
      }
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_DWORD *)(v3 + 48) &= ~1u;
      goto LABEL_7;
    }
    if ( !*(_DWORD *)(BugCheckParameter2 + 76) )
    {
LABEL_7:
      v10 = 0;
      ++*(_DWORD *)(BugCheckParameter2 + 76);
      goto LABEL_8;
    }
  }
  v10 = -1073741790;
LABEL_8:
  *(_DWORD *)(BugCheckParameter2 + 72) ^= (*(_DWORD *)(BugCheckParameter2 + 72) ^ (2 * a3)) & 2;
  AlpcpUnlockBlob(v3);
  if ( v7 )
    AlpcpDereferenceBlobEx(v7);
  return v10;
}
