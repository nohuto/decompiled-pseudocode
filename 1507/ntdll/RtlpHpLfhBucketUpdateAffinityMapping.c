/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x18006C540
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerInitialize @ 0x18006C990 (RtlpHpLfhOwnerInitialize.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800934F0 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // al
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int64 v7; // r12
  unsigned __int8 v8; // bl
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 *v12; // rcx
  unsigned __int8 *v13; // r10
  unsigned int v14; // edx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // r8d
  _BYTE *v19; // rcx
  unsigned int v20; // eax
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  signed __int32 v24[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+20h] [rbp-88h]
  _BYTE v26[64]; // [rsp+30h] [rbp-78h] BYREF

  CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
  v5 = *(unsigned __int8 *)(a1 + 56);
  v6 = CurrentProcessorNumber & 0x3F;
  if ( v6 >= v5 )
  {
    if ( v6 == v5 || (_BYTE)v5 == 1 )
      v6 = 0;
    else
      v6 = *(unsigned __int8 *)(v6 - v5 - 1 + *(_QWORD *)(a1 + 64));
  }
  v7 = v6;
  v8 = *(_BYTE *)(v6 + *(_QWORD *)(a2 + 96));
  memset(v26, 0, sizeof(v26));
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 80), v9, v10, v11);
  v12 = *(unsigned __int8 **)(a2 + 96);
  v13 = &v12[v7];
  if ( v8 != v12[v7] )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v14 = *(unsigned __int8 *)(a1 + 56);
  if ( *(_BYTE *)(a1 + 56) )
  {
    v15 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v16 = *v12++;
      ++v26[v16];
      --v15;
    }
    while ( v15 );
  }
  if ( v26[v8] == 1 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v17 = (unsigned int)v8 + 1;
  v18 = v17;
  if ( (unsigned int)v17 < v14 )
  {
    v19 = &v26[(unsigned int)v17];
    do
    {
      if ( !*v19 )
        break;
      if ( *v19 < v26[v17] )
        v17 = v18;
      ++v18;
      ++v19;
    }
    while ( v18 < v14 );
  }
  if ( v26[v17] )
  {
    *v13 = v17;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  v20 = *(_DWORD *)(a2 + 88);
  if ( v20 < RtlpHpLfhContentionLimit )
  {
    *(_DWORD *)(a2 + 88) = v20 + 1;
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  v25 = 0LL;
  v22 = *(_QWORD *)(a2 + 104);
  LOWORD(v25) = 2;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 8 * v17), 2LL, 0LL);
  if ( !result )
  {
    result = ((__int64 (__fastcall *)(_QWORD, __int64))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 40)))(*(_QWORD *)a1, 56LL);
    v23 = result;
    if ( result )
      result = RtlpHpLfhOwnerInitialize(result, *(unsigned __int8 *)(a2 + 1), (unsigned int)v17);
    *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8 * v17) = v23;
    if ( v23 )
    {
      _InterlockedOr(v24, 0);
      *(_BYTE *)(a2 + 2) = v17 + 1;
      result = *(_QWORD *)(a2 + 96);
      *(_BYTE *)(v7 + result) = v17;
      *(_DWORD *)(a2 + 88) = 0;
    }
  }
  return result;
}
