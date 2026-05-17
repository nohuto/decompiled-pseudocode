/*
 * XREFs of RtlpHpVsChunkDecommit @ 0x180050CDC
 * Callers:
 *     RtlpHpVsChunkFree @ 0x180050C3C (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x18001DC8C (RtlpHpVsChunkComputeCost.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18002FC60 (RtlpHpVsSubsegmentCommitPages.c)
 */

__int64 __fastcall RtlpHpVsChunkDecommit(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v8; // r14d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r15
  char v11; // dl
  int v12; // r12d
  char *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v17; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-24h]
  unsigned __int64 v19[4]; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  RtlpHpVsChunkComputeCost(a3, a2, &v17, v19);
  if ( v17 && v19[0] )
  {
    v9 = *(_QWORD *)(a1 + 40) >> 7;
    v10 = (0x101010101010101LL
         * ((((v19[0] - ((v19[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v19[0] - ((v19[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v19[0] - ((v19[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v19[0] - ((v19[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( v9 <= 8 )
      v9 = 8LL;
    if ( *(_QWORD *)(a1 + 48) + (unsigned __int64)(unsigned int)v10 > v9 )
    {
      v8 = 1;
      v11 = RtlpLFHKey;
      v18 = v18 & 0xFF00FFFF | 0x10000;
      *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE2(v18) ^ BYTE6(RtlpLFHKey);
      *(_DWORD *)(a3 + 8) = (unsigned __int8)(a3 ^ v11 ^ ((unsigned int)(a3 - a2) >> 12)) | 0x200;
      v12 = a4 & 1;
      if ( !v12 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      RtlpHpVsSubsegmentCommitPages(a1, a2, v19[0], (unsigned int)v10, 0);
      if ( !v12 )
        RtlAcquireSRWLockExclusive(a1, v13, v14, v15);
      *(_DWORD *)(a3 + 8) &= ~0x200u;
    }
  }
  return v8;
}
