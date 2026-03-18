/*
 * XREFs of MiMapArbitraryPage @ 0x140129AC0
 * Callers:
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x1401E0DFC (MiCombineWorkingSet.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiCombineCandidate @ 0x14012A1D0 (MiCombineCandidate.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapArbitraryPage(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int64 *v5; // r14
  __int64 v7; // rdx
  int v8; // r12d
  int v9; // ebx
  unsigned __int8 CurrentIrql; // si
  int v12; // eax
  __int64 v13; // r9
  char v15; // al
  int v16; // edx
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 v18; // rbx
  int v19; // [rsp+70h] [rbp+18h] BYREF
  int v20; // [rsp+78h] [rbp+20h]

  v20 = a4;
  v4 = a2[8];
  v5 = (unsigned __int64 *)a2[9];
  v7 = (unsigned __int128)((v4 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = a4;
  v9 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v19 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v19, v7, a3);
      while ( (*(_QWORD *)(v4 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) );
    v8 = v20;
  }
  v12 = MiCombineCandidate(a1, v4);
  if ( v9 )
  {
    if ( v12 != v9 )
      goto LABEL_7;
  }
  else if ( !v12 )
  {
LABEL_7:
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  if ( v8 == 1 && (unsigned __int8)((*(_BYTE *)(v4 + 34) & 7) - 2) > 1u )
    goto LABEL_7;
  v15 = *(_BYTE *)(v4 + 34) >> 6;
  if ( v15 == 3 )
    goto LABEL_7;
  if ( v15 )
  {
    v16 = 1;
    if ( v15 == 2 )
      v16 = 25;
  }
  else
  {
    v16 = 9;
  }
  ValidKernelPte = MiMakeValidKernelPte((v4 + 0x58000000000LL) / 48, v16, (unsigned __int64)v5, v13);
  a2[7] = v5;
  a2[6] = v4;
  v18 = ValidKernelPte;
  *v5 = ValidKernelPte;
  if ( (unsigned int)MiPteInShadowRange(v5) )
    MiWritePteShadow(v5, v18);
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return 1LL;
}
