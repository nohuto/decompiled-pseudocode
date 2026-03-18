/*
 * XREFs of MiScrubNode @ 0x1401E5DEC
 * Callers:
 *     MiScrubMemoryWorker @ 0x14062CEA4 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x1400BF370 (MiPfnsWorthTrying.c)
 *     MiEmptyKernelStackCache @ 0x1400C1C3C (MiEmptyKernelStackCache.c)
 *     MiMakePageBad @ 0x1401E5A10 (MiMakePageBad.c)
 *     MiScrubPage @ 0x1401E5FC4 (MiScrubPage.c)
 *     MiScrubNonPagedPool @ 0x1406250D4 (MiScrubNonPagedPool.c)
 *     MiScrubNodeLargePages @ 0x14062B008 (MiScrubNodeLargePages.c)
 */

__int64 __fastcall MiScrubNode(int *a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v3; // r15
  __int64 v6; // r8
  unsigned int *v7; // rbp
  __int64 v8; // rax
  ULONG_PTR v9; // r13
  ULONG_PTR v10; // r14
  __int64 v11; // rsi
  __int64 result; // rax
  __int16 v13; // cx
  int v14; // ebx
  unsigned __int8 v15; // [rsp+88h] [rbp+10h]
  int v16; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(unsigned int **)(a2 + 48);
  v3 = 0LL;
  v6 = *v2;
  v7 = &v2[4 * v6 + 4];
  if ( (_DWORD)v6 )
  {
    do
    {
      if ( *((unsigned __int8 *)v7 + 2 * v3) == *(_DWORD *)(a2 + 56) )
      {
        v8 = *(_QWORD *)(a2 + 48);
        v9 = *(_QWORD *)(v8 + 16LL * (unsigned int)v3 + 16);
        v10 = v9 + *(_QWORD *)(v8 + 16LL * (unsigned int)v3 + 24) - 1LL;
        v11 = 48 * v10 - 0x58000000000LL;
        while ( v10 >= v9 && v9 )
        {
          result = *(_QWORD *)(a2 + 32);
          if ( *(_DWORD *)(result + 4) )
            return result;
          v13 = *(_WORD *)a1;
          v16 = 0;
          if ( !MiPfnsWorthTrying(v13, v11, 1LL, 100663296, &v16, &v17) )
          {
            if ( v16 == 1 )
              MiEmptyKernelStackCache();
            if ( !MiClaimPhysicalRun(a1, v10, 1LL, a2, 0x6000000u, 0xFFFFFFFF, 0LL) )
            {
              v14 = MiScrubPage(a2, 0LL, v11);
              v15 = MiLockPageInline(v11);
              if ( v14 < 0 || (*(_BYTE *)(v11 + 35) & 0x40) != 0 )
                MiMakePageBad(v11, 1);
              else
                MiInsertPageInFreeOrZeroedList(v10, 2uLL);
              _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v15);
            }
          }
          --v10;
          v11 -= 48LL;
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < **(_DWORD **)(a2 + 48) );
  }
  if ( a1 == MiSystemPartition )
    MiScrubNonPagedPool(a2, *(unsigned int *)(a2 + 56), *(_QWORD *)(a2 + 32));
  return MiScrubNodeLargePages(a2, a1, *(unsigned int *)(a2 + 56), *(_QWORD *)(a2 + 32));
}
