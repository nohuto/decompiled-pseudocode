/*
 * XREFs of MmInitializeHandBuiltProcess @ 0x14057D568
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiAllowWorkingSetExpansion @ 0x14007BEDC (MiAllowWorkingSetExpansion.c)
 *     MiInsertNewProcess @ 0x1400FF514 (MiInsertNewProcess.c)
 *     MiAllocateProcessShadow @ 0x14065B9B4 (MiAllocateProcessShadow.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess(__int64 a1)
{
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rax
  unsigned __int64 DirectoryTableBase; // rdx
  LONG *v5; // r14
  __int64 result; // rax
  LONG *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rcx

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  DirectoryTableBase = Process->DirectoryTableBase;
  *(_DWORD *)(a1 + 768) |= 0x2000000u;
  *(_QWORD *)(a1 + 872) = 0LL;
  v5 = SharedVm;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 40) = DirectoryTableBase;
  *(_QWORD *)(a1 + 1928) = a1 + 1920;
  *(_QWORD *)(a1 + 1920) = a1 + 1920;
  *(_QWORD *)(a1 + 1912) = 0LL;
  result = MiAllocateProcessShadow(a1);
  if ( (int)result >= 0 )
  {
    v7 = MiGetSharedVm(a1 + 1280);
    v8 = (_QWORD *)(a1 + 1320);
    *v7 = 0;
    *(_QWORD *)(a1 + 1568) = 0LL;
    *(_QWORD *)(a1 + 1384) = *(_QWORD *)&Process[1].Spare2[28];
    *(_QWORD *)(a1 + 1424) = *(_QWORD *)&Process[1].Spare2[68];
    *((_QWORD *)v7 + 6) = *((_QWORD *)v5 + 6);
    *((_QWORD *)v7 + 7) = *((_QWORD *)v5 + 7);
    v9 = 7LL;
    *(_QWORD *)(a1 + 1392) = *(_QWORD *)&Process[1].Spare2[36];
    *(_QWORD *)(a1 + 1400) = *(_QWORD *)&Process[1].Spare2[44];
    *(_QWORD *)(a1 + 1408) = *(_QWORD *)&Process[1].Spare2[52];
    *(_QWORD *)(a1 + 1416) = *(_QWORD *)&Process[1].Spare2[60];
    *(_QWORD *)(a1 + 1152) = Process[1].ActiveProcessors.Bitmap[18];
    *(_QWORD *)(a1 + 920) = Process[1].Affinity.Bitmap[13];
    *(_QWORD *)(a1 + 1296) = qword_140327FD0 + 276840816;
    do
    {
      *v8 = *(_QWORD *)((char *)v8 + (_QWORD)Process - a1);
      ++v8;
      --v9;
    }
    while ( v9 );
    MiInsertNewProcess((_QWORD *)a1, 0LL);
    MiAllowWorkingSetExpansion(a1 + 1280);
    return 0LL;
  }
  return result;
}
