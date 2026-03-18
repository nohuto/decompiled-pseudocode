/*
 * XREFs of VfIrpDatabaseCheckExFreePool @ 0x14074A9FC
 * Callers:
 *     VerifierExFreePoolWithTag @ 0x140736880 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockShared @ 0x14025B304 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14025B3B4 (ViIrpDatabaseReleaseLockShared.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViIrpDatabaseFindPointer @ 0x14074ADB4 (ViIrpDatabaseFindPointer.c)
 */

void __fastcall VfIrpDatabaseCheckExFreePool(ULONG_PTR a1)
{
  unsigned __int64 v2; // r8
  __m128i *v3; // rdx
  ULONG_PTR v4; // rcx
  unsigned __int64 v5; // xmm0_8
  __int64 Pointer; // rbx
  unsigned __int8 v7; // [rsp+48h] [rbp+10h] BYREF

  if ( !VfIrpDatabaseInitialized )
    return;
  v2 = a1 + 1;
  v3 = (__m128i *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (a1 >> 12)));
  v4 = v3->m128i_i64[0];
  v5 = _mm_srli_si128(*v3, 8).m128i_u64[0];
  if ( v3->m128i_i64[0] >= v5 )
    return;
  if ( a1 > v4 )
    goto LABEL_6;
  if ( v2 >= v5 )
    goto LABEL_9;
  if ( a1 >= v4 )
  {
LABEL_6:
    if ( a1 >= v5 )
      goto LABEL_7;
LABEL_9:
    ViIrpDatabaseAcquireLockShared(&v7);
    Pointer = ViIrpDatabaseFindPointer(a1);
    ViIrpDatabaseReleaseLockShared(v7);
    if ( Pointer )
      VerifierBugCheckIfAppropriate(0xC4u, 0x105uLL, a1, 0LL, 0LL);
    return;
  }
LABEL_7:
  if ( v2 > v4 && v2 <= v5 )
    goto LABEL_9;
}
