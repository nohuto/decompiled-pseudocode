/*
 * XREFs of MiUpdateLargePagePfns @ 0x1401F5C84
 * Callers:
 *     MiFindLargePageMemory @ 0x1406627C8 (MiFindLargePageMemory.c)
 * Callees:
 *     MiLockPageAtDpc @ 0x140159950 (MiLockPageAtDpc.c)
 *     MiShouldYieldProcessor @ 0x1401E66CC (MiShouldYieldProcessor.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiUpdateLargePagePfns(__int64 a1, int a2)
{
  int v2; // r14d
  _KPROCESS *Process; // r13
  __int64 DemandZeroPte; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // r15d
  __int64 v9; // r12
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v11; // r8
  __int64 v12; // rcx

  v2 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v7 = 48 * v6 - 0x58000000000LL;
  v8 = 0;
  v9 = v7 + 24576;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  do
  {
    MiLockPageAtDpc(v7);
    if ( *(_QWORD *)(v7 + 16) == DemandZeroPte )
    {
      v8 = 1;
      v11 = a2 & (unsigned int)dword_140326A38 | (((unsigned int)(*(_QWORD *)(v7 + 40) >> 36) & 3) << byte_140326A18) | (unsigned __int64)((unsigned __int8)((*(_QWORD *)(v7 + 40) >> 58) & 0x3F) << byte_140326A09);
      v12 = 3 * v11;
      *(_QWORD *)v7 = *(_QWORD *)(a1 + 24 * v11 + 16);
      ++*(_QWORD *)(a1 + 8 * v12 + 8);
      *(_QWORD *)(a1 + 8 * v12 + 16) = v7;
    }
    else
    {
      *(_QWORD *)v7 = Process;
      *(_QWORD *)(v7 + 16) = DemandZeroPte;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++a2;
    v7 += 48LL;
    if ( (++v2 & 0xF) == 0 && MiShouldYieldProcessor() )
    {
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
  }
  while ( v7 != v9 );
  __writecr8(CurrentIrql);
  return v8;
}
