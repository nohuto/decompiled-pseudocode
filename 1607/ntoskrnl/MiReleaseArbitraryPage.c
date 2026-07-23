/*
 * XREFs of MiReleaseArbitraryPage @ 0x1401FA254
 * Callers:
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int8 v6; // r10
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  MiLockPageInline(v1);
  v3 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0LL;
  *v3 = 0LL;
  if ( MiPteInShadowRange((unsigned __int64)v3) )
    MiWritePteShadow(v4, (unsigned int)v5);
  *(_QWORD *)(a1 + 56) = v5;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v6;
  __writecr8(v6);
  return result;
}
