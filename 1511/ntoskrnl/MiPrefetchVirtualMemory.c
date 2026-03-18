/*
 * XREFs of MiPrefetchVirtualMemory @ 0x140011F20
 * Callers:
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiInPageSingleKernelStack @ 0x1400DE754 (MiInPageSingleKernelStack.c)
 *     MiPrefetchRestOfCluster @ 0x1400F093C (MiPrefetchRestOfCluster.c)
 *     MmCopyMemory @ 0x1401D45A8 (MmCopyMemory.c)
 *     NtSetInformationVirtualMemory @ 0x1403CA6EC (NtSetInformationVirtualMemory.c)
 *     MiPrefetchDriverPages @ 0x1404A9194 (MiPrefetchDriverPages.c)
 *     MmPrefetchVirtualMemory @ 0x1404B70E8 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x1400387EC (MiPfCompletePrefetchIos.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiAdvanceFaultList @ 0x1400AD868 (MiAdvanceFaultList.c)
 *     MiPfCoalesceAndIssueIOs @ 0x1400EB720 (MiPfCoalesceAndIssueIOs.c)
 *     MiLeapPrefetch @ 0x1401161B8 (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  int v6; // esi
  struct _KTHREAD *CurrentThread; // r13
  char v10; // r8
  _QWORD *v11; // r15
  unsigned __int64 v12; // r11
  _QWORD *v13; // rdx
  ULONG_PTR v14; // r10
  unsigned __int64 v15; // rcx
  unsigned int v16; // r8d
  ULONG_PTR *v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  int v26; // ecx
  int v27; // r8d
  _QWORD **v28; // rdx
  _QWORD *v29; // rax
  int v30; // eax
  int v31; // eax
  __int16 v32; // [rsp+20h] [rbp-60h] BYREF
  __int64 v33; // [rsp+28h] [rbp-58h]
  unsigned __int64 v34; // [rsp+30h] [rbp-50h]
  unsigned __int64 v35; // [rsp+38h] [rbp-48h]
  unsigned __int64 v36; // [rsp+40h] [rbp-40h]
  _QWORD v37[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v38[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-18h] BYREF
  int v40; // [rsp+70h] [rbp-10h]
  int v41; // [rsp+B0h] [rbp+30h]

  v32 = 1;
  v37[1] = v37;
  v4 = 0;
  v33 = a2;
  v37[0] = v37;
  v34 = a1;
  v38[1] = v38;
  v6 = 0;
  v35 = 0LL;
  v38[0] = v38;
  v36 = 0LL;
  v39 = 0LL;
  v40 = a4;
  CurrentThread = KeGetCurrentThread();
  v41 = 0;
  if ( BYTE2(CurrentThread[1].Teb) >= 2u )
    return 3221225626LL;
  v11 = (_QWORD *)MiPartitionIdToPointer(LOWORD(CurrentThread->ApcState.Process[2].Header.SignalState));
  BYTE2(CurrentThread[1].Teb) = v10 + 1;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v12 = 0xFFFFF68000000000uLL;
LABEL_5:
  while ( v35 < v34 )
  {
    v13 = (_QWORD *)(a2 + 16 * v35);
    if ( v36 < (v13[1] + 4095LL + (unsigned __int64)(*(_DWORD *)v13 & 0xFFF)) >> 12 )
    {
      if ( !v13[1] )
      {
        v35 = v34;
        v36 = 0LL;
        break;
      }
      v14 = *v13 + (v36 << 12);
      v15 = v14;
      if ( v14 + 0xA8000000000LL > 0xFFFFFFFFFFLL )
      {
        v16 = 0;
        v17 = &BugCheckParameter2;
        while ( v14 < *v17 || v14 >= ((*(_QWORD *)(*v17 + 104) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v16;
          v17 += 32;
          if ( v16 >= 3 )
          {
            if ( v14 >= (unsigned __int64)xmmword_1402FE630 && v14 < ((qword_1402FE640 + 4095) & 0xFFFFFFFFFFFFF000uLL) )
              break;
            if ( v14 + 0x98000000000LL <= 0x7FFFFFFFFFLL )
            {
              if ( v14 >= 0xFFFFF6C000000000uLL )
                break;
              do
              {
                if ( v15 > 0xFFFFF6FFFFFFFFFFuLL )
                  break;
                v15 = (__int64)(v15 << 25) >> 16;
              }
              while ( v15 >= v12 );
            }
            if ( v15 + 0x70000000000LL > 0x7FFFFFFFFFLL )
            {
              if ( v15 < 0xFFFF800000000000uLL )
              {
                if ( a3 == 1 || (*(_BYTE *)(a3 + 216) & 7) != 0 )
                  break;
              }
              else if ( a3 != 1 )
              {
                break;
              }
            }
            else if ( a3 == 1 || (*(_BYTE *)(a3 + 216) & 7) != 1 )
            {
              break;
            }
            if ( (v40 & 0x80u) == 0 )
            {
              if ( v11[736] < 0x120uLL )
                goto LABEL_72;
              v18 = v11[765];
              v19 = v11[745];
              if ( v19 > v18 || v18 - v19 < 0x1080 || (__int64)v11[744] < 288 )
                goto LABEL_72;
            }
            v20 = v35;
            v21 = v36;
            v22 = MmAccessFault(0LL, v14);
            switch ( HIBYTE(v32) )
            {
              case 2:
                if ( (v40 & 0x80u) == 0 )
                {
                  v4 = v41;
                  goto LABEL_72;
                }
                HIBYTE(v32) = 0;
                break;
              case 1:
                HIBYTE(v32) = 0;
                break;
              case 3:
                HIBYTE(v32) = 0;
                v35 = v20;
                v36 = v21;
                break;
              default:
                if ( v35 == v20 && v36 == v21 )
                {
                  v23 = *(_DWORD *)(v33 + 16 * v35) & 0xFFF;
                  v24 = *(_QWORD *)(v33 + 16 * v35 + 8) + 4095LL;
                  if ( ++v36 == (unsigned __int64)(v23 + v24) >> 12 )
                  {
                    v25 = v35 + 1;
                    v35 = v25;
                    v36 = 0LL;
                    if ( v25 < v34 )
                    {
                      if ( !*(_QWORD *)(v33 + 16 * v25 + 8) )
                        v25 = v34;
                      v35 = v25;
                    }
                  }
                }
                break;
            }
            if ( v22 >= 0 )
            {
              v4 = v41;
            }
            else
            {
              v4 = v22;
              v41 = v22;
              if ( v22 != -1073741819 || v35 == v34 || !(unsigned int)MiLeapPrefetch(&v32, 0LL) )
                goto LABEL_72;
            }
            if ( v39 >= 0x200000 )
              MiPfCoalesceAndIssueIOs(v38, v37, &v39);
            v12 = 0xFFFFF68000000000uLL;
            if ( (v40 & 0x400) != 0 )
            {
              v26 = 0;
              v27 = 0;
              while ( 1 )
              {
                v28 = (_QWORD **)v38;
                if ( v27 )
                  v28 = (_QWORD **)v37;
                v29 = *v28;
                if ( *v28 != v28 )
                  break;
LABEL_64:
                if ( (unsigned int)++v27 >= 2 )
                  goto LABEL_5;
              }
              while ( ++v26 != 4 )
              {
                v29 = (_QWORD *)*v29;
                if ( v29 == v28 )
                  goto LABEL_64;
              }
              v30 = MiPfCompletePrefetchIos(v37, v38, a3);
              if ( v30 < 0 && v6 >= 0 )
                v6 = v30;
              v39 = 0LL;
              goto LABEL_4;
            }
            goto LABEL_5;
          }
        }
      }
    }
    MiAdvanceFaultList(&v32);
  }
LABEL_72:
  v31 = MiPfCompletePrefetchIos(v37, v38, a3);
  if ( v31 >= 0 )
    goto LABEL_75;
  if ( v6 >= 0 )
  {
    v6 = v31;
LABEL_75:
    if ( v6 >= 0 && v4 < 0 && (v40 & 0x8000) != 0 )
      v6 = v4;
  }
  KeLeaveCriticalRegionThread(CurrentThread);
  --BYTE2(CurrentThread[1].Teb);
  return (unsigned int)v6;
}
