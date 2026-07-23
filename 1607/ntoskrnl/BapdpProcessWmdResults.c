/*
 * XREFs of BapdpProcessWmdResults @ 0x1407A9520
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x1407A92C0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BapdpQueryData @ 0x1407A9868 (BapdpQueryData.c)
 *     BapdpRegisterWmdResult @ 0x1407D215C (BapdpRegisterWmdResult.c)
 */

void BapdpProcessWmdResults()
{
  unsigned __int64 v0; // rcx
  char *PoolWithTag; // rbx
  __int64 v2; // r14
  unsigned int v3; // edi
  unsigned int v4; // r15d
  unsigned __int64 v5; // rsi
  char v6; // r12
  int Data; // r8d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // xmm0_8
  _DWORD v11[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-30h]
  _DWORD v13[4]; // [rsp+50h] [rbp-20h] BYREF

  v13[0] = 1421354843;
  v13[1] = 1195365425;
  v13[2] = 921041836;
  v13[3] = -1550547808;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x10000uLL, 0x64506142u);
  if ( !PoolWithTag )
    return;
  v2 = *((_QWORD *)&v12 + 1);
  v3 = 0;
  v4 = 0;
  v11[0] = 0x10000;
  v5 = v12;
  v6 = 0;
  do
  {
    Data = BapdpQueryData(v0, v13, v3, PoolWithTag, v11);
    if ( Data < 0 )
      goto LABEL_4;
    if ( !v6 )
    {
      v6 = 1;
      v12 = *(_OWORD *)(PoolWithTag + 28);
LABEL_24:
      v5 = v12;
      v4 = v3;
      v2 = *((_QWORD *)&v12 + 1);
      goto LABEL_4;
    }
    v8 = *(_QWORD *)(PoolWithTag + 28);
    if ( (__int16)v8 > (__int16)v5
      || (__int16)v8 >= (__int16)v5
      && ((v0 = v8 >> 16, SWORD1(v8) > SWORD1(v5))
       || SWORD1(v8) >= SWORD1(v5)
       && ((v0 = HIDWORD(v8), SWORD2(v8) > SWORD2(v5))
        || SWORD2(v8) >= SWORD2(v5)
        && ((v9 = HIWORD(v8), v0 = HIWORD(v5), (__int16)v9 > SHIWORD(v5))
         || (__int16)v9 >= SHIWORD(v5)
         && ((v10 = _mm_srli_si128(*(__m128i *)(PoolWithTag + 28), 8).m128i_u64[0], v0 = v10, (__int16)v10 > (__int16)v2)
          || (__int16)v10 >= (__int16)v2
          && (SWORD1(v10) > SWORD1(v2) || SWORD1(v10) >= SWORD1(v2) && (v0 = HIDWORD(v10), SWORD2(v10) > SWORD2(v2))))))) )
    {
      v12 = *(_OWORD *)(PoolWithTag + 28);
      goto LABEL_24;
    }
LABEL_4:
    ++v3;
  }
  while ( Data >= 0 );
  if ( v6 == 1 && (v4 == v3 - 1 || (int)BapdpQueryData(v0, v13, v4, PoolWithTag, v11) >= 0) )
    BapdpRegisterWmdResult(PoolWithTag);
  ExFreePoolWithTag(PoolWithTag, 0);
}
