/*
 * XREFs of CcPurgeAndClearCacheSection @ 0x14006C3C0
 * Callers:
 *     CcSetFileSizesEx @ 0x140072FCC (CcSetFileSizesEx.c)
 * Callees:
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     MmFlushSection @ 0x1400220D8 (MmFlushSection.c)
 *     CcGetVirtualAddress @ 0x140032F40 (CcGetVirtualAddress.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14006AD1C (CcUpdateSharedCacheMapFlag.c)
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 *     CcPurgeCacheSection @ 0x1400724A0 (CcPurgeCacheSection.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400CDB94 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400CDBEC (CcReferenceSharedCacheMapFileObject.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall CcPurgeAndClearCacheSection(__int64 a1, LARGE_INTEGER *a2, __int64 a3)
{
  LARGE_INTEGER *v3; // rsi
  __int64 v5; // r13
  BOOLEAN v6; // bl
  __int64 result; // rax
  __int64 QuadPart; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rdx
  struct _KEVENT *v11; // rcx
  int v12; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-70h] BYREF
  PVOID Address; // [rsp+48h] [rbp-60h]
  volatile signed __int32 *v15; // [rsp+50h] [rbp-58h] BYREF
  int v16; // [rsp+58h] [rbp-50h]

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 152) & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 )
      return 3221226549LL;
    v3 = (LARGE_INTEGER *)((unsigned __int64)a2 ^ 1);
  }
  v5 = CcReferenceSharedCacheMapFileObject(a1, a2, a3);
  v13[1] = v5;
  if ( (v3->LowPart & 0xFFF) == 0 )
    goto LABEL_3;
  QuadPart = v3->QuadPart;
  v13[0] = v3->QuadPart;
  v3 = (LARGE_INTEGER *)v13;
  if ( *(_QWORD *)(a1 + 168) && *(_QWORD *)(a1 + 88) )
  {
    v9 = 4096 - (QuadPart & 0xFFF);
    Address = (PVOID)CcGetVirtualAddress(a1, QuadPart, &v15, &v12, 1, 0);
    memset(Address, 0, v9);
    if ( QuadPart > *(_QWORD *)(a1 + 48) )
    {
      MmSetAddressRangeModified(Address, 1uLL);
      CcUpdateSharedCacheMapFlag(a1, 0x20000, 1);
    }
    else
    {
      CcSetDirtyInMask(a1, v13, v9, 0LL);
    }
    v13[0] = v9 + QuadPart;
    v10 = *((_QWORD *)v15 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v15 + 4) )
    {
      v11 = *(struct _KEVENT **)(v10 + 184);
      if ( v11 )
        KeSetEvent(v11, 0, 0);
    }
    goto LABEL_3;
  }
  MmFlushSection(*(_QWORD *)(v5 + 40), (va_list)v13, 1LL);
  result = (unsigned int)v16;
  if ( v16 >= 0 )
  {
LABEL_3:
    v6 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v5 + 40), v3, 0, 0);
    CcDereferenceSharedCacheMapFileObject(a1, v5);
    return v6 == 0 ? 0xC0000435 : 0;
  }
  return result;
}
