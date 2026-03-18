/*
 * XREFs of MmInitializeHandBuiltProcess @ 0x140548C5C
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     MiInsertNewProcess @ 0x14001899C (MiInsertNewProcess.c)
 *     MiAllowWorkingSetExpansion @ 0x14009B3B4 (MiAllowWorkingSetExpansion.c)
 *     MiAllocateProcessShadow @ 0x140626044 (MiAllocateProcessShadow.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess(__int64 a1)
{
  _KPROCESS *Process; // rdi
  unsigned __int64 DirectoryTableBase; // rax
  __int64 result; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  char *v8; // rdi

  Process = KeGetCurrentThread()->ApcState.Process;
  DirectoryTableBase = Process->DirectoryTableBase;
  *(_DWORD *)(a1 + 768) |= 0x2000000u;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 40) = DirectoryTableBase;
  *(_QWORD *)(a1 + 1912) = a1 + 1904;
  *(_QWORD *)(a1 + 1904) = a1 + 1904;
  *(_QWORD *)(a1 + 1896) = 0LL;
  result = MiAllocateProcessShadow(a1);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1 + 1552) = 0LL;
    *(_DWORD *)(a1 + 1280) = 0;
    v5 = (_QWORD *)(a1 + 1320);
    v6 = 7LL;
    *(_QWORD *)(a1 + 1376) = *(_QWORD *)&Process[1].Spare2[7];
    *(_QWORD *)(a1 + 1416) = *(_QWORD *)&Process[1].Spare2[47];
    *(_QWORD *)(a1 + 1424) = *(_QWORD *)&Process[1].Spare2[55];
    *(_QWORD *)(a1 + 1432) = *(_QWORD *)&Process[1].Spare2[63];
    *(_QWORD *)(a1 + 1384) = *(_QWORD *)&Process[1].Spare2[15];
    *(_QWORD *)(a1 + 1392) = *(_QWORD *)&Process[1].Spare2[23];
    *(_QWORD *)(a1 + 1400) = *(_QWORD *)&Process[1].Spare2[31];
    *(_QWORD *)(a1 + 1408) = *(_QWORD *)&Process[1].Spare2[39];
    *(_QWORD *)(a1 + 1152) = Process[1].ActiveProcessors.Bitmap[18];
    v7 = Process[1].Affinity.Bitmap[13];
    v8 = (char *)Process - a1;
    *(_QWORD *)(a1 + 920) = v7;
    *(_QWORD *)(a1 + 1464) = 0xFFFFF58010804000uLL;
    do
    {
      *v5 = *(_QWORD *)((char *)v5 + (_QWORD)v8);
      ++v5;
      --v6;
    }
    while ( v6 );
    MiInsertNewProcess((_QWORD *)a1, 0LL);
    MiAllowWorkingSetExpansion(a1 + 1280);
    return 0LL;
  }
  return result;
}
