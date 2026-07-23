/*
 * XREFs of ?CheckSum@MBR@@QEAAKXZ @ 0x140147FA0
 * Callers:
 *     ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140147C68 (-ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?ReadPartitionTable@PC_RAW@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023B8F8 (-ReadPartitionTable@PC_RAW@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023BC60 (-WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MBR::CheckSum(const __m128i *this)
{
  __m128i v1; // xmm1
  __int64 v2; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm1

  v1 = 0LL;
  v2 = 32LL;
  do
  {
    v3 = _mm_loadu_si128(this++);
    v4 = _mm_add_epi32(v3, v1);
    v1 = v4;
    --v2;
  }
  while ( v2 );
  v5 = _mm_add_epi32(v4, _mm_srli_si128(v4, 8));
  return (unsigned int)-_mm_cvtsi128_si32(_mm_add_epi32(v5, _mm_srli_si128(v5, 4)));
}
