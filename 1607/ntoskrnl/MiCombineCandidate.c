/*
 * XREFs of MiCombineCandidate @ 0x1401F7CA4
 * Callers:
 *     MiCapturePfnVm @ 0x1401F7B64 (MiCapturePfnVm.c)
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiCrcStillIntact @ 0x1401F9300 (MiCrcStillIntact.c)
 *     MiMapArbitraryPage @ 0x1401F9E68 (MiMapArbitraryPage.c)
 *     MiRecheckCombineVm @ 0x1401FA06C (MiRecheckCombineVm.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MI_IS_RESET_PTE @ 0x14001E930 (MI_IS_RESET_PTE.c)
 *     MiIsPfnCommitNotCharged @ 0x14004ECC0 (MiIsPfnCommitNotCharged.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiIsSessionMetadata @ 0x1400BDFE8 (MiIsSessionMetadata.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     MiValidCombineProtection @ 0x1401FB41C (MiValidCombineProtection.c)
 */

__int64 __fastcall MiCombineCandidate(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  __m128i v3; // xmm0
  unsigned __int64 v4; // xmm3_8
  int *v5; // rax
  unsigned __int64 v6; // r8
  int **v7; // r9
  __int64 v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __m128i v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  __m128i v16; // [rsp+40h] [rbp-10h]

  v2 = *(_OWORD *)(a2 + 16);
  v14 = *(__m128i *)a2;
  v3 = *(__m128i *)(a2 + 32);
  v4 = _mm_srli_si128(v14, 8).m128i_u64[0];
  v15 = v2;
  v16 = v3;
  v5 = MiPartitionIdToPointer(*(__int16 *)((_BYTE *)&_mm_srli_si128(v3, 8).m128i_i16[2] + 1) & 0x3FF);
  if ( v5 != *v7 && v7 != (int **)&unk_140326E58 )
    return 0LL;
  if ( (v6 & 0x200000000000000LL) != 0 )
    return 0LL;
  if ( !v14.m128i_i64[0] )
    return 0LL;
  if ( (v16.m128i_i8[3] & 8) != 0 )
    return 0LL;
  if ( v4 < 0xFFFFF68000000000uLL )
    return 0LL;
  if ( v4 > 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( (*((_QWORD *)&v15 + 1) & 0x4000000000000000LL) != 0 )
    return 0LL;
  if ( ((v6 >> 54) & 7) == 4 )
    return 0LL;
  if ( (unsigned int)MiIsPfnCommitNotCharged((__int64)&v14) )
    return 0LL;
  v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15);
  LOBYTE(v9) = MiInvalidPteConforms(v8);
  if ( !v9
    || !(unsigned int)MiValidCombineProtection((v10 >> 5) & 0x1F)
    || (unsigned int)MiGetPagePrivilege((__int64)&v14, 0, 0LL) )
  {
    return 0LL;
  }
  v11 = (__int64)(v4 << 25) >> 16;
  if ( v4 > 0xFFFFF6BFFFFFFF78uLL )
  {
    if ( v11 < qword_140327F70 || v11 >= qword_140327F70 + 0xF8000000000LL )
    {
      if ( v11 < qword_140326950 || v11 >= qword_140326950 + 0x8000000000LL || MiIsSessionMetadata(v11) )
        return 0LL;
      v12 = 3LL;
    }
    else
    {
      v12 = 2LL;
    }
  }
  else
  {
    v12 = 1LL;
  }
  if ( ((unsigned __int8)((v16.m128i_i8[2] & 7) - 2) <= 1u && !v16.m128i_i16[0]
     || (v16.m128i_i8[2] & 7) == 6
     && (v16.m128i_i64[1] & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
     && v16.m128i_i16[0] == 1
     && (*((_QWORD *)&v15 + 1) & 0x3FFFFFFFFFFFFFFFLL) == 1)
    && ((_DWORD)v12 != 1 || !MI_IS_RESET_PTE(v8, v12, v16.m128i_u16[0])) )
  {
    return (unsigned int)v12;
  }
  return 0LL;
}
