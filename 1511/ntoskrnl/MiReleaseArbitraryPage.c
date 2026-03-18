/*
 * XREFs of MiReleaseArbitraryPage @ 0x14012B824
 * Callers:
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiCombineWorkingSet @ 0x1401E0DFC (MiCombineWorkingSet.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v3; // al
  _QWORD *v4; // r14
  unsigned __int8 v5; // bp
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  v3 = MiLockPageInline(v1);
  v4 = *(_QWORD **)(a1 + 56);
  v5 = v3;
  *(_QWORD *)(a1 + 48) = 0LL;
  *v4 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v4) )
    MiWritePteShadow(v4, 0LL);
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v5;
  __writecr8(v5);
  return result;
}
