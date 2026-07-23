/*
 * XREFs of MiInitializeDynamicPfns @ 0x1401E1B1C
 * Callers:
 *     MiMapNewPfns @ 0x14065820C (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiAbortCombineScan @ 0x14001D390 (MiAbortCombineScan.c)
 *     MiUpdateLargePageBitMap @ 0x140022760 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeGenericCallDpc @ 0x14009EDE4 (KeGenericCallDpc.c)
 *     MiRestrictRangeToNode @ 0x14013BB78 (MiRestrictRangeToNode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

char __fastcall MiInitializeDynamicPfns(unsigned __int64 a1, unsigned __int64 a2, __int16 a3, int a4)
{
  unsigned __int64 v6; // r15
  int v7; // r14d
  char v8; // bl
  unsigned __int64 v9; // rdi
  KIRQL v10; // al
  unsigned __int64 v11; // r9
  char result; // al
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  int v16; // r14d
  unsigned __int8 v17; // si
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // xmm0
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  _OWORD v27[6]; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v28[3]; // [rsp+90h] [rbp-19h] BYREF
  __int16 v29; // [rsp+A8h] [rbp-1h]
  int i; // [rsp+ACh] [rbp+3h]

  v6 = a1;
  v7 = a4;
  memset(v27, 0, sizeof(v27));
  v8 = 5;
  v9 = 48 * a1 - 0x58000000000LL;
  if ( (a4 & 4) != 0 )
  {
    v8 = 6;
    v10 = ExAcquireSpinLockExclusive(&dword_140323668);
    qword_140324E10 += a2;
    ExReleaseSpinLockExclusive(&dword_140323668, v10);
  }
  if ( (v7 & 1) != 0 )
  {
    if ( (v7 & 4) != 0 )
      v7 |= 0x40u;
    v11 = a2 / (unsigned int)KeNumberProcessors_0;
    result = v11;
    if ( a2 % (unsigned int)KeNumberProcessors_0 )
      ++v11;
    v28[2] = v11;
    v29 = a3;
    for ( i = v7; a2; a2 -= v14 )
    {
      v13 = MiRestrictRangeToNode(v6, a2);
      v28[0] = v6;
      v28[1] = v13;
      v14 = v13;
      result = KeGenericCallDpc((__int64)MiInitializeDynamicPfnsTarget, (__int64)v28);
      v6 += v14;
    }
  }
  else
  {
    if ( (v7 & 2) == 0 )
      MiUpdateLargePageBitMap((__int64)MiSystemPartition, v6, a2, 0, 0);
    *((_QWORD *)&v27[4] + 1) |= 0x8000000000000000uLL;
    *((_QWORD *)&v27[1] + 1) |= 0x8000000000000000uLL;
    result = BYTE2(v27[2]) ^ (v8 ^ BYTE2(v27[2])) & 7;
    v15 = v9 + 48 * a2;
    BYTE2(v27[2]) = result;
    if ( v9 < v15 )
    {
      v16 = v7 & 0x10;
      do
      {
        v17 = MiLockPageInline(v9);
        v18 = v27[1];
        v19 = (unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8);
        v20 = *((_QWORD *)&v27[2] + 1);
        *(_OWORD *)v9 = v27[0];
        v21 = (v20 ^ (v19 << 40)) & 0x3FF0000000000LL;
        *((_QWORD *)&v27[2] + 1) = v21 ^ v20;
        v22 = v27[2];
        *(_OWORD *)(v9 + 16) = v18;
        *(_OWORD *)(v9 + 32) = v22;
        MiAbortCombineScan(v9, v21, v23, v24);
        if ( v16 )
        {
          v25 = v27[4];
          *(_OWORD *)v9 = v27[3];
          v26 = v27[5];
          *(_OWORD *)(v9 + 16) = v25;
          *(_OWORD *)(v9 + 32) = v26;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = v17;
        __writecr8(v17);
        v9 += 48LL;
      }
      while ( v9 < v15 );
    }
  }
  return result;
}
