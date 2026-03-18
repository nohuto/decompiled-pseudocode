/*
 * XREFs of MiPrefetchVirtualMemory @ 0x1400DEBC8
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiInPageSingleKernelStack @ 0x1400DE01C (MiInPageSingleKernelStack.c)
 *     MiPrefetchRestOfCluster @ 0x1400DEAF8 (MiPrefetchRestOfCluster.c)
 *     MmCopyMemory @ 0x1402160E4 (MmCopyMemory.c)
 *     MiPrefetchDriverPages @ 0x14042530C (MiPrefetchDriverPages.c)
 *     MmPrefetchVirtualMemory @ 0x1404FB458 (MmPrefetchVirtualMemory.c)
 *     NtSetInformationVirtualMemory @ 0x1404FB5E8 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiPfCompletePrefetchIos @ 0x140086168 (MiPfCompletePrefetchIos.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiCommitmentAvailable @ 0x1400DEFAC (MiCommitmentAvailable.c)
 *     MiAdvanceFaultList @ 0x1400DF8F4 (MiAdvanceFaultList.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiPfCoalesceAndIssueIOs @ 0x14012471C (MiPfCoalesceAndIssueIOs.c)
 *     MiLeapPrefetch @ 0x14015C0CC (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rbx
  char v8; // r8
  unsigned __int64 v9; // r11
  __int16 *v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  ULONG_PTR *v15; // rdx
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r14
  int v19; // r11d
  int v20; // eax
  __int16 v21; // ax
  $CD287064E7C9F7953DE243E927CFCB99 *v22; // rcx
  bool v24; // zf
  int v25; // edx
  int v26; // ecx
  _QWORD *v27; // rax
  _QWORD *i; // r8
  int v29; // eax
  int v30; // [rsp+20h] [rbp-60h] BYREF
  __int64 v31; // [rsp+28h] [rbp-58h]
  unsigned __int64 v32; // [rsp+30h] [rbp-50h]
  unsigned __int64 v33; // [rsp+38h] [rbp-48h]
  unsigned __int64 v34; // [rsp+40h] [rbp-40h]
  _BYTE *v35[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v36[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-18h] BYREF
  int v38; // [rsp+70h] [rbp-10h]

  LOWORD(v30) = 1;
  v31 = a2;
  v35[1] = v35;
  v32 = a1;
  v35[0] = v35;
  v33 = 0LL;
  v36[1] = v36;
  v6 = 0;
  v34 = 0LL;
  v36[0] = v36;
  v37 = 0LL;
  v38 = a4;
  CurrentThread = KeGetCurrentThread();
  if ( BYTE2(CurrentThread[1].Teb) >= 2u )
    return 3221225626LL;
  v10 = MiPartitionIdToPointer(WORD2(CurrentThread->ApcState.Process[1].SecurePid));
  BYTE2(CurrentThread[1].Teb) = v8 + 1;
  --CurrentThread->KernelApcDisable;
  while ( 1 )
  {
LABEL_3:
    if ( v33 >= v32 )
      goto LABEL_33;
    v11 = a2 + 16 * v33;
    if ( v34 >= (*(_QWORD *)(v11 + 8) + 4095LL + (unsigned __int64)(*(_DWORD *)v11 & 0xFFF)) >> 12 )
      goto LABEL_32;
    if ( *(_QWORD *)(v11 + 8) == v9 )
      break;
    v12 = *(_QWORD *)v11 + (v34 << 12);
    v13 = v12;
    if ( v12 + 0xA8000000000LL > 0xFFFFFFFFFFLL )
    {
      LODWORD(v14) = v9;
      v15 = &BugCheckParameter2;
      do
      {
        if ( v12 >= *v15 && v12 < ((*(_QWORD *)(*v15 + 104) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
          goto LABEL_32;
        v14 = (unsigned int)(v14 + 1);
        v15 += 32;
      }
      while ( (unsigned int)v14 < 3 );
      if ( v12 >= (unsigned __int64)xmmword_14034EAE0 && v12 < ((qword_14034EAF0 + 4095) & 0xFFFFFFFFFFFFF000uLL) )
        goto LABEL_32;
      if ( v12 + 0x98000000000LL <= 0x7FFFFFFFFFLL )
      {
        if ( v12 >= 0xFFFFF6C000000000uLL )
          goto LABEL_32;
        do
        {
          if ( v13 > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          v13 = (__int64)(v13 << 25) >> 16;
        }
        while ( v13 >= 0xFFFFF68000000000uLL );
      }
      if ( v13 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
      {
        if ( a3 == 1 )
          goto LABEL_32;
        v24 = (*(_BYTE *)(a3 + 216) & 7) == 1;
      }
      else
      {
        if ( v13 < 0xFFFF800000000000uLL )
        {
          if ( a3 == 1 || (*(_BYTE *)(a3 + 216) & 7) != 0 )
            goto LABEL_32;
LABEL_16:
          if ( (v38 & 0x80u) == 0
            && (*((_QWORD *)v10 + 688) < 0x100uLL
             || (unsigned __int64)MiCommitmentAvailable(v10, v15, v14, 256LL, v30, v31) < 0x1000
             || *((_QWORD *)v10 + 696) < v16) )
          {
            goto LABEL_33;
          }
          v17 = v33;
          v18 = v34;
          v19 = MmAccessFault(0LL, v12, 0, (ULONG_PTR)&v30 + 1);
          if ( BYTE1(v30) == 2 )
          {
            if ( (v38 & 0x80u) == 0 )
              goto LABEL_33;
          }
          else if ( BYTE1(v30) != 1 )
          {
            if ( BYTE1(v30) == 3 )
            {
              BYTE1(v30) = 0;
              v33 = v17;
              v34 = v18;
            }
            else if ( v33 == v17 && v34 == v18 )
            {
              MiAdvanceFaultList(&v30);
            }
            goto LABEL_26;
          }
          BYTE1(v30) = 0;
LABEL_26:
          if ( v19 < 0 && (v19 != -1073741819 || v33 == v32 || !(unsigned int)MiLeapPrefetch(&v30, 0LL)) )
            goto LABEL_33;
          if ( v37 >= 0x200000 )
            MiPfCoalesceAndIssueIOs(v36, v35, &v37);
          v9 = 0LL;
          if ( (v38 & 0x400) != 0 )
          {
            v25 = 0;
            v26 = 0;
            while ( 2 )
            {
              v27 = v36;
              if ( v26 )
                v27 = v35;
              for ( i = (_QWORD *)*v27; i != v27; i = (_QWORD *)*i )
              {
                if ( ++v25 == 4 )
                {
                  v29 = MiPfCompletePrefetchIos(v35, (__int64)v36, a3);
                  v9 = 0LL;
                  if ( v29 < 0 && v6 >= 0 )
                    v6 = v29;
                  v37 = 0LL;
                  goto LABEL_3;
                }
              }
              if ( (unsigned int)++v26 < 2 )
                continue;
              break;
            }
          }
          continue;
        }
        v24 = a3 == 1;
      }
      if ( !v24 )
        goto LABEL_32;
      goto LABEL_16;
    }
LABEL_32:
    MiAdvanceFaultList(&v30);
  }
  v33 = v32;
  v34 = v9;
LABEL_33:
  v20 = MiPfCompletePrefetchIos(v35, (__int64)v36, a3);
  if ( v20 < 0 && v6 >= 0 )
    v6 = v20;
  v21 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v21;
  if ( !v21 )
  {
    v22 = &CurrentThread->152;
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != v22
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v22);
    }
  }
  --BYTE2(CurrentThread[1].Teb);
  return (unsigned int)v6;
}
