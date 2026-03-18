/*
 * XREFs of CcPurgeAndClearCacheSection @ 0x140078F1C
 * Callers:
 *     CcSetFileSizesEx @ 0x140078B30 (CcSetFileSizesEx.c)
 * Callees:
 *     CcSetDirtyInMask @ 0x14002FE40 (CcSetDirtyInMask.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     CcGetVirtualAddress @ 0x1400501E0 (CcGetVirtualAddress.c)
 *     MmSetAddressRangeModified @ 0x14007C280 (MmSetAddressRangeModified.c)
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1400851D0 (CcUpdateSharedCacheMapFlag.c)
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall CcPurgeAndClearCacheSection(__int64 a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // r15
  int v4; // r9d
  ULONG_PTR v5; // r14
  BOOLEAN v6; // bl
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 result; // rax
  __int64 QuadPart; // rbx
  unsigned int v11; // r13d
  __int64 v12; // rdx
  struct _KEVENT *v13; // rcx
  __int64 v14; // r8
  int v15; // [rsp+30h] [rbp-78h] BYREF
  __int64 v16[2]; // [rsp+38h] [rbp-70h] BYREF
  PVOID Address; // [rsp+48h] [rbp-60h]
  volatile signed __int32 *v18; // [rsp+50h] [rbp-58h] BYREF
  int v19[20]; // [rsp+58h] [rbp-50h] BYREF

  v2 = a2;
  if ( (*(_DWORD *)(a1 + 152) & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 )
      return 3221226549LL;
    v2 = (LARGE_INTEGER *)((unsigned __int64)a2 ^ 1);
  }
  v5 = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !v5 )
    v5 = CcSlowReferenceSharedCacheMapFileObject(a1);
  v16[1] = v5;
  if ( (v2->LowPart & 0xFFF) != 0 )
  {
    QuadPart = v2->QuadPart;
    v16[0] = v2->QuadPart;
    v2 = (LARGE_INTEGER *)v16;
    if ( *(_QWORD *)(a1 + 168) && *(_QWORD *)(a1 + 88) )
    {
      v11 = 4096 - (QuadPart & 0xFFF);
      Address = (PVOID)CcGetVirtualAddress(a1, QuadPart, &v18, &v15, 1, 0);
      memset(Address, 0, v11);
      if ( QuadPart > *(_QWORD *)(a1 + 48) )
      {
        MmSetAddressRangeModified(Address, 1uLL);
        LOBYTE(v14) = 1;
        CcUpdateSharedCacheMapFlag(a1, 0x20000LL, v14);
      }
      else
      {
        CcSetDirtyInMask(a1, v16, v11, 0LL);
      }
      v16[0] = v11 + QuadPart;
      v12 = *((_QWORD *)v18 + 1);
      if ( !(unsigned __int16)_InterlockedDecrement(v18 + 4) )
      {
        v13 = *(struct _KEVENT **)(v12 + 184);
        if ( v13 )
          KeSetEvent(v13, 0, 0);
      }
    }
    else
    {
      MmFlushSection(*(_QWORD *)(v5 + 40), (unsigned int)v16, 1, v4, (__int64)v19, 0);
      result = (unsigned int)v19[0];
      if ( v19[0] < 0 )
        return result;
    }
  }
  v6 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v5 + 40), v2, 0, 0);
  _m_prefetchw((const void *)(a1 + 96));
  v7 = *(_QWORD *)(a1 + 96);
  while ( (v5 ^ v7) < 0xF )
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v7 + 1, v7);
    if ( v8 == v7 )
      return v6 == 0 ? 0xC0000435 : 0;
  }
  ObDereferenceObjectDeferDeleteWithTag((PVOID)v5, 0x746C6644u);
  return v6 == 0 ? 0xC0000435 : 0;
}
