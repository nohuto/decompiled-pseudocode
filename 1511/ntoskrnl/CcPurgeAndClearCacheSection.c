/*
 * XREFs of CcPurgeAndClearCacheSection @ 0x1400E7B9C
 * Callers:
 *     CcSetFileSizesEx @ 0x1400AED28 (CcSetFileSizesEx.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x14000D4AC (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14000D4E4 (CcReferenceSharedCacheMapFileObject.c)
 *     CcPurgeCacheSection @ 0x14000EA84 (CcPurgeCacheSection.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x1400A39E0 (CcGetVirtualAddress.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1400E7E70 (CcUpdateSharedCacheMapFlag.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall CcPurgeAndClearCacheSection(__int64 a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // rsi
  unsigned __int64 v4; // r13
  BOOLEAN v5; // bl
  __int64 result; // rax
  __int64 QuadPart; // rbx
  unsigned int v8; // r12d
  __int64 v9; // rdx
  struct _KEVENT *v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+30h] [rbp-78h] BYREF
  __int64 v13[2]; // [rsp+38h] [rbp-70h] BYREF
  PVOID Address; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h] BYREF
  int v16; // [rsp+58h] [rbp-50h]

  v2 = a2;
  if ( (*(_DWORD *)(a1 + 152) & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 )
      return 3221226549LL;
    v2 = (LARGE_INTEGER *)((unsigned __int64)a2 ^ 1);
  }
  v4 = CcReferenceSharedCacheMapFileObject(a1);
  v13[1] = v4;
  if ( (v2->LowPart & 0xFFF) == 0 )
    goto LABEL_3;
  QuadPart = v2->QuadPart;
  v13[0] = v2->QuadPart;
  v2 = (LARGE_INTEGER *)v13;
  if ( *(_QWORD *)(a1 + 168) && *(_QWORD *)(a1 + 88) )
  {
    v8 = 4096 - (QuadPart & 0xFFF);
    Address = (PVOID)CcGetVirtualAddress(a1, QuadPart, &v15, &v12, 1, 0);
    memset(Address, 0, v8);
    if ( QuadPart > *(_QWORD *)(a1 + 48) )
    {
      MmSetAddressRangeModified(Address, 1uLL);
      LOBYTE(v11) = 1;
      CcUpdateSharedCacheMapFlag(a1, 0x20000LL, v11);
    }
    else
    {
      CcSetDirtyInMask(a1, v13, v8, 0LL);
    }
    v13[0] = v8 + QuadPart;
    v9 = *(_QWORD *)(v15 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v15 + 16)) )
    {
      v10 = *(struct _KEVENT **)(v9 + 184);
      if ( v10 )
        KeSetEvent(v10, 0, 0);
    }
    goto LABEL_3;
  }
  MmFlushSection(*(_QWORD *)(v4 + 40), (va_list)v13, 1LL);
  result = (unsigned int)v16;
  if ( v16 >= 0 )
  {
LABEL_3:
    v5 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v4 + 40), v2, 0, 0);
    CcDereferenceSharedCacheMapFileObject(a1, v4);
    return v5 == 0 ? 0xC0000435 : 0;
  }
  return result;
}
