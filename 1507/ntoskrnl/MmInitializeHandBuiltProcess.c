/*
 * XREFs of MmInitializeHandBuiltProcess @ 0x1405BFD3C
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     MiAllowWorkingSetExpansion @ 0x14002B61C (MiAllowWorkingSetExpansion.c)
 *     MiInsertNewProcess @ 0x14006AFE0 (MiInsertNewProcess.c)
 *     MiAllocateProcessShadow @ 0x1406A7DDC (MiAllocateProcessShadow.c)
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
  *(_QWORD *)(a1 + 40) = DirectoryTableBase;
  if ( (BYTE2(MiFlags) & 3) == 3 && (MiFlags & 0x40000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x400u);
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 1928) = a1 + 1920;
  *(_QWORD *)(a1 + 1920) = a1 + 1920;
  *(_QWORD *)(a1 + 1912) = 0LL;
  result = MiAllocateProcessShadow(a1);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1 + 1544) = 0LL;
    *(_DWORD *)(a1 + 1272) = 0;
    v5 = (_QWORD *)(a1 + 1312);
    v6 = 7LL;
    *(_QWORD *)(a1 + 1368) = *(_QWORD *)&Process[1].AddressPolicy;
    *(_QWORD *)(a1 + 1408) = *(_QWORD *)&Process[1].Spare2[39];
    *(_QWORD *)(a1 + 1416) = *(_QWORD *)&Process[1].Spare2[47];
    *(_QWORD *)(a1 + 1424) = *(_QWORD *)&Process[1].Spare2[55];
    *(_QWORD *)(a1 + 1376) = *(_QWORD *)&Process[1].Spare2[7];
    *(_QWORD *)(a1 + 1384) = *(_QWORD *)&Process[1].Spare2[15];
    *(_QWORD *)(a1 + 1392) = *(_QWORD *)&Process[1].Spare2[23];
    *(_QWORD *)(a1 + 1400) = *(_QWORD *)&Process[1].Spare2[31];
    *(_QWORD *)(a1 + 1144) = Process[1].ActiveProcessors.Bitmap[17];
    v7 = Process[1].Affinity.Bitmap[13];
    v8 = (char *)Process - a1;
    *(_QWORD *)(a1 + 920) = v7;
    *(_QWORD *)(a1 + 1456) = 0xFFFFF58010804000uLL;
    do
    {
      *v5 = *(_QWORD *)((char *)v5 + (_QWORD)v8);
      ++v5;
      --v6;
    }
    while ( v6 );
    MiInsertNewProcess((_QWORD *)a1, 0LL);
    MiAllowWorkingSetExpansion(a1 + 1272);
    return 0LL;
  }
  return result;
}
