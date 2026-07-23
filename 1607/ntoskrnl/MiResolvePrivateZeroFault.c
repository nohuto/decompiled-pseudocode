/*
 * XREFs of MiResolvePrivateZeroFault @ 0x14003ADC0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     MiWaitForForkToComplete @ 0x1400018F0 (MiWaitForForkToComplete.c)
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x14003D000 (MiGetPageChain.c)
 *     MiComputeZeroClusterMaximum @ 0x1400B553C (MiComputeZeroClusterMaximum.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiAdvanceFaultList @ 0x1400BE040 (MiAdvanceFaultList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetClusterPage @ 0x1401F6144 (MiGetClusterPage.c)
 *     MiGet64KPage @ 0x1401FB5F0 (MiGet64KPage.c)
 */

__int64 __fastcall MiResolvePrivateZeroFault(int *a1)
{
  int v1; // r8d
  unsigned __int64 v3; // r15
  __int64 v4; // rsi
  unsigned int v5; // ecx
  _KPROCESS *Process; // rcx
  unsigned __int16 v8; // ax
  int *v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r13
  __int64 v12; // r11
  __int64 v13; // r14
  int v14; // eax
  __int64 PageChain; // rbp
  int v16; // r12d
  __int64 v17; // rax
  unsigned int v18; // r8d
  int v19; // esi
  __int64 ClusterPage; // rax
  int v21; // r15d
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r10
  int v27; // r11d
  bool v28; // zf
  unsigned __int64 v29; // r15
  __int64 v30; // r10
  char v31; // al
  unsigned __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // r11
  unsigned __int64 v35; // r9
  int v36; // r11d
  __int64 v37; // rdx
  int v38; // r14d
  __int64 v39; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+48h] [rbp-D0h]
  __int64 v41; // [rsp+50h] [rbp-C8h]
  _QWORD v42[3]; // [rsp+58h] [rbp-C0h] BYREF
  __int16 v43; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD *v44; // [rsp+78h] [rbp-A0h]
  __int64 v45; // [rsp+80h] [rbp-98h]
  __int64 v46; // [rsp+88h] [rbp-90h]
  __int64 v47; // [rsp+90h] [rbp-88h]
  char v48; // [rsp+120h] [rbp+8h] BYREF
  int v49; // [rsp+128h] [rbp+10h]
  int *v50; // [rsp+138h] [rbp+20h]

  v1 = *a1;
  v3 = *((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 7);
  if ( (*a1 & 2) != 0 )
  {
    if ( ((v5 = a1[8], v5 >> 3 != 3) || (v5 & 7) == 0) && v5 >> 3 != 1 || (v1 & 4) == 0 )
    {
      MiAdvanceFaultList(v4);
      return 0LL;
    }
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v41 = *((_QWORD *)a1 + 6);
  v8 = *(_WORD *)(v41 + 164);
  if ( v8 == 1023 )
    v9 = MiSystemPartition;
  else
    v9 = *(int **)(qword_140327038 + 8LL * v8);
  v50 = v9;
  if ( (v1 & 0x20) != 0
    && Process[1].Affinity.Bitmap[10]
    && (unsigned int)MiWaitForForkToComplete((__int64)Process, *((unsigned __int8 *)a1 + 40)) == 1 )
  {
    return 0LL;
  }
  v10 = 1LL;
  v11 = -1LL;
  v39 = 1LL;
  v12 = *((_QWORD *)a1 + 8);
  v13 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = a1[11];
  PageChain = 0LL;
  v49 = 0;
  v40 = v12;
  if ( v12 )
  {
    v16 = *a1 & 5;
    if ( v16 )
    {
      v17 = MiComputeZeroClusterMaximum(v4, v12);
      v12 = v40;
      v11 = v17;
      v49 = 1;
    }
    v18 = *(_DWORD *)(v12 + 48);
    v19 = (v18 >> 8) & 0x3F;
    if ( (v18 & 0x108000) == 0x108000 )
    {
      ClusterPage = MiGetClusterPage(v12, v3, a1[8], a1[9], (__int64)&v48);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          v39 = 1LL;
          if ( v48 == 1 )
            *a1 |= 4u;
        }
        else
        {
          v29 = v3 & 0xFFFFFFFFFFFF0000uLL;
          *((_QWORD *)a1 + 1) = v29;
          v10 = 16LL;
          v39 = 16LL;
          v13 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
      }
    }
    else if ( !v16
           && ((v3 >> 9) & 0x78) == 0
           && (v18 & 0x8000) != 0
           && (v18 & 7) != 4
           && !a1[9]
           && v3 >= ((*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) + 16) << 12
           && ((v3 >> 9) & 0xFF8) != 0
           && (v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v30 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
      do
      {
        v31 = MI_READ_PTE_LOCK_FREE(v30);
        if ( (v31 & 1) == 0 )
          break;
        if ( (v31 & 0x20) == 0 )
          break;
        ++v32;
        v30 = v33 - 8;
      }
      while ( v32 < 0x10 );
      if ( v32 == 16 )
      {
        v42[1] = 0x10000LL;
        v44 = v42;
        v42[0] = v3 & 0xFFFFFFFFFFFFF000uLL;
        v43 = 0;
        v45 = 1LL;
        v46 = 0LL;
        v47 = 0LL;
        v11 = MiComputeZeroClusterMaximum(&v43, v34);
        if ( v11 >= 0x10 )
        {
          v11 = 16LL;
          v21 = 2;
          goto LABEL_24;
        }
      }
    }
    v21 = v49;
    if ( !v49 )
    {
      v38 = (int)v50;
LABEL_60:
      if ( PageChain )
        return MiCompletePrivateZeroFault(a1, PageChain, v10);
      goto LABEL_63;
    }
    if ( PageChain )
      return MiCompletePrivateZeroFault(a1, PageChain, v10);
LABEL_24:
    v10 = 1LL;
    if ( v11 > 1 )
    {
      v22 = v13 + 8;
      do
      {
        v23 = MI_READ_PTE_LOCK_FREE(v22);
        if ( v27 )
        {
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v23, v24, v25, v23) )
            break;
          v28 = v36 == ((v35 >> 5) & 0x1F);
        }
        else
        {
          v28 = v23 == 0;
        }
        if ( !v28 )
          break;
        ++v10;
        v22 = v26 + 8;
      }
      while ( v10 < v11 );
    }
    if ( v21 == 2 )
    {
      if ( v10 == v11 )
      {
        if ( v19 )
          v37 = (unsigned int)(v19 - 1);
        else
          v37 = *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 23524);
        v38 = (int)v50;
        PageChain = MiGet64KPage(v50, v37, (unsigned int)a1[8]);
        if ( PageChain )
        {
          *a1 |= 0x80u;
          v39 = v10;
          goto LABEL_60;
        }
        goto LABEL_58;
      }
      v10 = 1LL;
    }
    v38 = (int)v50;
LABEL_58:
    v39 = v10;
    goto LABEL_60;
  }
  v38 = (int)v50;
  v19 = v14;
LABEL_63:
  PageChain = MiGetPageChain(v38, v41, v19, a1[8], 66, -1LL, (__int64)&v39);
  if ( !PageChain )
    return 3221225495LL;
  v10 = v39;
  return MiCompletePrivateZeroFault(a1, PageChain, v10);
}
