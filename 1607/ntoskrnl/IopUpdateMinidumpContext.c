/*
 * XREFs of IopUpdateMinidumpContext @ 0x1401C7970
 * Callers:
 *     IoWriteCrashDump @ 0x1401C645C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401C7CC4 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x1400E90BC (MmIsSpecialPoolAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     IopGetMaxValidMemorySize @ 0x1401C7384 (IopGetMaxValidMemorySize.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401CC168 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401CC26C (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401CC508 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x1401CC770 (IopAddBugcheckTriageThread.c)
 */

__int64 __fastcall IopUpdateMinidumpContext(
        int a1,
        unsigned __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  char v6; // r12
  __int64 v11; // rbx
  __int64 result; // rax
  char *v13; // rdx
  unsigned __int64 v14; // r15
  unsigned int v15; // edx
  int MaxValidMemorySize; // eax
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  __int64 *i; // rdi
  __int64 v21; // rcx
  __int128 v22; // xmm1

  v6 = 0;
  if ( a1 != 126 )
  {
    if ( a1 == 127 )
    {
      v11 = (__int64)a6;
      if ( a2 == 8 )
      {
        a6[20] = a3[43];
        a6[31] = a3[45];
        a6[19] = a3[48];
      }
      goto LABEL_5;
    }
LABEL_8:
    v11 = (__int64)a6;
    goto LABEL_9;
  }
  if ( !a5 )
    goto LABEL_8;
  v11 = a5;
LABEL_5:
  v6 = 1;
LABEL_9:
  IoAddTriageDumpDataBlock(a2 & 0xFFFFF000, 4096);
  IoAddTriageDumpDataBlock((unsigned int)a3 & 0xFFFFF000, 4096);
  IoAddTriageDumpDataBlock(a4 & 0xFFFFF000, 4096);
  IoAddTriageDumpDataBlock(a5 & 0xFFFFF000, 4096);
  if ( a1 == 205 || a1 == 214 || a1 == 209 && (unsigned int)MmIsSpecialPoolAddress(a2) )
    IoAddTriageDumpDataBlock((a2 - 4096) & 0xFFFFF000, 4096);
  result = (unsigned int)KeKernelStackSize;
  v13 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
  v14 = *(_QWORD *)(v11 + 152);
  if ( (unsigned __int64)&v13[-(unsigned int)KeKernelStackSize] <= v14 && v14 < (unsigned __int64)v13 )
  {
    if ( (unsigned __int64)&v13[-v14] >= 0x7FFF )
      v15 = 0x7FFF;
    else
      v15 = (_DWORD)v13 - v14;
    MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(v11 + 152), v15);
    result = IoAddTriageDumpDataBlock(v14, MaxValidMemorySize);
  }
  if ( a1 == 335 || a1 == 348 )
  {
    if ( a5 )
    {
      result = IoAddTriageDumpDataBlock(a5, 16);
      if ( *(_QWORD *)(a5 + 8) )
        result = ((__int64 (*)(void))IopAddBugcheckTriageThread)();
    }
  }
  if ( a1 == 159 )
  {
    if ( a2 == 4 )
    {
      if ( a4 )
        result = IopAddBugcheckPnpTriageData(a4, a5);
      goto LABEL_39;
    }
    if ( a2 != 3 )
      goto LABEL_39;
    result = IopAddBugcheckPowerTriageData(a3, a4, a5);
  }
  if ( a1 == 160 )
  {
    if ( a2 != 1561 )
      goto LABEL_39;
    result = IopAddBugcheckTriageDeviceNode(a3[6]);
  }
  if ( a1 == 257 && !a3 )
  {
    v17 = *(_QWORD *)(a4 + 8);
    IoAddTriageDumpDataBlock(a4, 32448);
    IoAddTriageDumpDataBlock(*(_QWORD *)(a4 + 25344), 1232);
    v18 = *(_QWORD *)(v17 + 88);
    v19 = *(_QWORD *)(*(_QWORD *)(a4 + 25344) + 152LL) - 4096LL;
    if ( v19 < *(_QWORD *)(v17 + 48) )
      v19 = *(_QWORD *)(v17 + 48);
    *(_QWORD *)(v17 + 88) = v19;
    result = IopAddBugcheckTriageThread(*(_QWORD *)(a4 + 8));
    *(_QWORD *)(v17 + 88) = v18;
  }
LABEL_39:
  for ( i = (__int64 *)PopThermal; i != &PopThermal; i = (__int64 *)*i )
    result = IoAddTriageDumpDataBlock((int)i, 856);
  if ( v6 )
  {
    result = CrashdmpDumpBlock;
    if ( CrashdmpDumpBlock )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 24) |= 0x10000000u;
      v21 = 9LL;
      result = CrashdmpDumpBlock + 64;
      do
      {
        *(_OWORD *)result = *(_OWORD *)v11;
        *(_OWORD *)(result + 16) = *(_OWORD *)(v11 + 16);
        *(_OWORD *)(result + 32) = *(_OWORD *)(v11 + 32);
        *(_OWORD *)(result + 48) = *(_OWORD *)(v11 + 48);
        *(_OWORD *)(result + 64) = *(_OWORD *)(v11 + 64);
        *(_OWORD *)(result + 80) = *(_OWORD *)(v11 + 80);
        *(_OWORD *)(result + 96) = *(_OWORD *)(v11 + 96);
        result += 128LL;
        v22 = *(_OWORD *)(v11 + 112);
        v11 += 128LL;
        *(_OWORD *)(result - 16) = v22;
        --v21;
      }
      while ( v21 );
      *(_OWORD *)result = *(_OWORD *)v11;
      *(_OWORD *)(result + 16) = *(_OWORD *)(v11 + 16);
      *(_OWORD *)(result + 32) = *(_OWORD *)(v11 + 32);
      *(_OWORD *)(result + 48) = *(_OWORD *)(v11 + 48);
      *(_OWORD *)(result + 64) = *(_OWORD *)(v11 + 64);
    }
  }
  return result;
}
