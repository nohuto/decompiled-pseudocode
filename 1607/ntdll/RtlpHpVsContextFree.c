/*
 * XREFs of RtlpHpVsContextFree @ 0x18001CC30
 * Callers:
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegFree @ 0x18004C910 (RtlpHpSegFree.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001BC10 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsChunkCoalesce @ 0x18001BE30 (RtlpHpVsChunkCoalesce.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegLfhVsFree @ 0x18004C900 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x180052820 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18006E8B0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpVsContextFree(__int64 SRWLock, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned __int64 v5; // rdi
  int v7; // ebp
  __int64 v8; // rsi
  unsigned __int16 v9; // r14
  int v10; // r12d
  __int64 v11; // rbx
  unsigned int v12; // ebp
  unsigned __int64 v13; // rax
  unsigned int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned __int64 v17; // rbp
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  __int16 v23; // r10
  unsigned int v24; // edx
  unsigned __int64 v25; // r9
  BOOLEAN v26; // r8
  unsigned __int64 v27; // rax
  _RTL_BALANCED_NODE *v28; // rdx
  _RTL_BALANCED_NODE *v29; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  int v33; // r9d
  __int64 v34; // rax
  int v35; // ebx
  unsigned __int64 v36; // rcx
  void (__fastcall *v37)(unsigned __int64, __int64, _QWORD); // rax
  unsigned __int64 v38; // [rsp+30h] [rbp-48h]
  int v39; // [rsp+38h] [rbp-40h]
  unsigned int v40; // [rsp+88h] [rbp+10h] BYREF
  int v41; // [rsp+90h] [rbp+18h]
  unsigned int v42; // [rsp+98h] [rbp+20h]

  v42 = a4;
  v5 = a3 - 16;
  v7 = a3;
  v8 = a2;
  if ( (*(_WORD *)(a2 + 34) ^ 0xABED) == *(_WORD *)(a2 + 32) )
  {
    v9 = WORD1(RtlpLFHKey);
    v10 = a4 & 1;
    *a5 = 16 * (WORD1(RtlpLFHKey) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16;
    v41 = v10;
    if ( (a4 & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
      v9 = WORD1(RtlpLFHKey);
    }
    v11 = RtlpLFHKey;
    if ( ((HIDWORD(v5) ^ HIDWORD(RtlpLFHKey) ^ HIDWORD(*(_QWORD *)v5)) & 0xFF0000) != 0 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = RtlpHpVsChunkCoalesce(SRWLock, v8, v5, &v40);
        v5 = v13;
        if ( v40 == *(unsigned __int16 *)(v8 + 32) )
        {
          RtlpHpVsSubsegmentCleanup(SRWLock, v8);
          goto LABEL_21;
        }
        if ( v40 <= v12 )
          break;
        v14 = (v13 - v8 + 4127) & 0xFFFFF000;
        v15 = (v13 + 16 * (v9 ^ WORD1(v13) ^ *(unsigned __int16 *)(v13 + 2)) - v8) & 0xFFFFF000;
        if ( v14 < v15 )
        {
          v16 = v15 - v14;
          v17 = *(_QWORD *)(v8 + 16) & (-1LL << (v14 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                        - (unsigned __int8)((unsigned __int64)(v14 + v16 - 1) >> 12)));
        }
        else
        {
          v16 = 0;
          v17 = 0LL;
        }
        if ( (v16 & 0xFFFFF000) == 0 || !v17 )
          break;
        v31 = *(_QWORD *)(SRWLock + 40) >> 7;
        v32 = (0x101010101010101LL
             * ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        v39 = v32;
        if ( v31 <= 8 )
          v31 = 8LL;
        if ( *(_QWORD *)(SRWLock + 48) + (unsigned __int64)(unsigned int)v32 <= v31 )
          break;
        HIDWORD(v38) = HIDWORD(v38) & 0xFF00FFFF | 0x10000;
        v33 = v13 ^ v11 ^ ((unsigned int)(v13 - v8) >> 12);
        v34 = v11 ^ v38;
        v35 = v41;
        v38 = v5 ^ v34;
        *(_BYTE *)(v5 + 6) = (v5 ^ v34) >> 48;
        *(_DWORD *)(v5 + 8) = (unsigned __int8)v33 | 0x200;
        if ( !v35 )
        {
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
          LODWORD(v32) = v39;
        }
        RtlpHpVsSubsegmentCommitPages(SRWLock, v8, v17, v32, 0);
        if ( !v35 )
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
        *(_DWORD *)(v5 + 8) &= ~0x200u;
        v12 = v40;
        v11 = RtlpLFHKey;
        v9 = WORD1(RtlpLFHKey);
      }
      v18 = (v13 - v8 + 4127) & 0xFFFFF000;
      v19 = 16 * (v9 ^ WORD1(v13) ^ *(unsigned __int16 *)(v13 + 2));
      v20 = (v13 & 0xFFF) + v19 + 4095;
      v21 = (unsigned __int64)(v19 + 4095) >> 12;
      v22 = (v5 + v19 - v8) & 0xFFFFF000;
      v23 = (v20 >> 12) - v21;
      if ( v18 < v22 )
      {
        v24 = v22 - v18;
        v25 = *(_QWORD *)(v8 + 16) & (-1LL << (v18 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                      - (unsigned __int8)((unsigned __int64)(v18 + v24 - 1) >> 12)));
      }
      else
      {
        v24 = 0;
        v25 = 0LL;
      }
      v26 = 0;
      v27 = v25 - ((v25 >> 1) & 0x5555555555555555LL);
      *(_QWORD *)(SRWLock + 48) += (unsigned int)((0x101010101010101LL
                                                 * (((v27 & 0x3333333333333333LL)
                                                   + ((v27 >> 2) & 0x3333333333333333LL)
                                                   + (((v27 & 0x3333333333333333LL) + ((v27 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      *(_WORD *)v5 = v11 ^ v5 ^ (v23
                               + (v24 >> 12)
                               - ((0x101010101010101LL
                                 * (((v27 & 0x3333333333333333LL)
                                   + ((v27 >> 2) & 0x3333333333333333LL)
                                   + (((v27 & 0x3333333333333333LL) + ((v27 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
      v28 = *(_RTL_BALANCED_NODE **)(SRWLock + 8);
      if ( v28 )
      {
        while ( 1 )
        {
          if ( ((unsigned int)v5 ^ (unsigned int)v11 ^ *(_DWORD *)v5) < ((unsigned int)v11 ^ ((_DWORD)v28 - 8) ^ *(_DWORD *)&v28[-1].0) )
          {
            v29 = v28->Children[0];
            if ( !v28->Children[0] )
            {
              v26 = 0;
              break;
            }
          }
          else
          {
            v29 = v28->Children[1];
            if ( !v29 )
            {
              v26 = 1;
              break;
            }
          }
          v28 = v29;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(SRWLock + 8), v28, v26, (PRTL_BALANCED_NODE)(v5 + 8));
      v8 = 0LL;
LABEL_21:
      if ( !v41 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
      if ( v8 )
      {
        v36 = *(_QWORD *)(SRWLock + 56);
        v37 = (void (__fastcall *)(unsigned __int64, __int64, _QWORD))(SRWLock ^ RtlpHeapKey ^ *(_QWORD *)(SRWLock + 72));
        if ( (char *)v37 == (char *)RtlpHpSegLfhVsFree )
          RtlpHpSegLfhVsFree(v36, v8, v42);
        else
          v37(v36, v8, v42);
      }
      return 1LL;
    }
    else
    {
      RtlpLogHeapFailure(8, *(_QWORD *)(SRWLock + 56), v7, v5, 0LL, 0LL);
      if ( !v10 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
      return 0LL;
    }
  }
  else
  {
    RtlpLogHeapFailure(17, *(_QWORD *)(SRWLock + 56), a2, 0, 0LL, 0LL);
    return 0LL;
  }
}
