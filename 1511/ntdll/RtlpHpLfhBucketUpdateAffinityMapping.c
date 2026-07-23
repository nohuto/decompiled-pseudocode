/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x18004E8C0
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhOwnerInitialize @ 0x180053740 (RtlpHpLfhOwnerInitialize.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A4CB0 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

void __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, __int64 a2)
{
  char CurrentProcessorNumber; // al
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int64 v7; // r12
  unsigned __int8 v8; // bl
  unsigned __int8 *v9; // rcx
  unsigned __int8 *v10; // r10
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // r8d
  _BYTE *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  signed __int32 v21[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-88h]
  _BYTE v23[64]; // [rsp+30h] [rbp-78h] BYREF

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
  memset(v23, 0, sizeof(v23));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
  v9 = *(unsigned __int8 **)(a2 + 96);
  v10 = &v9[v7];
  if ( v8 != v9[v7] )
    goto LABEL_13;
  v11 = *(unsigned __int8 *)(a1 + 56);
  if ( *(_BYTE *)(a1 + 56) )
  {
    v12 = *(unsigned __int8 *)(a1 + 56);
    do
    {
      v13 = *v9++;
      ++v23[v13];
      --v12;
    }
    while ( v12 );
  }
  if ( v23[v8] == 1 )
    goto LABEL_13;
  v14 = (unsigned int)v8 + 1;
  v15 = v14;
  if ( (unsigned int)v14 < v11 )
  {
    v16 = &v23[(unsigned int)v14];
    do
    {
      if ( !*v16 )
        break;
      if ( *v16 < v23[v14] )
        v14 = v15;
      ++v15;
      ++v16;
    }
    while ( v15 < v11 );
  }
  if ( v23[v14] )
  {
    *v10 = v14;
    goto LABEL_13;
  }
  v17 = *(_DWORD *)(a2 + 88);
  if ( v17 < RtlpHpLfhContentionLimit )
  {
    *(_DWORD *)(a2 + 88) = v17 + 1;
LABEL_13:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
    return;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
  v22 = 0LL;
  v18 = *(_QWORD *)(a2 + 104);
  LOWORD(v22) = 2;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 8 * v14), 2LL, 0LL) )
  {
    v19 = ((__int64 (__fastcall *)(_QWORD, __int64))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 40)))(*(_QWORD *)a1, 56LL);
    v20 = v19;
    if ( v19 )
      RtlpHpLfhOwnerInitialize(v19, *(unsigned __int8 *)(a2 + 1), (unsigned int)v14);
    *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8 * v14) = v20;
    if ( v20 )
    {
      _InterlockedOr(v21, 0);
      *(_BYTE *)(a2 + 2) = v14 + 1;
      *(_BYTE *)(v7 + *(_QWORD *)(a2 + 96)) = v14;
      *(_DWORD *)(a2 + 88) = 0;
    }
  }
}
