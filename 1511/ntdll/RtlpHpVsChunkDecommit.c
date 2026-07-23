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

__int64 __fastcall RtlpHpVsChunkDecommit(PRTL_SRWLOCK SRWLock, _RTL_SRWLOCK *a2, __int64 a3, char a4)
{
  unsigned int v8; // r14d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r15
  char v11; // dl
  int v12; // r12d
  unsigned int v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-24h]
  unsigned __int64 v16[4]; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  RtlpHpVsChunkComputeCost(a3, (__int64)a2, &v14, v16);
  if ( v14 && v16[0] )
  {
    v9 = SRWLock[5].Value >> 7;
    v10 = (0x101010101010101LL
         * ((((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( v9 <= 8 )
      v9 = 8LL;
    if ( SRWLock[6].Value + (unsigned int)v10 > v9 )
    {
      v8 = 1;
      v11 = RtlpLFHKey;
      v15 = v15 & 0xFF00FFFF | 0x10000;
      *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE2(v15) ^ BYTE6(RtlpLFHKey);
      *(_DWORD *)(a3 + 8) = (unsigned __int8)(a3 ^ v11 ^ ((unsigned int)(a3 - (_DWORD)a2) >> 12)) | 0x200;
      v12 = a4 & 1;
      if ( !v12 )
        RtlReleaseSRWLockExclusive(SRWLock);
      RtlpHpVsSubsegmentCommitPages((__int64)SRWLock, a2, v16[0], v10, 0);
      if ( !v12 )
        RtlAcquireSRWLockExclusive(SRWLock);
      *(_DWORD *)(a3 + 8) &= ~0x200u;
    }
  }
  return v8;
}
