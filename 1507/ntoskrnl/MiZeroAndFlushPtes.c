/*
 * XREFs of MiZeroAndFlushPtes @ 0x140115540
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MmUnmapIoSpace @ 0x1401153C0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __fastcall MiZeroAndFlushPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // r11
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r9
  __int64 PteShadow; // rax
  __int64 Process; // rcx
  unsigned int v9; // r14d
  __int64 v10; // r15
  unsigned __int64 v11; // r13
  char *v12; // r12
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r9
  _QWORD *v18; // rsi
  __int64 v19; // r14
  char *v20; // r12
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r9
  _QWORD *v29; // rdi
  __int64 v30; // r14
  __int64 v31; // r9
  __int64 v32; // rdi
  _QWORD *v33; // rbx
  unsigned __int64 v34; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D8h]
  int v36; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v37; // [rsp+3Ch] [rbp-CCh]
  __int64 v38; // [rsp+40h] [rbp-C8h]
  __int64 v39; // [rsp+48h] [rbp-C0h]
  __int64 v40; // [rsp+50h] [rbp-B8h]
  _QWORD v41[32]; // [rsp+F8h] [rbp-10h] BYREF

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0x90482413000LL;
  v4 = 2040LL;
  v5 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v6 = a2;
  PteShadow = *(_QWORD *)v5;
  Process = v5 + 0x90482413000LL;
  if ( v5 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(v5, *(_QWORD *)v5);
  if ( PteShadow )
  {
    v38 = 20LL;
    v9 = 0;
    v36 = 0;
    v10 = v6;
    v37 = 0;
    v39 = 0LL;
    v40 = 0LL;
    if ( (PteShadow & 0x80u) != 0LL )
    {
      v10 = v6 & 0x1FF;
      v35 = v10;
      v11 = v5 + 8 * (v6 >> 9);
      if ( v5 < v11 )
      {
        v12 = (char *)&v34 + v3;
        v13 = v5 + v3;
        do
        {
          v14 = *(_QWORD *)v5;
          if ( v13 <= v4 )
            v14 = MiReadPteShadow(v5, *(_QWORD *)v5);
          v34 = v14;
          if ( (unsigned __int64)v12 <= v4 )
            v14 = MiReadPteShadow(&v34, v14);
          v15 = (v14 >> 12) & 0xFFFFFFFFFLL;
          *(_QWORD *)v5 = 0LL;
          if ( v13 <= v4 )
            MiWritePteShadow(v5, 0LL);
          MiInsertTbFlushEntry((__int64)&v36, (__int64)(v5 << 25) >> 16 << 25 >> 16, 1LL, 1);
          if ( !MI_IS_PFN(v15) )
          {
            if ( v9 && (Process = 2LL * (v9 - 1), v16 = v41[2 * v9 - 1], v16 == v15) )
            {
              v41[2 * v9 - 1] = v16 + 512;
            }
            else
            {
              Process = 2LL * v9++;
              v41[Process] = v15;
              v41[Process + 1] = v15 + 512;
              if ( v9 == 16 )
              {
                MiFlushTbList((__int64)&v36);
                v18 = v41;
                v19 = 16LL;
                do
                {
                  MiDereferenceIoPages(1LL, *v18, v18[1] - *v18, v17);
                  v18 += 2;
                  --v19;
                }
                while ( v19 );
                v9 = 0;
              }
            }
          }
          v5 += 8LL;
          v13 += 8LL;
          v4 = 2040LL;
        }
        while ( v5 < v11 );
        v10 = v35;
        v3 = 0x90482413000LL;
      }
      v2 = (__int64)(v5 << 25) >> 16;
    }
    if ( v10 )
    {
      v20 = (char *)&v34 + v3;
      do
      {
        v21 = *(_QWORD *)v2;
        v22 = v2 + v3;
        if ( v2 + v3 <= v4
          && (unsigned int)MiPteHasShadow(Process, a2)
          && (v21 & 1) != 0
          && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          a2 = *(_QWORD *)(Process + 1520);
          if ( a2 )
          {
            v23 = *(_QWORD *)(a2 + 8 * ((v2 >> 3) & 0x1FF));
            if ( (v23 & 0x20) != 0 )
              v21 |= 0x20uLL;
            if ( (v23 & 0x42) != 0 )
              v21 |= 0x42uLL;
          }
        }
        v34 = v21;
        if ( (unsigned __int64)v20 <= v4
          && (unsigned int)MiPteHasShadow(Process, a2)
          && (v21 & 1) != 0
          && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
        {
          v24 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v24 )
          {
            v25 = *(_QWORD *)(v24 + 8 * (((unsigned __int64)&v34 >> 3) & 0x1FF));
            if ( (v25 & 0x20) != 0 )
              v21 |= 0x20uLL;
            if ( (v25 & 0x42) != 0 )
              v21 |= 0x42uLL;
          }
        }
        v26 = (v21 >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)v2 = 0LL;
        if ( v22 <= v4 )
          MiWritePteShadow(v2, 0LL);
        MiInsertTbFlushEntry((__int64)&v36, (__int64)(v2 << 25) >> 16, 1LL, 0);
        if ( !MI_IS_PFN(v26) )
        {
          if ( v9 && (Process = 2LL * (v9 - 1), v27 = v41[2 * v9 - 1], v27 == v26) )
          {
            v41[2 * v9 - 1] = v27 + 1;
          }
          else
          {
            Process = 2LL * v9++;
            v41[Process] = v26;
            v41[Process + 1] = v26 + 1;
            if ( v9 == 16 )
            {
              MiFlushTbList((__int64)&v36);
              v29 = v41;
              v30 = 16LL;
              do
              {
                MiDereferenceIoPages(1LL, *v29, v29[1] - *v29, v28);
                v29 += 2;
                --v30;
              }
              while ( v30 );
              v9 = 0;
            }
          }
        }
        v2 += 8LL;
        v4 = 2040LL;
        v3 = 0x90482413000LL;
        --v10;
      }
      while ( v10 );
    }
    MiFlushTbList((__int64)&v36);
    v32 = v9;
    if ( v9 )
    {
      v33 = v41;
      do
      {
        MiDereferenceIoPages(1LL, *v33, v33[1] - *v33, v31);
        v33 += 2;
        --v32;
      }
      while ( v32 );
    }
  }
}
