/*
 * XREFs of MiPrefetchVirtualMemory @ 0x1400BDB30
 * Callers:
 *     MiInPageSingleKernelStack @ 0x140094924 (MiInPageSingleKernelStack.c)
 *     MiPrefetchRestOfCluster @ 0x1400B05A4 (MiPrefetchRestOfCluster.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MmCopyMemory @ 0x1401E5000 (MmCopyMemory.c)
 *     MiPrefetchDriverPages @ 0x1404B0324 (MiPrefetchDriverPages.c)
 *     NtSetInformationVirtualMemory @ 0x1404D6C9C (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x1404D760C (MmPrefetchVirtualMemory.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x140023494 (MiPfCompletePrefetchIos.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     MiPfCoalesceAndIssueIOs @ 0x1400A8D54 (MiPfCoalesceAndIssueIOs.c)
 *     MiIsSessionMetadata @ 0x1400BDFE8 (MiIsSessionMetadata.c)
 *     MiAdvanceFaultList @ 0x1400BE040 (MiAdvanceFaultList.c)
 *     MiLeapPrefetch @ 0x1401E828C (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  int v6; // esi
  struct _KTHREAD *CurrentThread; // r13
  char v10; // r8
  int *v11; // r15
  _QWORD *v12; // rdx
  unsigned __int64 v13; // r10
  unsigned int v14; // r9d
  char *v15; // rdx
  ULONG_PTR *v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  int v24; // r11d
  int v25; // ecx
  int v26; // r8d
  __int64 *v27; // rdx
  __int64 *v28; // rax
  int v29; // eax
  int v30; // eax
  __int16 v31; // [rsp+20h] [rbp-60h] BYREF
  __int64 v32; // [rsp+28h] [rbp-58h]
  unsigned __int64 v33; // [rsp+30h] [rbp-50h]
  unsigned __int64 v34; // [rsp+38h] [rbp-48h]
  unsigned __int64 v35; // [rsp+40h] [rbp-40h]
  ULONG_PTR v36[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v37[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-18h] BYREF
  int v39; // [rsp+70h] [rbp-10h]
  int v40; // [rsp+B0h] [rbp+30h]

  v31 = 1;
  v36[1] = (ULONG_PTR)v36;
  v4 = 0;
  v32 = a2;
  v36[0] = (ULONG_PTR)v36;
  v33 = a1;
  v37[1] = (__int64)v37;
  v6 = 0;
  v34 = 0LL;
  v37[0] = (__int64)v37;
  v35 = 0LL;
  v38 = 0LL;
  v39 = a4;
  CurrentThread = KeGetCurrentThread();
  v40 = 0;
  if ( BYTE6(CurrentThread[1].Queue) >= 2u )
    return 3221225626LL;
  v11 = MiPartitionIdToPointer(WORD2(CurrentThread->ApcState.Process[1].InstrumentationCallback));
  BYTE6(CurrentThread[1].Queue) = v10 + 1;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  while ( v34 < v33 )
  {
    v12 = (_QWORD *)(a2 + 16 * v34);
    if ( v35 < (v12[1] + 4095LL + (unsigned __int64)(*(_DWORD *)v12 & 0xFFF)) >> 12 )
    {
      if ( !v12[1] )
      {
        v34 = v33;
        v35 = 0LL;
        break;
      }
      v13 = *v12 + (v35 << 12);
      if ( v13 < qword_140327FD0 || v13 > qword_140326D38 )
      {
        v14 = 0;
        v15 = (char *)&unk_140326DF8;
        while ( 1 )
        {
          v16 = (*(_BYTE *)(*(_QWORD *)v15 + 184LL) & 7) == 2
              ? &BugCheckParameter2
              : (ULONG_PTR *)(*(_QWORD *)(*(_QWORD *)v15 + 16LL) + 416LL);
          if ( v13 >= (v16[10] & 0xFFFFFFFFFFFFF000uLL) && v13 < ((v16[9] + 4095) & 0xFFFFFFFFFFFFF000uLL) )
            break;
          ++v14;
          v15 += 8;
          if ( v14 >= 3 )
          {
            if ( (unsigned int)MiIsSessionMetadata(v13, v15, v13) )
              break;
            if ( v18 >= v19 && v18 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
              if ( v18 >= v19 + 0x4000000000LL )
                break;
              do
              {
                if ( v17 > 0xFFFFF6FFFFFFFFFFuLL )
                  break;
                v17 = (__int64)((v17 << 25) - (v19 << 25)) >> 16;
              }
              while ( v17 >= v19 );
            }
            if ( v17 < qword_140326950 || v17 >= qword_140326950 + 0x8000000000LL )
            {
              if ( v17 < 0xFFFF800000000000uLL )
              {
                if ( a3 == 1 || (*(_BYTE *)(a3 + 184) & 7) != 0 )
                  break;
              }
              else if ( a3 != 1 )
              {
                break;
              }
            }
            else if ( a3 == 1 || (*(_BYTE *)(a3 + 184) & 7) != 1 )
            {
              break;
            }
            if ( (v39 & 0x80u) == 0 )
            {
              if ( *((_QWORD *)v11 + 808) < 0x120uLL )
                goto LABEL_72;
              v20 = *((_QWORD *)v11 + 917);
              v21 = *((_QWORD *)v11 + 901);
              if ( v21 > v20 || v20 - v21 < 0x1080 || *((__int64 *)v11 + 816) < 288 )
                goto LABEL_72;
            }
            v22 = v34;
            v23 = v35;
            v24 = MmAccessFault(0LL, v18, 0, (ULONG_PTR)&v31 + 1);
            switch ( HIBYTE(v31) )
            {
              case 2:
                if ( (v39 & 0x80u) == 0 )
                {
                  v4 = v40;
                  goto LABEL_72;
                }
                HIBYTE(v31) = 0;
                break;
              case 1:
                HIBYTE(v31) = 0;
                break;
              case 3:
                HIBYTE(v31) = 0;
                v34 = v22;
                v35 = v23;
                break;
              default:
                if ( v34 == v22 && v35 == v23 )
                  MiAdvanceFaultList(&v31);
                break;
            }
            if ( v24 >= 0 )
            {
              v4 = v40;
            }
            else
            {
              v4 = v24;
              v40 = v24;
              if ( v24 != -1073741819 || v34 == v33 || !(unsigned int)MiLeapPrefetch(&v31, 0LL) )
                goto LABEL_72;
            }
            if ( v38 >= 0x200000 )
              MiPfCoalesceAndIssueIOs(v37, (__int64)v36, &v38);
            if ( (v39 & 0x400) != 0 )
            {
              v25 = 0;
              v26 = 0;
              while ( 1 )
              {
                v27 = v37;
                if ( v26 )
                  v27 = (__int64 *)v36;
                v28 = (__int64 *)*v27;
                if ( (__int64 *)*v27 != v27 )
                  break;
LABEL_64:
                if ( (unsigned int)++v26 >= 2 )
                  goto LABEL_4;
              }
              while ( ++v25 != 4 )
              {
                v28 = (__int64 *)*v28;
                if ( v28 == v27 )
                  goto LABEL_64;
              }
              v29 = MiPfCompletePrefetchIos(v36, (__int64)v37, a3);
              if ( v29 < 0 && v6 >= 0 )
                v6 = v29;
              v38 = 0LL;
            }
            goto LABEL_4;
          }
        }
      }
    }
    MiAdvanceFaultList(&v31);
  }
LABEL_72:
  v30 = MiPfCompletePrefetchIos(v36, (__int64)v37, a3);
  if ( v30 >= 0 )
    goto LABEL_75;
  if ( v6 >= 0 )
  {
    v6 = v30;
LABEL_75:
    if ( v6 >= 0 && v4 < 0 && (v39 & 0x8000) != 0 )
      v6 = v4;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  --BYTE6(CurrentThread[1].Queue);
  return (unsigned int)v6;
}
