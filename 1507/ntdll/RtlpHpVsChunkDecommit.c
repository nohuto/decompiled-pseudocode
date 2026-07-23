/*
 * XREFs of RtlpHpVsChunkDecommit @ 0x1800277E4
 * Callers:
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x180036DB0 (RtlpHpVsSubsegmentCommitPages.c)
 */

__int64 __fastcall RtlpHpVsChunkDecommit(PRTL_SRWLOCK SRWLock, __int64 a2, __int64 a3, char a4)
{
  unsigned int v5; // r11d
  int v6; // ebp
  unsigned int v7; // r15d
  unsigned int v8; // r10d
  unsigned int v9; // r8d
  unsigned int v11; // r10d
  unsigned int v12; // r10d
  unsigned __int64 v13; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  int v17; // eax
  int v18; // r12d
  int v19; // [rsp+6Ch] [rbp+14h]

  v5 = a3 - a2;
  v6 = a2;
  v7 = 0;
  v8 = WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  v9 = (a3 - a2 + 4127) & 0xFFFFF000;
  v11 = (a3 + 16 * (WORD1(RtlpLFHKey) ^ v8) - a2) & 0xFFFFF000;
  if ( v9 < v11 )
  {
    v12 = v11 - v9;
    v13 = *(_QWORD *)(a2 + 16) & (-1LL << (v9 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v12 + v9 - 1) >> 12)));
  }
  else
  {
    v12 = 0;
    v13 = 0LL;
  }
  if ( (v12 & 0xFFFFF000) != 0 && v13 )
  {
    v15 = SRWLock[5].Value >> 7;
    v16 = (0x101010101010101LL
         * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( v15 <= 8 )
      v15 = 8LL;
    if ( SRWLock[6].Value + (unsigned int)v16 > v15 )
    {
      v7 = 1;
      v17 = (unsigned __int8)(a3 ^ RtlpLFHKey ^ (v5 >> 12)) | 0x200;
      *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpLFHKey) ^ ((v19 & 0xFF00FFFF | 0x10000) >> 16);
      *(_DWORD *)(a3 + 8) = v17;
      v18 = a4 & 1;
      if ( (a4 & 1) == 0 )
        RtlReleaseSRWLockExclusive(SRWLock);
      RtlpHpVsSubsegmentCommitPages((_DWORD)SRWLock, v6, v13, v16, 0);
      if ( !v18 )
        RtlAcquireSRWLockExclusive(SRWLock);
      *(_DWORD *)(a3 + 8) &= ~0x200u;
    }
  }
  return v7;
}
