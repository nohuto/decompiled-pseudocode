/*
 * XREFs of MmInitSystem @ 0x1407A39F8
 * Callers:
 *     KiInitializeBootStructures @ 0x1403D4E7C (KiInitializeBootStructures.c)
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 *     MiInitializeSystemVa @ 0x1407AA428 (MiInitializeSystemVa.c)
 *     KeQueryNumaGraph @ 0x1407CFA68 (KeQueryNumaGraph.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 */

char __fastcall MmInitSystem(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rdi
  void *NumaGraph; // rax
  void *v5; // rsi

  v2 = a2;
  if ( (_DWORD)a1 == -1 )
  {
    MiInitializeSystemVa(a2);
    return 1;
  }
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      if ( (unsigned __int16)KeNumberNodes > 1u )
      {
        NumaGraph = (void *)KeQueryNumaGraph();
        v5 = NumaGraph;
        if ( NumaGraph )
        {
          memmove(qword_1403269E8, NumaGraph, 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes);
          ExFreePoolWithTag(v5, 0);
        }
      }
      MiFlags = MiFlags & 0xFFFFFFCF | 0x10;
      if ( (unsigned __int8)MiInitSystem(1LL, v2) )
      {
        byte_1403277D8 = 1;
        return 1;
      }
    }
    else if ( (_DWORD)a1 == 2 )
    {
      MiFlags = MiFlags & 0xFFFFFFCF | 0x20;
      return MiInitSystem(a1, a2);
    }
  }
  else if ( (unsigned __int8)MiInitNucleus(a2) )
  {
    a2 = v2;
    a1 = 0LL;
    return MiInitSystem(a1, a2);
  }
  return 0;
}
